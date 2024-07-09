/*
    Copyright (C) Zhaqian

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/**
 * @file    hal_efl_lld.c
 * @brief   AT32F403_7xx Embedded Flash subsystem low level driver source.
 *
 * @addtogroup HAL_EFL
 * @{
 */

#include <string.h>

#include "hal.h"

#if (HAL_USE_EFL == TRUE) || defined(__DOXYGEN__)

/*===========================================================================*/
/* Driver local definitions.                                                 */
/*===========================================================================*/

#define AT32_FLASH_LINE_SIZE               2U
#define AT32_FLASH_LINE_MASK               (AT32_FLASH_LINE_SIZE - 1U)

#define AT32_FLASH_GET_BANK(addr, bank)                                            \
do {                                                                               \
  if ((addr >= FLASH_BANK1_START_ADDR) && (addr <= FLASH_BANK1_END_ADDR)) {        \
    bank = FLASH_BANK_1;                                                           \
  } else if ((addr >= FLASH_BANK2_START_ADDR) && (addr <= FLASH_BANK2_END_ADDR)) { \
    bank = FLASH_BANK_2;                                                           \
  } else {                                                                         \
    bank = FLASH_BANK_SPIM;                                                        \
  }                                                                                \
} while (0)
/*===========================================================================*/
/* Driver exported variables.                                                */
/*===========================================================================*/

/**
 * @brief   EFL1 driver identifier.
 */
EFlashDriver EFLD1;

/*===========================================================================*/
/* Driver local variables and types.                                         */
/*===========================================================================*/

static const flash_descriptor_t efl_lld_descriptor = {
 .attributes        = FLASH_ATTR_ERASED_IS_ONE |
                      FLASH_ATTR_MEMORY_MAPPED,
 .page_size         = AT32_FLASH_LINE_SIZE,
 .sectors_count     = AT32_FLASH_NUMBER_OF_BANKS *
                      AT32_FLASH_SECTORS_PER_BANK,
 .sectors           = NULL,
 .sectors_size      = AT32_FLASH_SECTOR_SIZE,
 .address           = (uint8_t *)FLASH_BASE,
 .size              = AT32_FLASH_NUMBER_OF_BANKS *
                      AT32_FLASH_SECTORS_PER_BANK *
                      AT32_FLASH_SECTOR_SIZE
};

/*===========================================================================*/
/* Driver local functions.                                                   */
/*===========================================================================*/

static inline void at32_flash_lock(EFlashDriver *eflp, flash_bank_t bank) {

  switch (bank) {
    case FLASH_BANK_1: {
      eflp->flash->CTRL |= FLASH_CTRL_OPLK;
      break;
    }
    case FLASH_BANK_2: {
      eflp->flash->CTRL2 |= FLASH_CTRL_OPLK;
      break;
    }
    case FLASH_BANK_SPIM: {
      eflp->flash->CTRL3 |= FLASH_CTRL_OPLK;
      break;
    }
  }
}

static inline void at32_flash_unlock(EFlashDriver *eflp, flash_bank_t bank) {

  switch (bank) {
    case FLASH_BANK_1: {
      eflp->flash->UNLOCK = FLASH_UNLOCK_KEY1;
      eflp->flash->UNLOCK = FLASH_UNLOCK_KEY2;
      break;
    }
    case FLASH_BANK_2: {
      eflp->flash->UNLOCK2 = FLASH_UNLOCK_KEY1;
      eflp->flash->UNLOCK2 = FLASH_UNLOCK_KEY2;
      break;
    }
    case FLASH_BANK_SPIM: {
      eflp->flash->UNLOCK3 = FLASH_UNLOCK_KEY1;
      eflp->flash->UNLOCK3 = FLASH_UNLOCK_KEY2;
      break;
    }
  }
}

static inline void at32_flash_enable_pgm(EFlashDriver *eflp, flash_bank_t bank) {

  switch (bank) {
    case FLASH_BANK_1: {
      eflp->flash->CTRL |= FLASH_CTRL_FPRGM;
      break;
    }
    case FLASH_BANK_2: {
      eflp->flash->CTRL2 |= FLASH_CTRL_FPRGM;
      break;
    }
    case FLASH_BANK_SPIM: {
      eflp->flash->CTRL3 |= FLASH_CTRL_FPRGM;
      break;
    }
  }
}

static inline void at32_flash_disable_pgm(EFlashDriver *eflp, flash_bank_t bank) {

  switch (bank) {
    case FLASH_BANK_1: {
      eflp->flash->CTRL &= ~FLASH_CTRL_FPRGM;
      break;
    }
    case FLASH_BANK_2: {
      eflp->flash->CTRL2 &= ~FLASH_CTRL_FPRGM;
      break;
    }
    case FLASH_BANK_SPIM: {
      eflp->flash->CTRL3 &= ~FLASH_CTRL_FPRGM;
      break;
    }
  }
}

static inline void at32_flash_clear_status(EFlashDriver *eflp, flash_bank_t bank) {
  
  switch (bank) {
    case FLASH_BANK_1: {
      eflp->flash->STS = FLASH_STS_PRGMERR | FLASH_STS_EPPERR;
      break;
    }
    case FLASH_BANK_2: {
      eflp->flash->STS2 = FLASH_STS_PRGMERR | FLASH_STS_EPPERR;
      break;
    }
    case FLASH_BANK_SPIM: {
      eflp->flash->STS3 = FLASH_STS_PRGMERR | FLASH_STS_EPPERR;
      break;
    }
  }
}

static inline uint32_t at32_flash_is_busy(EFlashDriver *eflp, flash_bank_t bank) {

  switch (bank) {
    case FLASH_BANK_1: {
      return (eflp->flash->STS & FLASH_STS_OBF);
    }
    case FLASH_BANK_2: {
      return (eflp->flash->STS2 & FLASH_STS_OBF);
    }
    case FLASH_BANK_SPIM: {
      return (eflp->flash->STS3 & FLASH_STS_OBF);
    }
  }
  return 0;
}

static inline void at32_flash_wait_busy(EFlashDriver *eflp, flash_bank_t bank) {

  /* Wait for busy bit clear.*/
  while (at32_flash_is_busy(eflp, bank) != 0U) {
  }
}

/*===========================================================================*/
/* Driver interrupt handlers.                                                */
/*===========================================================================*/

/*===========================================================================*/
/* Driver exported functions.                                                */
/*===========================================================================*/

/**
 * @brief   Low level Embedded Flash driver initialization.
 *
 * @notapi
 */
void efl_lld_init(void) {

  /* Driver initialization.*/
  eflObjectInit(&EFLD1);
  EFLD1.flash = FLASH;
}

/**
 * @brief   Configures and activates the Embedded Flash peripheral.
 *
 * @param[in] eflp      pointer to a @p EFlashDriver structure
 *
 * @notapi
 */
void efl_lld_start(EFlashDriver *eflp) {

  at32_flash_unlock(eflp, FLASH_BANK_1);
  eflp->flash->CTRL = 0x00000000U;
  at32_flash_unlock(eflp, FLASH_BANK_2);
  eflp->flash->CTRL2 = 0x00000000U;
}

/**
 * @brief   Deactivates the Embedded Flash peripheral.
 *
 * @param[in] eflp      pointer to a @p EFlashDriver structure
 *
 * @notapi
 */
void efl_lld_stop(EFlashDriver *eflp) {

  at32_flash_lock(eflp, FLASH_BANK_1);
  at32_flash_lock(eflp, FLASH_BANK_2);
}

/**
 * @brief   Gets the flash descriptor structure.
 *
 * @param[in] ip                    pointer to a @p EFlashDriver instance
 * @return                          A flash device descriptor.
 *
 * @notapi
 */
const flash_descriptor_t *efl_lld_get_descriptor(void *instance) {

  (void)instance;

  return &efl_lld_descriptor;
}

/**
 * @brief   Read operation.
 *
 * @param[in] ip                    pointer to a @p EFlashDriver instance
 * @param[in] offset                flash offset
 * @param[in] n                     number of bytes to be read
 * @param[out] rp                   pointer to the data buffer
 * @return                          An error code.
 * @retval FLASH_NO_ERROR           if there is no erase operation in progress.
 * @retval FLASH_BUSY_ERASING       if there is an erase operation in progress.
 * @retval FLASH_ERROR_READ         if the read operation failed.
 * @retval FLASH_ERROR_HW_FAILURE   if access to the memory failed.
 *
 * @notapi
 */
flash_error_t efl_lld_read(void *instance, flash_offset_t offset,
                           size_t n, uint8_t *rp) {
  EFlashDriver *devp = (EFlashDriver *)instance;
  flash_error_t err = FLASH_NO_ERROR;
  uint32_t addr = (uint32_t)(efl_lld_descriptor.address + offset);
  flash_bank_t bank;

  osalDbgCheck((instance != NULL) && (rp != NULL) && (n > 0U));
  osalDbgCheck((size_t)offset + n <= (size_t)efl_lld_descriptor.size);
  osalDbgAssert((devp->state == FLASH_READY) || (devp->state == FLASH_ERASE),
                "invalid state");

  /* No reading while erasing.*/
  if (devp->state == FLASH_ERASE) {
    return FLASH_BUSY_ERASING;
  }

  /* FLASH_READY state while the operation is performed.*/
  devp->state = FLASH_READ;

  AT32_FLASH_GET_BANK(addr, bank);

  /* Clearing error status bits.*/
  at32_flash_clear_status(devp, bank);

  /* Actual read implementation.*/
  memcpy((void *)rp, (const void *)(efl_lld_descriptor.address + offset), n);

  /* Ready state again.*/
  devp->state = FLASH_READY;

  return err;
}

/**
 * @brief   Program operation.
 * @note    It is only possible to write erased pages once except
 *          when writing all zeroes.
 *
 * @param[in] ip                    pointer to a @p EFlashDriver instance
 * @param[in] offset                flash offset
 * @param[in] n                     number of bytes to be programmed
 * @param[in] pp                    pointer to the data buffer
 * @return                          An error code.
 * @retval FLASH_NO_ERROR           if there is no erase operation in progress.
 * @retval FLASH_BUSY_ERASING       if there is an erase operation in progress.
 * @retval FLASH_ERROR_PROGRAM      if the program operation failed.
 * @retval FLASH_ERROR_HW_FAILURE   if access to the memory failed.
 *
 * @notapi
 */
flash_error_t efl_lld_program(void *instance, flash_offset_t offset,
                              size_t n, const uint8_t *pp) {
  EFlashDriver *devp = (EFlashDriver *)instance;
  flash_error_t err = FLASH_NO_ERROR;
  uint32_t addr = (uint32_t)(efl_lld_descriptor.address + offset);
  flash_bank_t bank;

  osalDbgCheck((instance != NULL) && (pp != NULL) && (n > 0U));
  osalDbgCheck((size_t)offset + n <= (size_t)efl_lld_descriptor.size);

  osalDbgAssert((devp->state == FLASH_READY) || (devp->state == FLASH_ERASE),
                "invalid state");

  /* No programming while erasing.*/
  if (devp->state == FLASH_ERASE) {
    return FLASH_BUSY_ERASING;
  }

  /* FLASH_PGM state while the operation is performed.*/
  devp->state = FLASH_PGM;

  AT32_FLASH_GET_BANK(addr, bank);

  /* Clearing error status bits.*/
  at32_flash_clear_status(devp, bank);

  /* Enabling PGM mode in the controller.*/
  at32_flash_enable_pgm(devp, bank);

  /* Actual program implementation.*/
  while (n > 0U) {
    volatile uint16_t *address;

    union {
      uint16_t  hw[AT32_FLASH_LINE_SIZE / sizeof (uint16_t)];
      uint8_t   b[AT32_FLASH_LINE_SIZE / sizeof (uint8_t)];
    } line;

    /* Unwritten bytes are initialized to all ones.*/
    line.hw[0] = 0xFFFFU;

    /* Programming address aligned to flash lines.*/
    address = (volatile uint16_t *)(efl_lld_descriptor.address +
                                    (offset & ~AT32_FLASH_LINE_MASK));

    /* Copying data inside the prepared line.*/
    do {
      line.b[offset & AT32_FLASH_LINE_MASK] = *pp;
      offset++;
      n--;
      pp++;
    }
    while ((n > 0U) & ((offset & AT32_FLASH_LINE_MASK) != 0U));
    /* Programming line.*/
    address[0] = line.hw[0];
    at32_flash_wait_busy(devp, bank);

    uint32_t sts = 0;

    switch (bank) {
      case FLASH_BANK_1: {
        sts = devp->flash->STS;
        break;
      }
      case FLASH_BANK_2: {
        sts = devp->flash->STS2;
        break;
      }
      case FLASH_BANK_SPIM: {
        sts = devp->flash->STS3;
        break;
      }
    }
  
    /* Clearing error status bits.*/
    at32_flash_clear_status(devp, bank);

    /* Decoding relevant errors.*/
    if ((sts & FLASH_STS_EPPERR) != 0U) {
      err = FLASH_ERROR_HW_FAILURE;
      break;
    }
    else if ((sts & FLASH_STS_PRGMERR) != 0U) {
      err = FLASH_ERROR_PROGRAM;
      break;
    }
    else if ((sts & FLASH_STS_ODF) == 0U) {
      err = FLASH_ERROR_PROGRAM;
      break;
    }

    /* Check for flash error.*/
    if (address[0] != line.hw[0]) {
      err = FLASH_ERROR_PROGRAM;
      break;
    }
  }

  /* Disabling PGM mode in the controller.*/
  at32_flash_disable_pgm(devp, bank);

  /* Ready state again.*/
  devp->state = FLASH_READY;

  return err;
}

/**
 * @brief   Starts a whole-device erase operation.
 * @note    This function does nothing, the flash memory is where the program
 *          is running on.
 *
 * @param[in] ip                    pointer to a @p EFlashDriver instance
 * @return                          An error code.
 * @retval FLASH_NO_ERROR           if there is no erase operation in progress.
 * @retval FLASH_BUSY_ERASING       if there is an erase operation in progress.
 * @retval FLASH_ERROR_HW_FAILURE   if access to the memory failed.
 *
 * @notapi
 */
flash_error_t efl_lld_start_erase_all(void *instance) {
  (void) instance;

  return FLASH_ERROR_UNIMPLEMENTED;
}

/**
 * @brief   Starts an sector erase operation.
 *
 * @param[in] ip                    pointer to a @p EFlashDriver instance
 * @param[in] sector                sector to be erased
 * @return                          An error code.
 * @retval FLASH_NO_ERROR           if there is no erase operation in progress.
 * @retval FLASH_BUSY_ERASING       if there is an erase operation in progress.
 * @retval FLASH_ERROR_HW_FAILURE   if access to the memory failed.
 *
 * @notapi
 */
flash_error_t efl_lld_start_erase_sector(void *instance,
                                         flash_sector_t sector) {
  EFlashDriver *devp = (EFlashDriver *)instance;
  uint32_t addr = (uint32_t)(efl_lld_descriptor.address + sector * AT32_FLASH_SECTOR_SIZE);
  flash_bank_t bank;
  osalDbgCheck(instance != NULL);
  osalDbgCheck(sector < efl_lld_descriptor.sectors_count);
  osalDbgAssert((devp->state == FLASH_READY) || (devp->state == FLASH_ERASE),
                "invalid state");

  /* No erasing while erasing.*/
  if (devp->state == FLASH_ERASE) {
    return FLASH_BUSY_ERASING;
  }

  /* FLASH_PGM state while the operation is performed.*/
  devp->state = FLASH_ERASE;

  AT32_FLASH_GET_BANK(addr, bank);

  /* Clearing error status bits.*/
  at32_flash_clear_status(devp, bank);

  switch (bank) {
    case FLASH_BANK_1: {
      devp->flash->CTRL |= FLASH_CTRL_SECERS;
      devp->flash->ADDR = (uint32_t)(efl_lld_descriptor.address +
                         flashGetSectorOffset(getBaseFlash(devp), sector));
      devp->flash->CTRL |= FLASH_CTRL_ERSTR;
      break;
    }
    case FLASH_BANK_2: {
      devp->flash->CTRL2 |= FLASH_CTRL_SECERS;
      devp->flash->ADDR2 = (uint32_t)(efl_lld_descriptor.address +
                         flashGetSectorOffset(getBaseFlash(devp), sector));
      devp->flash->CTRL2 |= FLASH_CTRL_ERSTR;
      break;
    }
    case FLASH_BANK_SPIM: {
      devp->flash->CTRL3 |= FLASH_CTRL_SECERS;
      devp->flash->ADDR3 = (uint32_t)(efl_lld_descriptor.address +
                         flashGetSectorOffset(getBaseFlash(devp), sector));
      devp->flash->CTRL3 |= FLASH_CTRL_ERSTR;
      break;
    }
  }

  return FLASH_NO_ERROR;
}

/**
 * @brief   Queries the driver for erase operation progress.
 *
 * @param[in] ip                    pointer to a @p EFlashDriver instance
 * @param[out] wait_time            recommended time, in milliseconds, that
 *                                  should be spent before calling this
 *                                  function again, can be @p NULL
 * @return                          An error code.
 * @retval FLASH_NO_ERROR           if there is no erase operation in progress.
 * @retval FLASH_BUSY_ERASING       if there is an erase operation in progress.
 * @retval FLASH_ERROR_ERASE        if the erase operation failed.
 * @retval FLASH_ERROR_HW_FAILURE   if access to the memory failed.
 *
 * @api
 */
flash_error_t efl_lld_query_erase(void *instance, uint32_t *wait_time) {
  EFlashDriver *devp = (EFlashDriver *)instance;
  flash_error_t err;

  /* If there is an erase in progress then the device must be checked.*/
  if (devp->state == FLASH_ERASE) {

    /* Checking for operation in progress.*/
    if (at32_flash_is_busy(devp, FLASH_BANK_1) == 0U || at32_flash_is_busy(devp, FLASH_BANK_2) == 0U) {
      if (at32_flash_is_busy(devp, FLASH_BANK_1) == 0U) {
        /* Disabling the various erase control bits.*/
        devp->flash->CTRL &= ~(FLASH_CTRL_USDERS | FLASH_CTRL_USDPRGM |
                           FLASH_CTRL_BANKERS | FLASH_CTRL_SECERS);
      }
      if (at32_flash_is_busy(devp, FLASH_BANK_2) == 0U) {
        /* Disabling the various erase control bits.*/
        devp->flash->CTRL2 &= ~(FLASH_CTRL_USDERS | FLASH_CTRL_USDPRGM |
                           FLASH_CTRL_BANKERS | FLASH_CTRL_SECERS);
      }

      /* Back to ready state.*/
      devp->state = FLASH_READY;

      err = FLASH_NO_ERROR;
    }
    else {
      /* Recommended time before polling again, this is a simplified
         implementation.*/
      if (wait_time != NULL) {
        *wait_time = (uint32_t)AT32_FLASH_WAIT_TIME_MS;
      }

      err = FLASH_BUSY_ERASING;
    }
  }
  else {
    err = FLASH_NO_ERROR;
  }

  return err;
}

/**
 * @brief   Returns the erase state of a sector.
 *
 * @param[in] ip                    pointer to a @p EFlashDriver instance
 * @param[in] sector                sector to be verified
 * @return                          An error code.
 * @retval FLASH_NO_ERROR           if the sector is erased.
 * @retval FLASH_BUSY_ERASING       if there is an erase operation in progress.
 * @retval FLASH_ERROR_VERIFY       if the verify operation failed.
 * @retval FLASH_ERROR_HW_FAILURE   if access to the memory failed.
 *
 * @notapi
 */
flash_error_t efl_lld_verify_erase(void *instance, flash_sector_t sector) {
  EFlashDriver *devp = (EFlashDriver *)instance;
  uint32_t *address;
  flash_error_t err = FLASH_NO_ERROR;
  unsigned i;

  osalDbgCheck(instance != NULL);
  osalDbgCheck(sector < efl_lld_descriptor.sectors_count);
  osalDbgAssert((devp->state == FLASH_READY) || (devp->state == FLASH_ERASE),
                "invalid state");

  /* No verifying while erasing.*/
  if (devp->state == FLASH_ERASE) {
    return FLASH_BUSY_ERASING;
  }

  /* Address of the sector.*/
  address = (uint32_t *)(efl_lld_descriptor.address +
                         flashGetSectorOffset(getBaseFlash(devp), sector));

  /* FLASH_READY state while the operation is performed.*/
  devp->state = FLASH_READ;

  /* Scanning the sector space.*/
  for (i = 0U; i < AT32_FLASH_SECTOR_SIZE / sizeof(uint32_t); i++) {
    if (*address != 0xFFFFFFFFU) {
      err = FLASH_ERROR_VERIFY;
      break;
    }
    address++;
  }

  /* Ready state again.*/
  devp->state = FLASH_READY;

  return err;
}

#endif /* HAL_USE_EFL == TRUE */

/** @} */
