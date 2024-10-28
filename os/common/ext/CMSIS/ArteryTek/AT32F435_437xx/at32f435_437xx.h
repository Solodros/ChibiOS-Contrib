/**
  **************************************************************************
  * @file     at32f435_437.h
  * @brief    at32f435_437 header file
  **************************************************************************
  *                       Copyright notice & Disclaimer
  *
  * The software Board Support Package (BSP) that is made available to
  * download from Artery official website is the copyrighted work of Artery.
  * Artery authorizes customers to use, copy, and distribute the BSP
  * software and its related documentation for the purpose of design and
  * development in conjunction with Artery microcontrollers. Use of the
  * software is governed by this copyright notice and the following disclaimer.
  *
  * THIS SOFTWARE IS PROVIDED ON "AS IS" BASIS WITHOUT WARRANTIES,
  * GUARANTEES OR REPRESENTATIONS OF ANY KIND. ARTERY EXPRESSLY DISCLAIMS,
  * TO THE FULLEST EXTENT PERMITTED BY LAW, ALL EXPRESS, IMPLIED OR
  * STATUTORY OR OTHER WARRANTIES, GUARANTEES OR REPRESENTATIONS,
  * INCLUDING BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY,
  * FITNESS FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT.
  *
  **************************************************************************
  */

#ifndef __AT32F435_437_H
#define __AT32F435_437_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined (__CC_ARM)
 #pragma anon_unions
#endif


/** @addtogroup CMSIS
  * @{
  */

/** @addtogroup AT32F435_437
  * @{
  */

/** @addtogroup Library_configuration_section
  * @{
  */

/**
  * tip: to avoid modifying this file each time you need to switch between these
  *      devices, you can define the device in your toolchain compiler preprocessor.
  */

#if !defined (AT32F435CCU7) && !defined (AT32F435CGU7) && !defined (AT32F435CMU7) && \
    !defined (AT32F435CCT7) && !defined (AT32F435CGT7) && !defined (AT32F435CMT7) && \
    !defined (AT32F435RCT7) && !defined (AT32F435RGT7) && !defined (AT32F435RMT7) && \
    !defined (AT32F435VCT7) && !defined (AT32F435VGT7) && !defined (AT32F435VMT7) && \
    !defined (AT32F435ZCT7) && !defined (AT32F435ZGT7) && !defined (AT32F435ZMT7) && \
    !defined (AT32F437RCT7) && !defined (AT32F437RGT7) && !defined (AT32F437RMT7) && \
    !defined (AT32F437VCT7) && !defined (AT32F437VGT7) && !defined (AT32F437VMT7) && \
    !defined (AT32F437ZCT7) && !defined (AT32F437ZGT7) && !defined (AT32F437ZMT7)

    #error "Please select first the target device used in your application (in at32f435_437.h file)"
#endif

#if defined (AT32F435CCU7) || defined (AT32F435CGU7) || defined (AT32F435CMU7) || \
    defined (AT32F435CCT7) || defined (AT32F435CGT7) || defined (AT32F435CMT7) || \
    defined (AT32F435RCT7) || defined (AT32F435RGT7) || defined (AT32F435RMT7) || \
    defined (AT32F435VCT7) || defined (AT32F435VGT7) || defined (AT32F435VMT7) || \
    defined (AT32F435ZCT7) || defined (AT32F435ZGT7) || defined (AT32F435ZMT7)

    #define AT32F435xx
#endif

#if defined (AT32F437RCT7) || defined (AT32F437RGT7) || defined (AT32F437RMT7) || \
    defined (AT32F437VCT7) || defined (AT32F437VGT7) || defined (AT32F437VMT7) || \
    defined (AT32F437ZCT7) || defined (AT32F437ZGT7) || defined (AT32F437ZMT7)

    #define AT32F437xx
#endif

#if defined (AT32F435ZCT7) || defined (AT32F435ZGT7) || defined (AT32F435ZMT7)

    #define AT32F435Zx
#endif

#if defined (AT32F435VCT7) || defined (AT32F435VGT7) || defined (AT32F435VMT7)

    #define AT32F435Vx
#endif

#if defined (AT32F435RCT7) || defined (AT32F435RGT7) || defined (AT32F435RMT7)

    #define AT32F435Rx
#endif

#if defined (AT32F435CCU7) || defined (AT32F435CGU7) || defined (AT32F435CMU7) || \
    defined (AT32F435CCT7) || defined (AT32F435CGT7) || defined (AT32F435CMT7)

    #define AT32F435Cx
#endif

#if defined (AT32F437ZCT7) || defined (AT32F437ZGT7) || defined (AT32F437ZMT7)

    #define AT32F437Zx
#endif

#if defined (AT32F437VCT7) || defined (AT32F437VGT7) || defined (AT32F437VMT7)

    #define AT32F437Vx
#endif

#if defined (AT32F437RCT7) || defined (AT32F437RGT7) || defined (AT32F437RMT7)

    #define AT32F437Rx
#endif

#if defined (AT32F437RMT7) || defined (AT32F437VMT7) || defined (AT32F437ZMT7)

    #define AT32F437xM
#endif

#if defined (AT32F435CMT7) || defined (AT32F435RMT7) || defined (AT32F435VMT7) || defined (AT32F435ZMT7)

    #define AT32F435xM
#endif

#if defined (AT32F437RGT7) || defined (AT32F437VGT7) || defined (AT32F437ZGT7)

    #define AT32F437xG
#endif

#if defined (AT32F435CGT7) || defined (AT32F435RGT7) || defined (AT32F435VGT7) || defined (AT32F435ZGT7)

    #define AT32F435xG
#endif

#define AT32F435_437xx

#ifndef USE_STDPERIPH_DRIVER
/**
  * @brief comment the line below if you will not use the peripherals drivers.
  * in this case, these drivers will not be included and the application code will
  * be based on direct access to peripherals registers
  */
  #ifdef _RTE_
    #include "RTE_Components.h"
    #ifdef RTE_DEVICE_STDPERIPH_FRAMEWORK
      #define USE_STDPERIPH_DRIVER
    #endif
  #endif
#endif

/**
  * @brief at32f435_437 standard peripheral library version number
  */
#define __AT32F435_437_LIBRARY_VERSION_MAJOR    (0x02) /*!< [31:24] major version */
#define __AT32F435_437_LIBRARY_VERSION_MIDDLE   (0x01) /*!< [23:16] middle version */
#define __AT32F435_437_LIBRARY_VERSION_MINOR    (0x02) /*!< [15:8]  minor version */
#define __AT32F435_437_LIBRARY_VERSION_RC       (0x00) /*!< [7:0]  release candidate */
#define __AT32F435_437_LIBRARY_VERSION          ((__AT32F435_437_LIBRARY_VERSION_MAJOR << 24)  | \
                                                 (__AT32F435_437_LIBRARY_VERSION_MIDDLE << 16) | \
                                                 (__AT32F435_437_LIBRARY_VERSION_MINOR << 8)   | \
                                                 (__AT32F435_437_LIBRARY_VERSION_RC))

/**
  * @}
  */

/** @addtogroup configuration_section_for_cmsis
  * @{
  */

/**
  * @brief configuration of the cortex-m4 processor and core peripherals
  */
#define __CM4_REV                 0x0001U  /*!< core revision r0p1                           */
#define __MPU_PRESENT             1        /*!< mpu present                                  */
#define __NVIC_PRIO_BITS          4        /*!< at32 uses 4 bits for the priority levels     */
#define __Vendor_SysTickConfig    0        /*!< set to 1 if different systick config is used */
#define __FPU_PRESENT             1U       /*!< fpu present                                  */

/**
  * @brief at32f435_437 interrupt number definition, according to the selected device
  *        in @ref library_configuration_section
  */
typedef enum IRQn
{
    /******  cortex-m4 processor exceptions numbers ***************************************************/
    Reset_IRQn                  = -15,    /*!< 1 reset vector, invoked on power up and warm reset   */
    NonMaskableInt_IRQn         = -14,    /*!< 2 non maskable interrupt                             */
    HardFault_IRQn              = -13,    /*!< 3 hard fault, all classes of fault                   */
    MemoryManagement_IRQn       = -12,    /*!< 4 cortex-m4 memory management interrupt              */
    BusFault_IRQn               = -11,    /*!< 5 cortex-m4 bus fault interrupt                      */
    UsageFault_IRQn             = -10,    /*!< 6 cortex-m4 usage fault interrupt                    */
    SVCall_IRQn                 = -5,     /*!< 11 cortex-m4 sv call interrupt                       */
    DebugMonitor_IRQn           = -4,     /*!< 12 cortex-m4 debug monitor interrupt                 */
    PendSV_IRQn                 = -2,     /*!< 14 cortex-m4 pend sv interrupt                       */
    SysTick_IRQn                = -1,     /*!< 15 cortex-m4 system tick interrupt                   */

    /******  at32 specific interrupt numbers *********************************************************/
    WWDT_IRQn                   = 0,      /*!< window watchdog timer interrupt                      */
    PVM_IRQn                    = 1,      /*!< pvm through exint line detection interrupt           */
    TAMP_STAMP_IRQn             = 2,      /*!< tamper and timestamp interrupts through the exint line */
    ERTC_WKUP_IRQn              = 3,      /*!< ertc wakeup through the exint line                   */
    FLASH_IRQn                  = 4,      /*!< flash global interrupt                               */
    CRM_IRQn                    = 5,      /*!< crm global interrupt                                 */
    EXINT0_IRQn                 = 6,      /*!< exint line0 interrupt                                */
    EXINT1_IRQn                 = 7,      /*!< exint line1 interrupt                                */
    EXINT2_IRQn                 = 8,      /*!< exint line2 interrupt                                */
    EXINT3_IRQn                 = 9,      /*!< exint line3 interrupt                                */
    EXINT4_IRQn                 = 10,     /*!< exint line4 interrupt                                */
    EDMA_Stream1_IRQn           = 11,     /*!< edma stream 1 global interrupt                       */
    EDMA_Stream2_IRQn           = 12,     /*!< edma stream 2 global interrupt                       */
    EDMA_Stream3_IRQn           = 13,     /*!< edma stream 3 global interrupt                       */
    EDMA_Stream4_IRQn           = 14,     /*!< edma stream 4 global interrupt                       */
    EDMA_Stream5_IRQn           = 15,     /*!< edma stream 5 global interrupt                       */
    EDMA_Stream6_IRQn           = 16,     /*!< edma stream 6 global interrupt                       */
    EDMA_Stream7_IRQn           = 17,     /*!< edma stream 7 global interrupt                       */

#if defined (AT32F435xx)
    ADC1_2_3_IRQn               = 18,     /*!< adc1 adc2 and adc3 global interrupt                  */
    CAN1_TX_IRQn                = 19,     /*!< can1 tx interrupts                                   */
    CAN1_RX0_IRQn               = 20,     /*!< can1 rx0 interrupts                                  */
    CAN1_RX1_IRQn               = 21,     /*!< can1 rx1 interrupt                                   */
    CAN1_SE_IRQn                = 22,     /*!< can1 se interrupt                                    */
    EXINT9_5_IRQn               = 23,     /*!< external line[9:5] interrupts                        */
    TMR1_BRK_TMR9_IRQn          = 24,     /*!< tmr1 brake interrupt                                 */
    TMR1_OVF_TMR10_IRQn         = 25,     /*!< tmr1 overflow interrupt                              */
    TMR1_TRG_HALL_TMR11_IRQn    = 26,     /*!< tmr1 trigger and hall interrupt                      */
    TMR1_CH_IRQn                = 27,     /*!< tmr1 channel interrupt                               */
    TMR2_GLOBAL_IRQn            = 28,     /*!< tmr2 global interrupt                                */
    TMR3_GLOBAL_IRQn            = 29,     /*!< tmr3 global interrupt                                */
    TMR4_GLOBAL_IRQn            = 30,     /*!< tmr4 global interrupt                                */
    I2C1_EVT_IRQn               = 31,     /*!< i2c1 event interrupt                                 */
    I2C1_ERR_IRQn               = 32,     /*!< i2c1 error interrupt                                 */
    I2C2_EVT_IRQn               = 33,     /*!< i2c2 event interrupt                                 */
    I2C2_ERR_IRQn               = 34,     /*!< i2c2 error interrupt                                 */
    SPI1_IRQn                   = 35,     /*!< spi1 global interrupt                                */
    SPI2_I2S2EXT_IRQn           = 36,     /*!< spi2 global interrupt                                */
    USART1_IRQn                 = 37,     /*!< usart1 global interrupt                              */
    USART2_IRQn                 = 38,     /*!< usart2 global interrupt                              */
    USART3_IRQn                 = 39,     /*!< usart3 global interrupt                              */
    EXINT15_10_IRQn             = 40,     /*!< external line[15:10] interrupts                      */
    ERTCAlarm_IRQn              = 41,     /*!< ertc alarm through exint line interrupt              */
    OTGFS1_WKUP_IRQn            = 42,     /*!< otgfs1 wakeup from suspend through exint line interrupt */
    TMR8_BRK_TMR12_IRQn         = 43,     /*!< tmr8 brake interrupt                                 */
    TMR8_OVF_TMR13_IRQn         = 44,     /*!< tmr8 overflow interrupt                              */
    TMR8_TRG_HALL_TMR14_IRQn    = 45,     /*!< tmr8 trigger and hall interrupt                      */
    TMR8_CH_IRQn                = 46,     /*!< tmr8 channel interrupt                               */
    EDMA_Stream8_IRQn           = 47,     /*!< edma stream 8 global interrupt                       */
    XMC_IRQn                    = 48,     /*!< xmc global interrupt                                 */
    SDIO1_IRQn                  = 49,     /*!< sdio global interrupt                                */
    TMR5_GLOBAL_IRQn            = 50,     /*!< tmr5 global interrupt                                */
    SPI3_I2S3EXT_IRQn           = 51,     /*!< spi3 global interrupt                                */
    UART4_IRQn                  = 52,     /*!< uart4 global interrupt                               */
    UART5_IRQn                  = 53,     /*!< uart5 global interrupt                               */
    TMR6_DAC_GLOBAL_IRQn        = 54,     /*!< tmr6 and dac global interrupt                        */
    TMR7_GLOBAL_IRQn            = 55,     /*!< tmr7 global interrupt                                */
    DMA1_Channel1_IRQn          = 56,     /*!< dma1 channel 0 global interrupt                      */
    DMA1_Channel2_IRQn          = 57,     /*!< dma1 channel 1 global interrupt                      */
    DMA1_Channel3_IRQn          = 58,     /*!< dma1 channel 2 global interrupt                      */
    DMA1_Channel4_IRQn          = 59,     /*!< dma1 channel 3 global interrupt                      */
    DMA1_Channel5_IRQn          = 60,     /*!< dma1 channel 4 global interrupt                      */
    CAN2_TX_IRQn                = 63,     /*!< can2 tx interrupt                                    */
    CAN2_RX0_IRQn               = 64,     /*!< can2 rx0 interrupt                                   */
    CAN2_RX1_IRQn               = 65,     /*!< can2 rx1 interrupt                                   */
    CAN2_SE_IRQn                = 66,     /*!< can2 se interrupt                                    */
    OTGFS1_IRQn                 = 67,     /*!< otgfs1 interrupt                                     */
    DMA1_Channel6_IRQn          = 68,     /*!< dma1 channel 5 global interrupt                      */
    DMA1_Channel7_IRQn          = 69,     /*!< dma1 channel 6 global interrupt                      */
    USART6_IRQn                 = 71,     /*!< usart6 interrupt                                     */
    I2C3_EVT_IRQn               = 72,     /*!< i2c3 event interrupt                                 */
    I2C3_ERR_IRQn               = 73,     /*!< i2c3 error interrupt                                 */
    OTGFS2_WKUP_IRQn            = 76,     /*!< otgfs2 wakeup from suspend through exint line interrupt */
    OTGFS2_IRQn                 = 77,     /*!< otgfs2 interrupt                                     */
    DVP_IRQn                    = 78,     /*!< dvp interrupt                                        */
    FPU_IRQn                    = 81,     /*!< fpu interrupt                                        */
    UART7_IRQn                  = 82,     /*!< uart7 interrupt                                      */
    UART8_IRQn                  = 83,     /*!< uart8 interrupt                                      */
    SPI4_IRQn                   = 84,     /*!< spi4 global interrupt                                */
    QSPI2_IRQn                  = 91,     /*!< qspi2 global interrupt                               */
    QSPI1_IRQn                  = 92,     /*!< qspi1 global interrupt                               */
    DMAMUX_IRQn                 = 94,     /*!< dmamux global interrupt                              */
    SDIO2_IRQn                  = 102,    /*!< sdio2 global interrupt                               */
    ACC_IRQn                    = 103,    /*!< acc interrupt                                        */
    TMR20_BRK_IRQn              = 104,    /*!< tmr20 brake interrupt                                */
    TMR20_OVF_IRQn              = 105,    /*!< tmr20 overflow interrupt                             */
    TMR20_TRG_HALL_IRQn         = 106,    /*!< tmr20 trigger and hall interrupt                     */
    TMR20_CH_IRQn               = 107,    /*!< tmr20 channel interrupt                              */
    DMA2_Channel1_IRQn          = 108,    /*!< dma2 channel 1 global interrupt                      */
    DMA2_Channel2_IRQn          = 109,    /*!< dma2 channel 2 global interrupt                      */
    DMA2_Channel3_IRQn          = 110,    /*!< dma2 channel 3 global interrupt                      */
    DMA2_Channel4_IRQn          = 111,    /*!< dma2 channel 4 global interrupt                      */
    DMA2_Channel5_IRQn          = 112,    /*!< dma2 channel 5 global interrupt                      */
    DMA2_Channel6_IRQn          = 113,    /*!< dma2 channel 6 global interrupt                      */
    DMA2_Channel7_IRQn          = 114,    /*!< dma2 channel 7 global interrupt                      */
#endif

#if defined (AT32F437xx)
    ADC1_2_3_IRQn               = 18,     /*!< adc1 adc2 and adc3 global interrupt                  */
    CAN1_TX_IRQn                = 19,     /*!< can1 tx interrupts                                   */
    CAN1_RX0_IRQn               = 20,     /*!< can1 rx0 interrupts                                  */
    CAN1_RX1_IRQn               = 21,     /*!< can1 rx1 interrupt                                   */
    CAN1_SE_IRQn                = 22,     /*!< can1 se interrupt                                    */
    EXINT9_5_IRQn               = 23,     /*!< external line[9:5] interrupts                        */
    TMR1_BRK_TMR9_IRQn          = 24,     /*!< tmr1 brake interrupt                                 */
    TMR1_OVF_TMR10_IRQn         = 25,     /*!< tmr1 overflow interrupt                              */
    TMR1_TRG_HALL_TMR11_IRQn    = 26,     /*!< tmr1 trigger and hall interrupt                      */
    TMR1_CH_IRQn                = 27,     /*!< tmr1 channel interrupt                               */
    TMR2_GLOBAL_IRQn            = 28,     /*!< tmr2 global interrupt                                */
    TMR3_GLOBAL_IRQn            = 29,     /*!< tmr3 global interrupt                                */
    TMR4_GLOBAL_IRQn            = 30,     /*!< tmr4 global interrupt                                */
    I2C1_EVT_IRQn               = 31,     /*!< i2c1 event interrupt                                 */
    I2C1_ERR_IRQn               = 32,     /*!< i2c1 error interrupt                                 */
    I2C2_EVT_IRQn               = 33,     /*!< i2c2 event interrupt                                 */
    I2C2_ERR_IRQn               = 34,     /*!< i2c2 error interrupt                                 */
    SPI1_IRQn                   = 35,     /*!< spi1 global interrupt                                */
    SPI2_I2S2EXT_IRQn           = 36,     /*!< spi2 global interrupt                                */
    USART1_IRQn                 = 37,     /*!< usart1 global interrupt                              */
    USART2_IRQn                 = 38,     /*!< usart2 global interrupt                              */
    USART3_IRQn                 = 39,     /*!< usart3 global interrupt                              */
    EXINT15_10_IRQn             = 40,     /*!< external line[15:10] interrupts                      */
    ERTCAlarm_IRQn              = 41,     /*!< ertc alarm through exint line interrupt              */
    OTGFS1_WKUP_IRQn            = 42,     /*!< otgfs1 wakeup from suspend through exint line interrupt */
    TMR8_BRK_TMR12_IRQn         = 43,     /*!< tmr8 brake interrupt                                 */
    TMR8_OVF_TMR13_IRQn         = 44,     /*!< tmr8 overflow interrupt                              */
    TMR8_TRG_HALL_TMR14_IRQn    = 45,     /*!< tmr8 trigger and hall interrupt                      */
    TMR8_CH_IRQn                = 46,     /*!< tmr8 channel interrupt                               */
    EDMA_Stream8_IRQn           = 47,     /*!< dma1 stream 8 global interrupt                       */
    XMC_IRQn                    = 48,     /*!< xmc global interrupt                                 */
    SDIO1_IRQn                  = 49,     /*!< sdio global interrupt                                */
    TMR5_GLOBAL_IRQn            = 50,     /*!< tmr5 global interrupt                                */
    SPI3_I2S3EXT_IRQn           = 51,     /*!< spi3 global interrupt                                */
    UART4_IRQn                  = 52,     /*!< uart4 global interrupt                               */
    UART5_IRQn                  = 53,     /*!< uart5 global interrupt                               */
    TMR6_DAC_GLOBAL_IRQn        = 54,     /*!< tmr6 and dac global interrupt                        */
    TMR7_GLOBAL_IRQn            = 55,     /*!< tmr7 global interrupt                                */
    DMA1_Channel1_IRQn          = 56,     /*!< dma1 channel 0 global interrupt                      */
    DMA1_Channel2_IRQn          = 57,     /*!< dma1 channel 1 global interrupt                      */
    DMA1_Channel3_IRQn          = 58,     /*!< dma1 channel 2 global interrupt                      */
    DMA1_Channel4_IRQn          = 59,     /*!< dma1 channel 3 global interrupt                      */
    DMA1_Channel5_IRQn          = 60,     /*!< dma1 channel 4 global interrupt                      */
    EMAC_IRQn                   = 61,     /*!< emac interrupt                                       */
    EMAC_WKUP_IRQn              = 62,     /*!< emac wakeup interrupt                                */
    CAN2_TX_IRQn                = 63,     /*!< can2 tx interrupt                                    */
    CAN2_RX0_IRQn               = 64,     /*!< can2 rx0 interrupt                                   */
    CAN2_RX1_IRQn               = 65,     /*!< can2 rx1 interrupt                                   */
    CAN2_SE_IRQn                = 66,     /*!< can2 se interrupt                                    */
    OTGFS1_IRQn                 = 67,     /*!< otgfs1 interrupt                                     */
    DMA1_Channel6_IRQn          = 68,     /*!< dma1 channel 5 global interrupt                      */
    DMA1_Channel7_IRQn          = 69,     /*!< dma1 channel 6 global interrupt                      */
    USART6_IRQn                 = 71,     /*!< usart6 interrupt                                     */
    I2C3_EVT_IRQn               = 72,     /*!< i2c3 event interrupt                                 */
    I2C3_ERR_IRQn               = 73,     /*!< i2c3 error interrupt                                 */
    OTGFS2_WKUP_IRQn            = 76,     /*!< otgfs2 wakeup from suspend through exint line interrupt */
    OTGFS2_IRQn                 = 77,     /*!< otgfs2 interrupt                                     */
    DVP_IRQn                    = 78,     /*!< dvp interrupt                                        */
    FPU_IRQn                    = 81,     /*!< fpu interrupt                                        */
    UART7_IRQn                  = 82,     /*!< uart7 interrupt                                      */
    UART8_IRQn                  = 83,     /*!< uart8 interrupt                                      */
    SPI4_IRQn                   = 84,     /*!< spi4 global interrupt                                */
    QSPI2_IRQn                  = 91,     /*!< qspi2 global interrupt                               */
    QSPI1_IRQn                  = 92,     /*!< qspi1 global interrupt                               */
    DMAMUX_IRQn                 = 94,     /*!< dmamux global interrupt                              */
    SDIO2_IRQn                  = 102,    /*!< sdio2 global interrupt                               */
    ACC_IRQn                    = 103,    /*!< acc interrupt                                        */
    TMR20_BRK_IRQn              = 104,    /*!< tmr20 brake interrupt                                */
    TMR20_OVF_IRQn              = 105,    /*!< tmr20 overflow interrupt                             */
    TMR20_TRG_HALL_IRQn         = 106,    /*!< tmr20 trigger and hall interrupt                     */
    TMR20_CH_IRQn               = 107,    /*!< tmr20 channel interrupt                              */
    DMA2_Channel1_IRQn          = 108,    /*!< dma2 channel 1 global interrupt                      */
    DMA2_Channel2_IRQn          = 109,    /*!< dma2 channel 2 global interrupt                      */
    DMA2_Channel3_IRQn          = 110,    /*!< dma2 channel 3 global interrupt                      */
    DMA2_Channel4_IRQn          = 111,    /*!< dma2 channel 4 global interrupt                      */
    DMA2_Channel5_IRQn          = 112,    /*!< dma2 channel 5 global interrupt                      */
    DMA2_Channel6_IRQn          = 113,    /*!< dma2 channel 6 global interrupt                      */
    DMA2_Channel7_IRQn          = 114,    /*!< dma2 channel 7 global interrupt                      */
#endif

} IRQn_Type;

/**
  * @}
  */

#include "core_cm4.h"
#include <stdint.h>

/** @addtogroup Exported_types
  * @{
  */

typedef int32_t  INT32;
typedef int16_t  INT16;
typedef int8_t   INT8;
typedef uint32_t UINT32;
typedef uint16_t UINT16;
typedef uint8_t  UINT8;

typedef int32_t  s32;
typedef int16_t  s16;
typedef int8_t   s8;

typedef const int32_t sc32;   /*!< read only */
typedef const int16_t sc16;   /*!< read only */
typedef const int8_t  sc8;    /*!< read only */

typedef __IO int32_t  vs32;
typedef __IO int16_t  vs16;
typedef __IO int8_t   vs8;

typedef __I int32_t vsc32;    /*!< read only */
typedef __I int16_t vsc16;    /*!< read only */
typedef __I int8_t  vsc8;     /*!< read only */

typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t  u8;

typedef const uint32_t uc32;  /*!< read only */
typedef const uint16_t uc16;  /*!< read only */
typedef const uint8_t  uc8;   /*!< read only */

typedef __IO uint32_t vu32;
typedef __IO uint16_t vu16;
typedef __IO uint8_t  vu8;

typedef __I uint32_t vuc32;   /*!< read only */
typedef __I uint16_t vuc16;   /*!< read only */
typedef __I uint8_t  vuc8;    /*!< read only */

typedef enum {RESET = 0, SET = !RESET} flag_status;
typedef enum {ERROR = 0, SUCCESS = !ERROR} error_status;

/**
  * @}
  */

/** @addtogroup Exported_macro
  * @{
  */

#define REG8(addr)                       *(volatile uint8_t *)(addr)
#define REG16(addr)                      *(volatile uint16_t *)(addr)
#define REG32(addr)                      *(volatile uint32_t *)(addr)

#define MAKE_VALUE(reg_offset, bit_num)  (((reg_offset) << 16) | (bit_num & 0x1f))

#define PERIPH_REG(periph_base, value)   REG32((periph_base + (value >> 16)))
#define PERIPH_REG_BIT(value)            (0x1u << (value & 0x1f))

/**
  * @}
  */



/** @addtogroup Peripheral_registers_structures
  * @{
  */

/* ================================================================================ */
/* ================                       ACC                      ================ */
/* ================================================================================ */


/**
  * @brief HSI Auto Clock Calibration (ACC)
  */

typedef struct
{                                                   /*!< ACC Structure                                                         */
  __IO uint32_t  STS;                               /*!< status register                                                       */
  __IO uint32_t  CTRL1;                             /*!< control register 1                                                    */
  __IO uint32_t  CTRL2;                             /*!< control register 2                                                    */
  __IO uint32_t  CC1;                               /*!< compare value 1                                                       */
  __IO uint32_t  CC2;                               /*!< compare value 2                                                       */
  __IO uint32_t  CC3;                               /*!< compare value 3                                                       */
} ACC_TypeDef;


/* ================================================================================ */
/* ================                      ADC                       ================ */
/* ================================================================================ */


/**
  * @brief Analog to digital converter (ADC)
  */

typedef struct
{                                                   /*!< ADC Structure                                                         */
  __IO uint32_t  STS;                               /*!< status register                                                       */
  __IO uint32_t  CTRL1;                             /*!< control register 1                                                    */
  __IO uint32_t  CTRL2;                             /*!< control register 2                                                    */
  __IO uint32_t  SPT1;                              /*!< sample time register 1                                                */
  __IO uint32_t  SPT2;                              /*!< sample time register 2                                                */
  __IO uint32_t  PCDTO1;                            /*!< Preempted channel 1 data offset register                              */
  __IO uint32_t  PCDTO2;                            /*!< Preempted channel 2 data offset register                              */
  __IO uint32_t  PCDTO3;                            /*!< Preempted channel 3 data offset register                              */
  __IO uint32_t  PCDTO4;                            /*!< Preempted channel 4 data offset register                              */
  __IO uint32_t  VMHB;                              /*!< Voltage monitoring high boundary register                             */
  __IO uint32_t  VMLB;                              /*!< Voltage monitoring low boundary register                              */
  __IO uint32_t  OSQ1;                              /*!< Ordinary sequence register 1                                          */
  __IO uint32_t  OSQ2;                              /*!< Ordinary sequence register 2                                          */
  __IO uint32_t  OSQ3;                              /*!< Ordinary sequence register 3                                          */
  __IO uint32_t  PSQ;                               /*!< Preempted sequence register                                           */
  __IO uint32_t  PDT1;                              /*!< Preempted data register 1                                             */
  __IO uint32_t  PDT2;                              /*!< Preempted data register 2                                             */
  __IO uint32_t  PDT3;                              /*!< Preempted data register 3                                             */
  __IO uint32_t  PDT4;                              /*!< Preempted data register 4                                             */
  __IO uint32_t  ODT;                               /*!< Ordinary data register                                                */
  __IO uint32_t  RESERVED0[12];
  __IO uint32_t  OVSP;                              /*!< oversampling register                                                 */
  __IO uint32_t  RESERVED1[12];
  __IO uint32_t  CALVAL;                            /*!< A/D calibration value                                                 */
} ADC_TypeDef;


/* ================================================================================ */
/* ================                     ADCCOM                     ================ */
/* ================================================================================ */


/**
  * @brief ADC common area (ADCCOM)
  */

typedef struct
{                                                   /*!< ADCCOM Structure                                                      */
  __IO uint32_t  CSTS;                              /*!< Common status register                                                */
  __IO uint32_t  CCTRL;                             /*!< Common control register                                               */
  __IO uint32_t  CODT;                              /*!< Common data register                                                  */
} ADCCOM_TypeDef;


/* ================================================================================ */
/* ================                      CAN                       ================ */
/* ================================================================================ */


/**
  * @brief Controller Area Network (CAN)
  */
/**
  * @brief Controller Area Network TX Mailbox Registers
  */

typedef struct
{
  __IO uint32_t  TMI;                               /*!< Transmit mailbox identifier register                                  */
  __IO uint32_t  TMC;                               /*!< Transmit mailbox data length and time stamp register                  */
  __IO uint32_t  TMDTL;                             /*!< Transmit mailbox low byte data register                               */
  __IO uint32_t  TMDTH;                             /*!< Transmit mailbox high byte data register                              */
} CAN_TxMailBox_TypeDef;

/**
  * @brief Controller Area Network FIFO Mailbox Registers
  */

typedef struct
{
  __IO uint32_t  RFI;                               /*!< Receive FIFO register                                                 */
  __IO uint32_t  RFC;                               /*!< Receive FIFO data length and time stamp register                      */
  __IO uint32_t  RFDTL;                             /*!< Receive FIFO low byte data register                                   */
  __IO uint32_t  RFDTH;                             /*!< Receive FIFO high byte data register                                  */
} CAN_FIFOMailBox_TypeDef;

/**
  * @brief Controller Area Network Filter Registers
  */

typedef struct
{
  __IO uint32_t  FFB1;                              /*!< Filter bank filtrate bit register 1                                   */
  __IO uint32_t  FFB2;                              /*!< Filter bank filtrate bit register 2                                   */
} CAN_FilterRegister_TypeDef;

/**
  * @brief Controller Area Network
  */

typedef struct
{                                                   /*!< CAN Structure                                                         */
  __IO uint32_t  MCTRL;                             /*!< Main control register                                                 */
  __IO uint32_t  MSTS;                              /*!< Main status register                                                  */
  __IO uint32_t  TSTS;                              /*!< Transmit status register                                              */
  __IO uint32_t  RF0;                               /*!< Receive FIFO 0 register                                               */
  __IO uint32_t  RF1;                               /*!< Receive FIFO 1 register                                               */
  __IO uint32_t  INTEN;                             /*!< Interrupt enable register                                             */
  __IO uint32_t  ESTS;                              /*!< Error status register                                                 */
  __IO uint32_t  BTMG;                              /*!< Bit timing register                                                   */
  __IO uint32_t  RESERVED0[88];
  CAN_TxMailBox_TypeDef  sTxMailBox[3];             /*!< Transmit mailbox registers                                            */
  CAN_FIFOMailBox_TypeDef  sFIFOMailBox[2];         /*!< Receive FIFO registers                                                */
  __IO uint32_t  RESERVED1[12];
  __IO uint32_t  FCTRL;                              /*!< Filter control register                                              */
  __IO uint32_t  FMCFG;                              /*!< Filter mode config register                                          */
  __IO uint32_t  RESERVED2;
  __IO uint32_t  FBWCFG;                             /*!< Filter bit width config register                                     */
  __IO uint32_t  RESERVED3;
  __IO uint32_t  FRF;                                /*!< Filter related FIFO register                                         */
  __IO uint32_t  RESERVED4;
  __IO uint32_t  FACFG;                              /*!< Filter activate configuration register                               */
  __IO uint32_t  RESERVED5[8];
  CAN_FilterRegister_TypeDef  sFilterRegister[14];   /*!< Filter registers                                                     */
} CAN_TypeDef;


/* ================================================================================ */
/* ================                       CRC                      ================ */
/* ================================================================================ */


/**
  * @brief CRC calculation unit (CRC)
  */

typedef struct
{                                                   /*!< CRC Structure                                                         */
  __IO uint32_t  DT;                                /*!< Data register                                                         */
  __IO uint32_t  CDT;                               /*!< Common data register                                                  */
  __IO uint32_t  CTRL;                              /*!< Control register                                                      */
  __IO uint32_t  RESERVED0;
  __IO uint32_t  IDT;                               /*!< Initial data register                                                 */
  __IO uint32_t  POLY;                              /*!< Polynomial coefficient register                                       */
} CRC_TypeDef;


/* ================================================================================ */
/* ================                       CRM                      ================ */
/* ================================================================================ */


/**
  * @brief Clock and reset management (CRM)
  */

typedef struct
{                                                   /*!< CRM Structure                                                         */
  __IO uint32_t  CTRL;                              /*!< Clock control register                                                */
  __IO uint32_t  PLLCFG;                            /*!< PLL configuration register (CRM_PLLCFG)                               */
  __IO uint32_t  CFG;                               /*!< Clock configuration register(CRM_CFG)                                 */
  __IO uint32_t  CLKINT;                            /*!< Clock interrupt register (CRM_CLKINT)                                 */
  __IO uint32_t  AHBRST1;                           /*!< AHB peripheral reset register1 (CRM_AHBRST1)                          */
  __IO uint32_t  AHBRST2;                           /*!< AHB peripheral reset register 2 (CRM_AHBRST2)                         */
  __IO uint32_t  AHBRST3;                           /*!< AHB peripheral reset register 3 (CRM_AHBRST3)                         */
  __IO uint32_t  RESERVED0;
  __IO uint32_t  APB1RST;                           /*!< APB1 peripheral reset register (CRM_APB1RST)                          */
  __IO uint32_t  APB2RST;                           /*!< APB2 peripheral reset register (CRM_APB2RST)                          */
  __IO uint32_t  RESERVED1[2];
  __IO uint32_t  AHBEN1;                            /*!< AHB Peripheral Clock enable register 1 (CRM_AHBEN1)                   */
  __IO uint32_t  AHBEN2;                            /*!< AHB peripheral clock enable register 2 (CRM_AHBEN2)                   */
  __IO uint32_t  AHBEN3;                            /*!< AHB peripheral clock enable register 3 (CRM_AHBEN3)                   */
  __IO uint32_t  RESERVED2;
  __IO uint32_t  APB1EN;                            /*!< APB1 peripheral clock enable register (CRM_APB1EN)                    */
  __IO uint32_t  APB2EN;                            /*!< APB2 peripheral clock enable register (CRM_APB2EN)                    */
  __IO uint32_t  RESERVED3[2];
  __IO uint32_t  AHBLPEN1;                          /*!< AHB Low-power Peripheral Clock enable register 1 (CRM_AHBLPEN1)       */
  __IO uint32_t  AHBLPEN2;                          /*!< AHB peripheral Low-power clock enable register 2 (CRM_AHBLPEN2)       */
  __IO uint32_t  AHBLPEN3;                          /*!< AHB peripheral Low-power clock enable register 3 (CRM_AHBLPEN3)       */
  __IO uint32_t  RESERVED4;
  __IO uint32_t  APB1LPEN;                          /*!< APB1 peripheral Low-power clock enable register (CRM_APB1LPEN)        */
  __IO uint32_t  APB2LPEN;                          /*!< APB2 peripheral Low-power clock enable register (CRM_APB2LPEN)        */
  __IO uint32_t  RESERVED5[2];
  __IO uint32_t  BPDC;                              /*!< Battery powered domain control register (CRM_BPDC)                    */
  __IO uint32_t  CTRLSTS;                           /*!< Control/status register (CRM_CTRLSTS)                                 */
  __IO uint32_t  RESERVED6[10];
  __IO uint32_t  MISC1;                             /*!< Miscellaneous register1                                               */
  __IO uint32_t  MISC2;                             /*!< Miscellaneous register2                                               */
} CRM_TypeDef;


/* ================================================================================ */
/* ================                      DEBUG                     ================ */
/* ================================================================================ */


/**
  * @brief Debug support (DEBUG)
  */

typedef struct
{                                                   /*!< DEBUG Structure                                                       */
  __IO uint32_t  IDCODE;                            /*!< DEBUG IDCODE                                                          */
  __IO uint32_t  CTRL;                              /*!< DEBUG CTRL                                                            */
  __IO uint32_t  APB1_PAUSE;                        /*!< DEBUG APB1 PAUSE                                                      */
  __IO uint32_t  APB2_PAUSE;                        /*!< DEBUG APB2 PAUSE                                                      */
} DEBUG_TypeDef;


/* ================================================================================ */
/* ================                      DMA                       ================ */
/* ================================================================================ */


/**
  * @brief DMA controller (DMA)
  */

typedef struct
{                                                   /*!< DMA Structure                                                         */
  __IO uint32_t  STS;                               /*!< DMA interrupt status register (DMA_STS)                               */
  __IO uint32_t  CLR;                               /*!< DMA interrupt flag clear register (DMA_CLR)                           */
  __IO uint32_t  RESERVED1[62];
  __IO uint32_t  MUXSEL;                            /*!< DMAMUX Table Selection                                                */
  __IO uint32_t  RESERVED2[11];
  __IO uint32_t  MUXSYNCSTS;                        /*!< Channel Interrupt Status Register                                     */
  __IO uint32_t  MUXSYNCCLR;                        /*!< Channel Interrupt Clear Flag Register                                 */
  __IO uint32_t  MUXGSTS;                           /*!< Generator Interrupt Status Register                                   */
  __IO uint32_t  MUXGCLR;                           /*!< Generator Interrupt Clear Flag Register                               */
} DMA_TypeDef;


/* ================================================================================ */
/* ================                      DMA  Channel              ================ */
/* ================================================================================ */


/**
  * @brief DMA controller Channel(DMA Channel)
  */
typedef struct
{                                                   /*!< DMA Channel Structure                                                 */
  __IO uint32_t  CTRL;                              /*!< DMA channel configuration register                                    */
  __IO uint32_t  DTCNT;                             /*!< DMA channel number of data to transfer register                       */
  __IO uint32_t  PADDR;                             /*!< DMA channel peripheral base address register                          */
  __IO uint32_t  MADDR;                             /*!< DMA channel memory base address register                              */
} DMA_Channel_TypeDef;


/* ================================================================================ */
/* ================                      DMA MUX                   ================ */
/* ================================================================================ */


/**
  * @brief DMA MUX controller
  */
typedef struct
{
  __IO uint32_t  MUXCTRL;                            /*!< Channel Configuration Register                                       */

} DMAMUX_Channel_TypeDef;


/* ================================================================================ */
/* ================                      DMA Generator             ================ */
/* ================================================================================ */


/**
  * @brief DMA MUX Generator Configuration
  */
typedef struct
{
  __IO uint32_t  GCTRL;                             /*!< Generator Configuration Register                                      */

} DMAMUX_Generator_TypeDef;


/* ================================================================================ */
/* ================                      ERTC                      ================ */
/* ================================================================================ */


/**
  * @brief Real-time clock (ERTC)
  */

typedef struct
{                                                   /*!< ERTC Structure                                                        */
  __IO uint32_t  TIME;                              /*!< time register                                                         */
  __IO uint32_t  DATE;                              /*!< date register                                                         */
  __IO uint32_t  CTRL;                              /*!< control register                                                      */
  __IO uint32_t  STS;                               /*!< initialization and status register                                    */
  __IO uint32_t  DIV;                               /*!< Diveder register                                                      */
  __IO uint32_t  WAT;                               /*!< Wakeup timer register                                                 */
  __IO uint32_t  CCAL;                              /*!< Calibration register                                                  */
  __IO uint32_t  ALA;                               /*!< Alarm A register                                                      */
  __IO uint32_t  ALB;                               /*!< Alarm B register                                                      */
  __IO uint32_t  WP;                                /*!< write protection register                                             */
  __IO uint32_t  SBS;                               /*!< sub second register                                                   */
  __IO uint32_t  TADJ;                              /*!< time adjust register                                                  */
  __IO uint32_t  TSTM;                              /*!< time stamp time register                                              */
  __IO uint32_t  TSDT;                              /*!< timestamp date register                                               */
  __IO uint32_t  TSSBS;                             /*!< timestamp sub second register                                         */
  __IO uint32_t  SCAL;                              /*!< calibration register                                                  */
  __IO uint32_t  TAMP;                              /*!< tamper and alternate function configuration register                  */
  __IO uint32_t  ALASBS;                            /*!< alarm A sub second register                                           */
  __IO uint32_t  ALBSBS;                            /*!< alarm B sub second register                                           */
  __IO uint32_t  RESERVED0;
  __IO uint32_t  BPR1;                              /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR2;                              /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR3;                              /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR4;                              /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR5;                              /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR6;                              /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR7;                              /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR8;                              /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR9;                              /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR10;                             /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR11;                             /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR12;                             /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR13;                             /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR14;                             /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR15;                             /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR16;                             /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR17;                             /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR18;                             /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR19;                             /*!< Battery powered domain register                                       */
  __IO uint32_t  BPR20;                             /*!< Battery powered domain register                                       */
} ERTC_TypeDef;


/* ================================================================================ */
/* ================                      EXINT                     ================ */
/* ================================================================================ */


/**
  * @brief External Interrupt/Event Controller
  */

typedef struct
{                                                   /*!< EXINT Structure                                                       */
  __IO uint32_t  INTEN;                             /*!< Interrupt enable register                                             */
  __IO uint32_t  EVTEN;                             /*!< Event enable register                                                 */
  __IO uint32_t  POLCFG1;                           /*!< Rising polarity configuration register                                */
  __IO uint32_t  POLCFG2;                           /*!< Falling polarity configuration register                               */
  __IO uint32_t  SWTRG;                             /*!< Software triggle register                                             */
  __IO uint32_t  INTSTS;                            /*!< Interrupt status register                                             */
} EXINT_TypeDef;


/* ================================================================================ */
/* ================                      FLASH                     ================ */
/* ================================================================================ */


/**
  * @brief Flash memory controler (FLASH)
  */

typedef struct
{                                                   /*!< FLASH Structure                                                       */
  __IO uint32_t  PSR;                               /*!< Performance selection register                                        */
  __IO uint32_t  UNLOCK;                            /*!< Unlock register                                                       */
  __IO uint32_t  USD_UNLOCK;                        /*!< USD unlock register                                                   */
  __IO uint32_t  STS;                               /*!< Status register                                                       */
  __IO uint32_t  CTRL;                              /*!< Control register                                                      */
  __IO uint32_t  ADDR;                              /*!< Address register                                                      */
  __IO uint32_t  RESERVED0;
  __IO uint32_t  USD;                               /*!< User system data register                                             */
  __IO uint32_t  EPPS0;                             /*!< Erase/program protection status register                              */
  __IO uint32_t  RESERVED1[2];
  __IO uint32_t  EPPS1;                             /*!< Erase/program protection status register                              */
  __IO uint32_t  RESERVED2[5];
  __IO uint32_t  UNLOCK2;                           /*!< Bank2 Unlock register                                                 */
  __IO uint32_t  RESERVED3;
  __IO uint32_t  STS2;                              /*!< Bank2 Status register                                                 */
  __IO uint32_t  CTRL2;                             /*!< Bank2 Control register                                                */
  __IO uint32_t  ADDR2;                             /*!< Bank2 Address register                                                */
  __IO uint32_t  CONTR;                             /*!< Flash continue read enable register                                   */
  __IO uint32_t  RESERVED4;
  __IO uint32_t  DIVR;                              /*!< Flash divider register                                                */
  __IO uint32_t  RESERVED5[25];
  __IO uint32_t  SLIB_STS2;                         /*!< sLib status 2 register                                                */
  __IO uint32_t  SLIB_STS0;                         /*!< sLib status 0 register                                                */
  __IO uint32_t  SLIB_STS1;                         /*!< sLib status 1 register                                                */
  __IO uint32_t  SLIB_PWD_CLR;                      /*!< SLIB password clear register                                          */
  __IO uint32_t  SLIB_MISC_STS;                     /*!< sLib misc status register                                             */
  __IO uint32_t  SLIB_SET_PWD;                      /*!< sLib password setting register                                        */
  __IO uint32_t  SLIB_SET_RANGE0;                   /*!< Configure sLib range 0 register                                       */
  __IO uint32_t  SLIB_SET_RANGE1;                   /*!< Configure sLib range 1 register                                       */
  __IO uint32_t  RESERVED6[2];
  __IO uint32_t  SLIB_UNLOCK;                       /*!< sLib unlock register                                                  */
  __IO uint32_t  CRC_CTRL;                          /*!< Flash CRC controll register                                           */
  __IO uint32_t  CRC_CHKR;                          /*!< FLASH CRC check result register                                       */
} FLASH_TypeDef;


/* ================================================================================ */
/* ================                      GPIO                     ================ */
/* ================================================================================ */


/**
  * @brief General purpose I/Os (GPIO)
  */

typedef struct
{                                                   /*!< GPIO Structure                                                       */
  __IO uint32_t  CFGR;                              /*!< GPIO configuration register                                           */
  __IO uint32_t  OMODE;                             /*!< GPIO output mode register                                             */
  __IO uint32_t  ODRVR;                             /*!< GPIO drive capability register                                        */
  __IO uint32_t  PULL;                              /*!< GPIO pull-up/pull-down register                                       */
  __IO uint32_t  IDT;                               /*!< GPIO input data register                                              */
  __IO uint32_t  ODT;                               /*!< GPIO output data register                                             */
  __IO uint32_t  SCR;                               /*!< Port bit set/clear register                                           */
  __IO uint32_t  WPR;                               /*!< Port write protect register                                           */
  __IO uint32_t  MUXL;                              /*!< GPIO muxing function low register                                     */
  __IO uint32_t  MUXH;                              /*!< GPIO muxing function high register                                    */
  __IO uint32_t  CLR;                               /*!< GPIO bit reset register                                               */
  __IO uint32_t  RESERVED0[4];
  __IO uint32_t  HDRV;                              /*!< Huge current driver                                                   */
} GPIO_TypeDef;


/* ================================================================================ */
/* ================                      I2C                       ================ */
/* ================================================================================ */


/**
  * @brief Inter-integrated circuit (I2C)
  */

typedef struct
{                                                   /*!< I2C Structure                                                         */
  __IO uint32_t  CTRL1;                             /*!< Control register 1                                                    */
  __IO uint32_t  CTRL2;                             /*!< Control register 2                                                    */
  __IO uint32_t  OADDR1;                            /*!< Own address register 1                                                */
  __IO uint32_t  OADDR2;                            /*!< Own address register 2                                                */
  __IO uint32_t  CLKCTRL;                           /*!< Clock contorl register                                                */
  __IO uint32_t  TIMEOUT;                           /*!< Timeout register                                                      */
  __IO uint32_t  STS;                               /*!< Interrupt and Status register                                         */
  __IO uint32_t  CLR;                               /*!< Interrupt clear register                                              */
  __IO uint32_t  PEC;                               /*!< PEC register                                                          */
  __IO uint32_t  RXDT;                              /*!< Receive data register                                                 */
  __IO uint32_t  TXDT;                              /*!< Transmit data register                                                */
} I2C_TypeDef;


/* ================================================================================ */
/* ================                       PWC                      ================ */
/* ================================================================================ */


/**
  * @brief Power control (PWC)
  */

typedef struct
{                                                   /*!< PWC Structure                                                         */
  __IO uint32_t  CTRL;                              /*!< Power control register (PWC_CTRL)                                     */
  __IO uint32_t  CTRLSTS;                           /*!< Power control and status register (PWC_CTRLSTS)                       */
  __IO uint32_t  RESERVED0[2];
  __IO uint32_t  LDOOV;                             /*!< LDO output voltage register                                           */
} PWC_TypeDef;


/* ================================================================================ */
/* ================                      QSPI                     ================ */
/* ================================================================================ */


/**
  * @brief Quad SPI Controller (QSPI)
  */

typedef struct
{                                                   /*!< QSPI Structure                                                       */
  __IO uint32_t  CMD_W0;                            /*!< Command word 0                                                        */
  __IO uint32_t  CMD_W1;                            /*!< Command word 1                                                        */
  __IO uint32_t  CMD_W2;                            /*!< Command word 2                                                        */
  __IO uint32_t  CMD_W3;                            /*!< Command word 3                                                        */
  __IO uint32_t  CTRL;                              /*!< Control register                                                      */
  __IO uint32_t  RESERVED0;
  __IO uint32_t  FIFOSTS;                           /*!< FIFO Status register                                                  */
  __IO uint32_t  RESERVED1;
  __IO uint32_t  CTRL2;                             /*!< control register 2                                                    */
  __IO uint32_t  CMDSTS;                            /*!< CMD status register                                                   */
  __IO uint32_t  RSTS;                              /*!< SPI read status register                                              */
  __IO uint32_t  FSIZE;                             /*!< SPI flash size                                                        */
  __IO uint32_t  XIP_CMD_W0;                        /*!< XIP command word 0                                                    */
  __IO uint32_t  XIP_CMD_W1;                        /*!< XIP command word 1                                                    */
  __IO uint32_t  XIP_CMD_W2;                        /*!< XIP command word 2                                                    */
  __IO uint32_t  XIP_CMD_W3;                        /*!< XIP command word 3                                                    */
  __IO uint32_t  CTRL3;                             /*!< control register 3                                                    */
  __IO uint32_t  RESERVED2[3];
  __IO uint32_t  REV;                               /*!< Revision                                                              */
  __IO uint32_t  RESERVED3[43];
  __IO uint32_t  DT;                                /*!< 32/16/8 bit data port register                                        */
} QSPI_TypeDef;


/* ================================================================================ */
/* ================                      SCFG                      ================ */
/* ================================================================================ */


/**
  * @brief System configuration controller (SCFG)
  */

typedef struct
{                                                   /*!< SCFG Structure                                                        */
  __IO uint32_t  CFG1;                              /*!< configuration register 1                                              */
  __IO uint32_t  CFG2;                              /*!< configuration register 2                                              */
  __IO uint32_t  EXINTC[4];                         /*!< external interrupt configuration register 1,2,3,4                     */
  __IO uint32_t  RESERVED0[5];
  __IO uint32_t  UHDRV;                             /*!< Ultra high drive register                                             */
} SCFG_TypeDef;

/* ================================================================================ */
/* ================                      SDIO                       ================ */
/* ================================================================================ */


/**
  * @brief SD Host Interface
  */

typedef struct
{
  __IO uint32_t  PWRCTRL;          /*!< SDIO power control register,                 Address offset: 0x00        */
  __IO uint32_t  CLKCTRL;          /*!< SDIO clock control register,                 Address offset: 0x04        */
  __IO uint32_t  ARG;              /*!< SDIO argument register,                      Address offset: 0x08        */
  __IO uint32_t  CMD;              /*!< SDIO command register,                       Address offset: 0x0C        */
  __I  uint32_t  RSPCMD;           /*!< SDIO command response register,              Address offset: 0x10        */
  __I  uint32_t  RSP1;             /*!< SDIO response register 1,                    Address offset: 0x14        */
  __I  uint32_t  RSP2;             /*!< SDIO response register 2,                    Address offset: 0x18        */
  __I  uint32_t  RSP3;             /*!< SDIO response register 3,                    Address offset: 0x1C        */
  __I  uint32_t  RSP4;             /*!< SDIO response register 4,                    Address offset: 0x20        */
  __IO uint32_t  DTTMR;            /*!< SDIO data timer register,                    Address offset: 0x24        */
  __IO uint32_t  DTLEN;            /*!< SDIO data length register,                   Address offset: 0x28        */
  __IO uint32_t  DTCTRL;           /*!< SDIO data control register,                  Address offset: 0x2C        */
  __I  uint32_t  DTCNTR;           /*!< SDIO data counter register,                  Address offset: 0x30        */
  __I  uint32_t  STS;              /*!< SDIO status register,                        Address offset: 0x34        */
  __IO uint32_t  INTCLR;           /*!< SDIO clear interrupt register,               Address offset: 0x38        */
  __IO uint32_t  INTEN;            /*!< SDIO interrupt mask register,                Address offset: 0x3C        */
  uint32_t       RESERVED0[2];     /*!< Reserved,                                    Address offset: 0x40 ~ 0x44 */
  __I  uint32_t  BUFCNTR;          /*!< SDIO BUF counter register,                   Address offset: 0x48        */
  uint32_t       RESERVED1[13];    /*!< Reserved,                                    Address offset: 0x4C ~ 0x7C */
  __IO uint32_t  BUF;              /*!< SDIO data BUF register,                      Address offset: 0x80        */
} SDIO_TypeDef;

/* ================================================================================ */
/* ================                      SPI                       ================ */
/* ================================================================================ */


/**
  * @brief Serial peripheral interface (SPI)
  */

typedef struct
{                                                   /*!< SPI Structure                                                         */
  __IO uint32_t  CTRL1;                             /*!< control register 1                                                    */
  __IO uint32_t  CTRL2;                             /*!< control register 2                                                    */
  __IO uint32_t  STS;                               /*!< status register                                                       */
  __IO uint32_t  DT;                                /*!< data register                                                         */
  __IO uint32_t  CPOLY;                             /*!< CRC polynomial register                                               */
  __IO uint32_t  RCRC;                              /*!< Receive CRC register                                                  */
  __IO uint32_t  TCRC;                              /*!< Transmit CRC register                                                 */
  __IO uint32_t  I2SCTRL;                           /*!< I2S control register                                                  */
  __IO uint32_t  I2SCLK;                            /*!< I2S clock register                                                    */
} SPI_TypeDef;


/* ================================================================================ */
/* ================                      TMR                      ================ */
/* ================================================================================ */


/**
  * @brief timer (TMR)
  */

typedef struct
{                                                   /*!< TMR Structure                                                         */
  __IO uint32_t  CTRL1;                             /*!< Control register 1                                                    */
  __IO uint32_t  CTRL2;                             /*!< Control register 2                                                    */
  __IO uint32_t  STCTRL;                            /*!< Subordinate TMR control register                                      */
  __IO uint32_t  IDEN;                              /*!< Interrupt/DMA enable register                                         */
  __IO uint32_t  ISTS;                              /*!< Interrupt status register                                             */
  __IO uint32_t  SWEVT;                             /*!< Software event register                                               */
  __IO uint32_t  CM1;                               /*!< Channel mode register 1                                               */
  __IO uint32_t  CM2;                               /*!< Channel mode register 2                                               */
  __IO uint32_t  CCTRL;                             /*!< Channel control register                                              */
  __IO uint32_t  CVAL;                              /*!< Counter value                                                         */
  __IO uint32_t  DIV;                               /*!< Divider value                                                         */
  __IO uint32_t  PR;                                /*!< Period value                                                          */
  __IO uint32_t  RPR;                               /*!< Repetition of period value                                            */
  __IO uint32_t  C1DT;                              /*!< Channel 1 data register                                               */
  __IO uint32_t  C2DT;                              /*!< Channel 2 data register                                               */
  __IO uint32_t  C3DT;                              /*!< Channel 3 data register                                               */
  __IO uint32_t  C4DT;                              /*!< Channel 4 data register                                               */
  __IO uint32_t  BRK;                               /*!< Brake register                                                        */
  __IO uint32_t  DMACTRL;                           /*!< DMA control register                                                  */
  __IO uint32_t  DMADT;                             /*!< DMA data register                                                     */
  __IO uint32_t  RMP;                               /*!< TMR input remap register                                             */
  __IO uint32_t  RESERVED0[7];
  __IO uint32_t  CM3;                               /*!< Channel output mode register                                          */
  __IO uint32_t  C5DT;                              /*!< Channel 5 data register                                               */
} TMR_TypeDef;


/* ================================================================================ */
/* ================                     USART                      ================ */
/* ================================================================================ */


/**
  * @brief Universal synchronous asynchronous receiver transmitter (USART)
  */

typedef struct
{                                                   /*!< USART Structure                                                       */
  __IO uint32_t  STS;                               /*!< Status register                                                       */
  __IO uint32_t  DT;                                /*!< Data register                                                         */
  __IO uint32_t  BAUDR;                             /*!< Baud rate register                                                    */
  __IO uint32_t  CTRL1;                             /*!< Control register 1                                                    */
  __IO uint32_t  CTRL2;                             /*!< Control register 2                                                    */
  __IO uint32_t  CTRL3;                             /*!< Control register 3                                                    */
  __IO uint32_t  GDIV;                              /*!< Guard time and division register                                      */
} USART_TypeDef;


/* ================================================================================ */
/* ================                       WDT                      ================ */
/* ================================================================================ */


/**
  * @brief Watchdog (WDT)
  */

typedef struct
{                                                   /*!< WDT Structure                                                         */
  __IO uint32_t  CMD;                               /*!< Command register                                                      */
  __IO uint32_t  DIV;                               /*!< Division register                                                     */
  __IO uint32_t  RLD;                               /*!< Reload register                                                       */
  __IO uint32_t  STS;                               /*!< Status register                                                       */
  __IO uint32_t  WIN;                               /*!< Window register                                                       */
} WDT_TypeDef;



/* ================================================================================ */
/* ================                      WWDT                      ================ */
/* ================================================================================ */


/**
  * @brief Window watchdog (WWDT)
  */

typedef struct
{                                                   /*!< WWDT Structure                                                        */
  __IO uint32_t  CTRL;                              /*!< Control register                                                      */
  __IO uint32_t  CFG;                               /*!< Configuration register                                                */
  __IO uint32_t  STS;                               /*!< Status register                                                       */
} WWDT_TypeDef;


/**
  * @}
  */


/** @addtogroup Peripheral_memory_map
  * @{
  */

#define XMC_SDRAM_MEM_BASE               ((uint32_t)0xC0000000)
#define QSPI2_MEM_BASE                   ((uint32_t)0xB0000000)
#define XMC_CARD_MEM_BASE                ((uint32_t)0xA8000000)
#define QSPI2_REG_BASE                   ((uint32_t)0xA0002000)
#define QSPI1_REG_BASE                   ((uint32_t)0xA0001000)
#define XMC_REG_BASE                     ((uint32_t)0xA0000000)
#define XMC_BANK1_REG_BASE               (XMC_REG_BASE + 0x0000)
#define XMC_BANK2_REG_BASE               (XMC_REG_BASE + 0x0060)
#define XMC_BANK3_REG_BASE               (XMC_REG_BASE + 0x0080)
#define XMC_BANK4_REG_BASE               (XMC_REG_BASE + 0x00A0)
#define XMC_SDRAM_REG_BASE               (XMC_REG_BASE + 0x0140)
#define QSPI1_MEM_BASE                   ((uint32_t)0x90000000)
#define XMC_MEM_BASE                     ((uint32_t)0x60000000)
#define PERIPH_BASE                      ((uint32_t)0x40000000)
#define SRAM_BB_BASE                     ((uint32_t)0x22000000)
#define PERIPH_BB_BASE                   ((uint32_t)0x42000000)
#define SRAM_BASE                        ((uint32_t)0x20000000)
#define USD_BASE                         ((uint32_t)0x1FFFC000)
#define FLASH_BASE                       ((uint32_t)0x08000000)

#define DEBUG_BASE                       ((uint32_t)0xE0042000)

#define APB1PERIPH_BASE                  (PERIPH_BASE)
#define APB2PERIPH_BASE                  (PERIPH_BASE + 0x10000)
#define AHBPERIPH1_BASE                  (PERIPH_BASE + 0x20000)
#define AHBPERIPH2_BASE                  (PERIPH_BASE + 0x10000000)

#if defined (AT32F435xx)
/* apb1 bus base address */
#define UART8_BASE                       (APB1PERIPH_BASE + 0x7C00)
#define UART7_BASE                       (APB1PERIPH_BASE + 0x7800)
#define DAC_BASE                         (APB1PERIPH_BASE + 0x7400)
#define PWC_BASE                         (APB1PERIPH_BASE + 0x7000)
#define CAN2_BASE                        (APB1PERIPH_BASE + 0x6800)
#define CAN1_BASE                        (APB1PERIPH_BASE + 0x6400)
#define I2C3_BASE                        (APB1PERIPH_BASE + 0x5C00)
#define I2C2_BASE                        (APB1PERIPH_BASE + 0x5800)
#define I2C1_BASE                        (APB1PERIPH_BASE + 0x5400)
#define UART5_BASE                       (APB1PERIPH_BASE + 0x5000)
#define UART4_BASE                       (APB1PERIPH_BASE + 0x4C00)
#define USART3_BASE                      (APB1PERIPH_BASE + 0x4800)
#define USART2_BASE                      (APB1PERIPH_BASE + 0x4400)
#define SPI3_BASE                        (APB1PERIPH_BASE + 0x3C00)
#define SPI2_BASE                        (APB1PERIPH_BASE + 0x3800)
#define WDT_BASE                         (APB1PERIPH_BASE + 0x3000)
#define WWDT_BASE                        (APB1PERIPH_BASE + 0x2C00)
#define ERTC_BASE                        (APB1PERIPH_BASE + 0x2800)
#define TMR14_BASE                       (APB1PERIPH_BASE + 0x2000)
#define TMR13_BASE                       (APB1PERIPH_BASE + 0x1C00)
#define TMR12_BASE                       (APB1PERIPH_BASE + 0x1800)
#define TMR7_BASE                        (APB1PERIPH_BASE + 0x1400)
#define TMR6_BASE                        (APB1PERIPH_BASE + 0x1000)
#define TMR5_BASE                        (APB1PERIPH_BASE + 0x0C00)
#define TMR4_BASE                        (APB1PERIPH_BASE + 0x0800)
#define TMR3_BASE                        (APB1PERIPH_BASE + 0x0400)
#define TMR2_BASE                        (APB1PERIPH_BASE + 0x0000)
/* apb2 bus base address */
#define I2S2EXT_BASE                     (APB2PERIPH_BASE + 0x7800)
#define I2S3EXT_BASE                     (APB2PERIPH_BASE + 0x7C00)
#define ACC_BASE                         (APB2PERIPH_BASE + 0x7400)
#define TMR20_BASE                       (APB2PERIPH_BASE + 0x4C00)
#define TMR11_BASE                       (APB2PERIPH_BASE + 0x4800)
#define TMR10_BASE                       (APB2PERIPH_BASE + 0x4400)
#define TMR9_BASE                        (APB2PERIPH_BASE + 0x4000)
#define EXINT_BASE                       (APB2PERIPH_BASE + 0x3C00)
#define SCFG_BASE                        (APB2PERIPH_BASE + 0x3800)
#define SPI4_BASE                        (APB2PERIPH_BASE + 0x3400)
#define SPI1_BASE                        (APB2PERIPH_BASE + 0x3000)
#define ADC1_BASE                        (APB2PERIPH_BASE + 0x2000)
#define ADC2_BASE                        (APB2PERIPH_BASE + 0x2100)
#define ADC3_BASE                        (APB2PERIPH_BASE + 0x2200)
#define ADCCOM_BASE                      (APB2PERIPH_BASE + 0x2300)
#define USART6_BASE                      (APB2PERIPH_BASE + 0x1400)
#define USART1_BASE                      (APB2PERIPH_BASE + 0x1000)
#define TMR8_BASE                        (APB2PERIPH_BASE + 0x0400)
#define TMR1_BASE                        (APB2PERIPH_BASE + 0x0000)
/* ahb bus base address */
#define OTGFS2_BASE                      (AHBPERIPH1_BASE + 0x20000)
#define SDIO1_BASE                       (AHBPERIPH1_BASE + 0xC400)
#define GPIOH_BASE                       (AHBPERIPH1_BASE + 0x1C00)
#define GPIOG_BASE                       (AHBPERIPH1_BASE + 0x1800)
#define GPIOF_BASE                       (AHBPERIPH1_BASE + 0x1400)
#define GPIOE_BASE                       (AHBPERIPH1_BASE + 0x1000)
#define GPIOD_BASE                       (AHBPERIPH1_BASE + 0x0C00)
#define GPIOC_BASE                       (AHBPERIPH1_BASE + 0x0800)
#define GPIOB_BASE                       (AHBPERIPH1_BASE + 0x0400)
#define GPIOA_BASE                       (AHBPERIPH1_BASE + 0x0000)

#define DMA1_BASE                        (AHBPERIPH1_BASE + 0x6400)
#define DMA1_CHANNEL1_BASE               (DMA1_BASE + 0x0008)
#define DMA1_CHANNEL2_BASE               (DMA1_BASE + 0x001C)
#define DMA1_CHANNEL3_BASE               (DMA1_BASE + 0x0030)
#define DMA1_CHANNEL4_BASE               (DMA1_BASE + 0x0044)
#define DMA1_CHANNEL5_BASE               (DMA1_BASE + 0x0058)
#define DMA1_CHANNEL6_BASE               (DMA1_BASE + 0x006C)
#define DMA1_CHANNEL7_BASE               (DMA1_BASE + 0x0080)

#define DMA1MUX_BASE                     (DMA1_BASE + 0x0104)
#define DMA1MUX_CHANNEL1_BASE            (DMA1MUX_BASE)
#define DMA1MUX_CHANNEL2_BASE            (DMA1MUX_BASE + 0x0004)
#define DMA1MUX_CHANNEL3_BASE            (DMA1MUX_BASE + 0x0008)
#define DMA1MUX_CHANNEL4_BASE            (DMA1MUX_BASE + 0x000C)
#define DMA1MUX_CHANNEL5_BASE            (DMA1MUX_BASE + 0x0010)
#define DMA1MUX_CHANNEL6_BASE            (DMA1MUX_BASE + 0x0014)
#define DMA1MUX_CHANNEL7_BASE            (DMA1MUX_BASE + 0x0018)

#define DMA1MUX_GENERATOR1_BASE          (DMA1_BASE + 0x0120)
#define DMA1MUX_GENERATOR2_BASE          (DMA1_BASE + 0x0124)
#define DMA1MUX_GENERATOR3_BASE          (DMA1_BASE + 0x0128)
#define DMA1MUX_GENERATOR4_BASE          (DMA1_BASE + 0x012C)

#define DMA2_BASE                        (AHBPERIPH1_BASE + 0x6600)
#define DMA2_CHANNEL1_BASE               (DMA2_BASE + 0x0008)
#define DMA2_CHANNEL2_BASE               (DMA2_BASE + 0x001C)
#define DMA2_CHANNEL3_BASE               (DMA2_BASE + 0x0030)
#define DMA2_CHANNEL4_BASE               (DMA2_BASE + 0x0044)
#define DMA2_CHANNEL5_BASE               (DMA2_BASE + 0x0058)
#define DMA2_CHANNEL6_BASE               (DMA2_BASE + 0x006C)
#define DMA2_CHANNEL7_BASE               (DMA2_BASE + 0x0080)

#define DMA2MUX_BASE                     (DMA2_BASE + 0x0104)
#define DMA2MUX_CHANNEL1_BASE            (DMA2MUX_BASE)
#define DMA2MUX_CHANNEL2_BASE            (DMA2MUX_BASE + 0x0004)
#define DMA2MUX_CHANNEL3_BASE            (DMA2MUX_BASE + 0x0008)
#define DMA2MUX_CHANNEL4_BASE            (DMA2MUX_BASE + 0x000C)
#define DMA2MUX_CHANNEL5_BASE            (DMA2MUX_BASE + 0x0010)
#define DMA2MUX_CHANNEL6_BASE            (DMA2MUX_BASE + 0x0014)
#define DMA2MUX_CHANNEL7_BASE            (DMA2MUX_BASE + 0x0018)

#define DMA2MUX_GENERATOR1_BASE          (DMA2_BASE + 0x0120)
#define DMA2MUX_GENERATOR2_BASE          (DMA2_BASE + 0x0124)
#define DMA2MUX_GENERATOR3_BASE          (DMA2_BASE + 0x0128)
#define DMA2MUX_GENERATOR4_BASE          (DMA2_BASE + 0x012C)

#define EDMA_BASE                        (AHBPERIPH1_BASE + 0x6000)
#define EDMA_STREAM1_BASE                (EDMA_BASE + 0x0010)
#define EDMA_STREAM2_BASE                (EDMA_BASE + 0x0028)
#define EDMA_STREAM3_BASE                (EDMA_BASE + 0x0040)
#define EDMA_STREAM4_BASE                (EDMA_BASE + 0x0058)
#define EDMA_STREAM5_BASE                (EDMA_BASE + 0x0070)
#define EDMA_STREAM6_BASE                (EDMA_BASE + 0x0088)
#define EDMA_STREAM7_BASE                (EDMA_BASE + 0x00A0)
#define EDMA_STREAM8_BASE                (EDMA_BASE + 0x00B8)

#define EDMA_2D_BASE                     (EDMA_BASE + 0x00F4)
#define EDMA_STREAM1_2D_BASE             (EDMA_2D_BASE + 0x0004)
#define EDMA_STREAM2_2D_BASE             (EDMA_2D_BASE + 0x000C)
#define EDMA_STREAM3_2D_BASE             (EDMA_2D_BASE + 0x0014)
#define EDMA_STREAM4_2D_BASE             (EDMA_2D_BASE + 0x001C)
#define EDMA_STREAM5_2D_BASE             (EDMA_2D_BASE + 0x0024)
#define EDMA_STREAM6_2D_BASE             (EDMA_2D_BASE + 0x002C)
#define EDMA_STREAM7_2D_BASE             (EDMA_2D_BASE + 0x0034)
#define EDMA_STREAM8_2D_BASE             (EDMA_2D_BASE + 0x003C)

#define EDMA_LL_BASE                     (EDMA_BASE + 0x00D0)
#define EDMA_STREAM1_LL_BASE             (EDMA_LL_BASE + 0x0004)
#define EDMA_STREAM2_LL_BASE             (EDMA_LL_BASE + 0x0008)
#define EDMA_STREAM3_LL_BASE             (EDMA_LL_BASE + 0x000C)
#define EDMA_STREAM4_LL_BASE             (EDMA_LL_BASE + 0x0010)
#define EDMA_STREAM5_LL_BASE             (EDMA_LL_BASE + 0x0014)
#define EDMA_STREAM6_LL_BASE             (EDMA_LL_BASE + 0x0018)
#define EDMA_STREAM7_LL_BASE             (EDMA_LL_BASE + 0x001C)
#define EDMA_STREAM8_LL_BASE             (EDMA_LL_BASE + 0x0020)

#define EDMAMUX_BASE                     (EDMA_BASE + 0x0140)
#define EDMAMUX_CHANNEL1_BASE            (EDMAMUX_BASE)
#define EDMAMUX_CHANNEL2_BASE            (EDMAMUX_BASE + 0x0004)
#define EDMAMUX_CHANNEL3_BASE            (EDMAMUX_BASE + 0x0008)
#define EDMAMUX_CHANNEL4_BASE            (EDMAMUX_BASE + 0x000C)
#define EDMAMUX_CHANNEL5_BASE            (EDMAMUX_BASE + 0x0010)
#define EDMAMUX_CHANNEL6_BASE            (EDMAMUX_BASE + 0x0014)
#define EDMAMUX_CHANNEL7_BASE            (EDMAMUX_BASE + 0x0018)
#define EDMAMUX_CHANNEL8_BASE            (EDMAMUX_BASE + 0x001C)

#define EDMAMUX_GENERATOR1_BASE          (EDMA_BASE + 0x0160)
#define EDMAMUX_GENERATOR2_BASE          (EDMA_BASE + 0x0164)
#define EDMAMUX_GENERATOR3_BASE          (EDMA_BASE + 0x0168)
#define EDMAMUX_GENERATOR4_BASE          (EDMA_BASE + 0x016C)

#define FLASH_REG_BASE                   (AHBPERIPH1_BASE + 0x3C00)
#define CRM_BASE                         (AHBPERIPH1_BASE + 0x3800)
#define CRC_BASE                         (AHBPERIPH1_BASE + 0x3000)
#define SDIO2_BASE                       (AHBPERIPH2_BASE + 0x61000)
#define DVP_BASE                         (AHBPERIPH2_BASE + 0x50000)
#define OTGFS1_BASE                      (AHBPERIPH2_BASE + 0x00000)
#endif

#if defined (AT32F437xx)
/* apb1 bus base address */
#define UART8_BASE                       (APB1PERIPH_BASE + 0x7C00)
#define UART7_BASE                       (APB1PERIPH_BASE + 0x7800)
#define DAC_BASE                         (APB1PERIPH_BASE + 0x7400)
#define PWC_BASE                         (APB1PERIPH_BASE + 0x7000)
#define CAN2_BASE                        (APB1PERIPH_BASE + 0x6800)
#define CAN1_BASE                        (APB1PERIPH_BASE + 0x6400)
#define I2C3_BASE                        (APB1PERIPH_BASE + 0x5C00)
#define I2C2_BASE                        (APB1PERIPH_BASE + 0x5800)
#define I2C1_BASE                        (APB1PERIPH_BASE + 0x5400)
#define UART5_BASE                       (APB1PERIPH_BASE + 0x5000)
#define UART4_BASE                       (APB1PERIPH_BASE + 0x4C00)
#define USART3_BASE                      (APB1PERIPH_BASE + 0x4800)
#define USART2_BASE                      (APB1PERIPH_BASE + 0x4400)
#define SPI3_BASE                        (APB1PERIPH_BASE + 0x3C00)
#define SPI2_BASE                        (APB1PERIPH_BASE + 0x3800)
#define WDT_BASE                         (APB1PERIPH_BASE + 0x3000)
#define WWDT_BASE                        (APB1PERIPH_BASE + 0x2C00)
#define ERTC_BASE                        (APB1PERIPH_BASE + 0x2800)
#define TMR14_BASE                       (APB1PERIPH_BASE + 0x2000)
#define TMR13_BASE                       (APB1PERIPH_BASE + 0x1C00)
#define TMR12_BASE                       (APB1PERIPH_BASE + 0x1800)
#define TMR7_BASE                        (APB1PERIPH_BASE + 0x1400)
#define TMR6_BASE                        (APB1PERIPH_BASE + 0x1000)
#define TMR5_BASE                        (APB1PERIPH_BASE + 0x0C00)
#define TMR4_BASE                        (APB1PERIPH_BASE + 0x0800)
#define TMR3_BASE                        (APB1PERIPH_BASE + 0x0400)
#define TMR2_BASE                        (APB1PERIPH_BASE + 0x0000)
/* apb2 bus base address */
#define I2S2EXT_BASE                     (APB2PERIPH_BASE + 0x7800)
#define I2S3EXT_BASE                     (APB2PERIPH_BASE + 0x7C00)
#define ACC_BASE                         (APB2PERIPH_BASE + 0x7400)
#define TMR20_BASE                       (APB2PERIPH_BASE + 0x4C00)
#define TMR11_BASE                       (APB2PERIPH_BASE + 0x4800)
#define TMR10_BASE                       (APB2PERIPH_BASE + 0x4400)
#define TMR9_BASE                        (APB2PERIPH_BASE + 0x4000)
#define EXINT_BASE                       (APB2PERIPH_BASE + 0x3C00)
#define SCFG_BASE                        (APB2PERIPH_BASE + 0x3800)
#define SPI4_BASE                        (APB2PERIPH_BASE + 0x3400)
#define SPI1_BASE                        (APB2PERIPH_BASE + 0x3000)
#define ADC1_BASE                        (APB2PERIPH_BASE + 0x2000)
#define ADC2_BASE                        (APB2PERIPH_BASE + 0x2100)
#define ADC3_BASE                        (APB2PERIPH_BASE + 0x2200)
#define ADCCOM_BASE                      (APB2PERIPH_BASE + 0x2300)
#define USART6_BASE                      (APB2PERIPH_BASE + 0x1400)
#define USART1_BASE                      (APB2PERIPH_BASE + 0x1000)
#define TMR8_BASE                        (APB2PERIPH_BASE + 0x0400)
#define TMR1_BASE                        (APB2PERIPH_BASE + 0x0000)
/* ahb bus base address */
#define OTGFS2_BASE                      (AHBPERIPH1_BASE + 0x20000)
#define SDIO1_BASE                       (AHBPERIPH1_BASE + 0xC400)
#define EMAC_BASE                        (AHBPERIPH1_BASE + 0x8000)
#define GPIOH_BASE                       (AHBPERIPH1_BASE + 0x1C00)
#define GPIOG_BASE                       (AHBPERIPH1_BASE + 0x1800)
#define GPIOF_BASE                       (AHBPERIPH1_BASE + 0x1400)
#define GPIOE_BASE                       (AHBPERIPH1_BASE + 0x1000)
#define GPIOD_BASE                       (AHBPERIPH1_BASE + 0x0C00)
#define GPIOC_BASE                       (AHBPERIPH1_BASE + 0x0800)
#define GPIOB_BASE                       (AHBPERIPH1_BASE + 0x0400)
#define GPIOA_BASE                       (AHBPERIPH1_BASE + 0x0000)

#define DMA1_BASE                        (AHBPERIPH1_BASE + 0x6400)
#define DMA1_CHANNEL1_BASE               (DMA1_BASE + 0x0008)
#define DMA1_CHANNEL2_BASE               (DMA1_BASE + 0x001C)
#define DMA1_CHANNEL3_BASE               (DMA1_BASE + 0x0030)
#define DMA1_CHANNEL4_BASE               (DMA1_BASE + 0x0044)
#define DMA1_CHANNEL5_BASE               (DMA1_BASE + 0x0058)
#define DMA1_CHANNEL6_BASE               (DMA1_BASE + 0x006C)
#define DMA1_CHANNEL7_BASE               (DMA1_BASE + 0x0080)

#define DMA1MUX_BASE                     (DMA1_BASE + 0x0104)
#define DMA1MUX_CHANNEL1_BASE            (DMA1MUX_BASE)
#define DMA1MUX_CHANNEL2_BASE            (DMA1MUX_BASE + 0x0004)
#define DMA1MUX_CHANNEL3_BASE            (DMA1MUX_BASE + 0x0008)
#define DMA1MUX_CHANNEL4_BASE            (DMA1MUX_BASE + 0x000C)
#define DMA1MUX_CHANNEL5_BASE            (DMA1MUX_BASE + 0x0010)
#define DMA1MUX_CHANNEL6_BASE            (DMA1MUX_BASE + 0x0014)
#define DMA1MUX_CHANNEL7_BASE            (DMA1MUX_BASE + 0x0018)

#define DMA1MUX_GENERATOR1_BASE          (DMA1_BASE + 0x0120)
#define DMA1MUX_GENERATOR2_BASE          (DMA1_BASE + 0x0124)
#define DMA1MUX_GENERATOR3_BASE          (DMA1_BASE + 0x0128)
#define DMA1MUX_GENERATOR4_BASE          (DMA1_BASE + 0x012C)

#define DMA2_BASE                        (AHBPERIPH1_BASE + 0x6600)
#define DMA2_CHANNEL1_BASE               (DMA2_BASE + 0x0008)
#define DMA2_CHANNEL2_BASE               (DMA2_BASE + 0x001C)
#define DMA2_CHANNEL3_BASE               (DMA2_BASE + 0x0030)
#define DMA2_CHANNEL4_BASE               (DMA2_BASE + 0x0044)
#define DMA2_CHANNEL5_BASE               (DMA2_BASE + 0x0058)
#define DMA2_CHANNEL6_BASE               (DMA2_BASE + 0x006C)
#define DMA2_CHANNEL7_BASE               (DMA2_BASE + 0x0080)

#define DMA2MUX_BASE                     (DMA2_BASE + 0x0104)
#define DMA2MUX_CHANNEL1_BASE            (DMA2MUX_BASE)
#define DMA2MUX_CHANNEL2_BASE            (DMA2MUX_BASE + 0x0004)
#define DMA2MUX_CHANNEL3_BASE            (DMA2MUX_BASE + 0x0008)
#define DMA2MUX_CHANNEL4_BASE            (DMA2MUX_BASE + 0x000C)
#define DMA2MUX_CHANNEL5_BASE            (DMA2MUX_BASE + 0x0010)
#define DMA2MUX_CHANNEL6_BASE            (DMA2MUX_BASE + 0x0014)
#define DMA2MUX_CHANNEL7_BASE            (DMA2MUX_BASE + 0x0018)

#define DMA2MUX_GENERATOR1_BASE          (DMA2_BASE + 0x0120)
#define DMA2MUX_GENERATOR2_BASE          (DMA2_BASE + 0x0124)
#define DMA2MUX_GENERATOR3_BASE          (DMA2_BASE + 0x0128)
#define DMA2MUX_GENERATOR4_BASE          (DMA2_BASE + 0x012C)

#define EDMA_BASE                        (AHBPERIPH1_BASE + 0x6000)
#define EDMA_STREAM1_BASE                (EDMA_BASE + 0x0010)
#define EDMA_STREAM2_BASE                (EDMA_BASE + 0x0028)
#define EDMA_STREAM3_BASE                (EDMA_BASE + 0x0040)
#define EDMA_STREAM4_BASE                (EDMA_BASE + 0x0058)
#define EDMA_STREAM5_BASE                (EDMA_BASE + 0x0070)
#define EDMA_STREAM6_BASE                (EDMA_BASE + 0x0088)
#define EDMA_STREAM7_BASE                (EDMA_BASE + 0x00A0)
#define EDMA_STREAM8_BASE                (EDMA_BASE + 0x00B8)

#define EDMA_2D_BASE                     (EDMA_BASE + 0x00F4)
#define EDMA_STREAM1_2D_BASE             (EDMA_2D_BASE + 0x0004)
#define EDMA_STREAM2_2D_BASE             (EDMA_2D_BASE + 0x000C)
#define EDMA_STREAM3_2D_BASE             (EDMA_2D_BASE + 0x0014)
#define EDMA_STREAM4_2D_BASE             (EDMA_2D_BASE + 0x001C)
#define EDMA_STREAM5_2D_BASE             (EDMA_2D_BASE + 0x0024)
#define EDMA_STREAM6_2D_BASE             (EDMA_2D_BASE + 0x002C)
#define EDMA_STREAM7_2D_BASE             (EDMA_2D_BASE + 0x0034)
#define EDMA_STREAM8_2D_BASE             (EDMA_2D_BASE + 0x003C)

#define EDMA_LL_BASE                     (EDMA_BASE + 0x00D0)
#define EDMA_STREAM1_LL_BASE             (EDMA_LL_BASE + 0x0004)
#define EDMA_STREAM2_LL_BASE             (EDMA_LL_BASE + 0x0008)
#define EDMA_STREAM3_LL_BASE             (EDMA_LL_BASE + 0x000C)
#define EDMA_STREAM4_LL_BASE             (EDMA_LL_BASE + 0x0010)
#define EDMA_STREAM5_LL_BASE             (EDMA_LL_BASE + 0x0014)
#define EDMA_STREAM6_LL_BASE             (EDMA_LL_BASE + 0x0018)
#define EDMA_STREAM7_LL_BASE             (EDMA_LL_BASE + 0x001C)
#define EDMA_STREAM8_LL_BASE             (EDMA_LL_BASE + 0x0020)

#define EDMAMUX_BASE                     (EDMA_BASE + 0x0140)
#define EDMAMUX_CHANNEL1_BASE            (EDMAMUX_BASE)
#define EDMAMUX_CHANNEL2_BASE            (EDMAMUX_BASE + 0x0004)
#define EDMAMUX_CHANNEL3_BASE            (EDMAMUX_BASE + 0x0008)
#define EDMAMUX_CHANNEL4_BASE            (EDMAMUX_BASE + 0x000C)
#define EDMAMUX_CHANNEL5_BASE            (EDMAMUX_BASE + 0x0010)
#define EDMAMUX_CHANNEL6_BASE            (EDMAMUX_BASE + 0x0014)
#define EDMAMUX_CHANNEL7_BASE            (EDMAMUX_BASE + 0x0018)
#define EDMAMUX_CHANNEL8_BASE            (EDMAMUX_BASE + 0x001C)

#define EDMAMUX_GENERATOR1_BASE          (EDMA_BASE + 0x0160)
#define EDMAMUX_GENERATOR2_BASE          (EDMA_BASE + 0x0164)
#define EDMAMUX_GENERATOR3_BASE          (EDMA_BASE + 0x0168)
#define EDMAMUX_GENERATOR4_BASE          (EDMA_BASE + 0x016C)

#define FLASH_REG_BASE                   (AHBPERIPH1_BASE + 0x3C00)
#define CRM_BASE                         (AHBPERIPH1_BASE + 0x3800)
#define CRC_BASE                         (AHBPERIPH1_BASE + 0x3000)
#define SDIO2_BASE                       (AHBPERIPH2_BASE + 0x61000)
#define DVP_BASE                         (AHBPERIPH2_BASE + 0x50000)
#define OTGFS1_BASE                      (AHBPERIPH2_BASE + 0x00000)

#define EMAC_MAC_BASE                    (EMAC_BASE)
#define EMAC_MMC_BASE                    (EMAC_BASE + 0x0100)
#define EMAC_PTP_BASE                    (EMAC_BASE + 0x0700)
#define EMAC_DMA_BASE                    (EMAC_BASE + 0x1000)
#endif

/**
  * @}
  */


/** @addtogroup Peripheral_instance
  * @{
  */

#define EXINT                             ((EXINT_TypeDef *) EXINT_BASE)
#define CRM                               ((CRM_TypeDef *) CRM_BASE)
#define PWC                               ((PWC_TypeDef *) PWC_BASE)
#define FLASH                             ((FLASH_TypeDef *) FLASH_REG_BASE)
#define GPIOA                             ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB                             ((GPIO_TypeDef *) GPIOB_BASE)
#define GPIOC                             ((GPIO_TypeDef *) GPIOC_BASE)
#define GPIOD                             ((GPIO_TypeDef *) GPIOD_BASE)
#define GPIOE                             ((GPIO_TypeDef *) GPIOE_BASE)
#define GPIOF                             ((GPIO_TypeDef *) GPIOF_BASE)
#define GPIOG                             ((GPIO_TypeDef *) GPIOG_BASE)
#define GPIOH                             ((GPIO_TypeDef *) GPIOH_BASE)
#define SCFG                              ((SCFG_TypeDef *) SCFG_BASE)
#define TMR1                              ((TMR_TypeDef *) TMR1_BASE)
#define TMR2                              ((TMR_TypeDef *) TMR2_BASE)
#define TMR3                              ((TMR_TypeDef *) TMR3_BASE)
#define TMR4                              ((TMR_TypeDef *) TMR4_BASE)
#define TMR5                              ((TMR_TypeDef *) TMR5_BASE)
#define TMR6                              ((TMR_TypeDef *) TMR6_BASE)
#define TMR7                              ((TMR_TypeDef *) TMR7_BASE)
#define TMR8                              ((TMR_TypeDef *) TMR8_BASE)
#define TMR9                              ((TMR_TypeDef *) TMR9_BASE)
#define TMR10                             ((TMR_TypeDef *) TMR10_BASE)
#define TMR11                             ((TMR_TypeDef *) TMR11_BASE)
#define TMR12                             ((TMR_TypeDef *) TMR12_BASE)
#define TMR13                             ((TMR_TypeDef *) TMR13_BASE)
#define TMR14                             ((TMR_TypeDef *) TMR14_BASE)
#define TMR20                             ((TMR_TypeDef *) TMR20_BASE)
#define DEBUGMCU                          ((DEBUG_TypeDef *) DEBUG_BASE)
#define DEBUG                             ((DEBUG_TypeDef *) DEBUG_BASE)
#define DMA1                              ((DMA_TypeDef *) DMA1_BASE)
#define DMA2                              ((DMA_TypeDef *) DMA2_BASE)
#define DMA1_CHANNEL1                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL1_BASE)
#define DMA1_CHANNEL2                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL2_BASE)
#define DMA1_CHANNEL3                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL3_BASE)
#define DMA1_CHANNEL4                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL4_BASE)
#define DMA1_CHANNEL5                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL5_BASE)
#define DMA1_CHANNEL6                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL6_BASE)
#define DMA1_CHANNEL7                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL7_BASE)
#define DMA2_CHANNEL1                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL1_BASE)
#define DMA2_CHANNEL2                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL2_BASE)
#define DMA2_CHANNEL3                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL3_BASE)
#define DMA2_CHANNEL4                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL4_BASE)
#define DMA2_CHANNEL5                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL5_BASE)
#define DMA2_CHANNEL6                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL6_BASE)
#define DMA2_CHANNEL7                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL7_BASE)
#define DMA1MUX_CHANNEL1                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL1_BASE)
#define DMA1MUX_CHANNEL2                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL2_BASE)
#define DMA1MUX_CHANNEL3                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL3_BASE)
#define DMA1MUX_CHANNEL4                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL4_BASE)
#define DMA1MUX_CHANNEL5                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL5_BASE)
#define DMA1MUX_CHANNEL6                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL6_BASE)
#define DMA1MUX_CHANNEL7                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL7_BASE)
#define DMA2MUX_CHANNEL1                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL1_BASE)
#define DMA2MUX_CHANNEL2                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL2_BASE)
#define DMA2MUX_CHANNEL3                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL3_BASE)
#define DMA2MUX_CHANNEL4                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL4_BASE)
#define DMA2MUX_CHANNEL5                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL5_BASE)
#define DMA2MUX_CHANNEL6                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL6_BASE)
#define DMA2MUX_CHANNEL7                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL7_BASE)
#define DMA1MUX_GENERATOR1                ((DMAMUX_Generator_TypeDef *) DMA1MUX_GENERATOR1_BASE)
#define DMA1MUX_GENERATOR2                ((DMAMUX_Generator_TypeDef *) DMA1MUX_GENERATOR2_BASE)
#define DMA1MUX_GENERATOR3                ((DMAMUX_Generator_TypeDef *) DMA1MUX_GENERATOR3_BASE)
#define DMA1MUX_GENERATOR4                ((DMAMUX_Generator_TypeDef *) DMA1MUX_GENERATOR4_BASE)
#define DMA2MUX_GENERATOR1                ((DMAMUX_Generator_TypeDef *) DMA2MUX_GENERATOR1_BASE)
#define DMA2MUX_GENERATOR2                ((DMAMUX_Generator_TypeDef *) DMA2MUX_GENERATOR2_BASE)
#define DMA2MUX_GENERATOR3                ((DMAMUX_Generator_TypeDef *) DMA2MUX_GENERATOR3_BASE)
#define DMA2MUX_GENERATOR4                ((DMAMUX_Generator_TypeDef *) DMA2MUX_GENERATOR4_BASE)
#define EDMA1                             ((EDMA_TypeDef *) EDMA_BASE)
#define EDMA1_STREAM1                     ((EDMA_Stream_TypeDef *) EDMA_STREAM1_BASE)
#define EDMA1_STREAM2                     ((EDMA_Stream_TypeDef *) EDMA_STREAM2_BASE)
#define EDMA1_STREAM3                     ((EDMA_Stream_TypeDef *) EDMA_STREAM3_BASE)
#define EDMA1_STREAM4                     ((EDMA_Stream_TypeDef *) EDMA_STREAM4_BASE)
#define EDMA1_STREAM5                     ((EDMA_Stream_TypeDef *) EDMA_STREAM5_BASE)
#define EDMA1_STREAM6                     ((EDMA_Stream_TypeDef *) EDMA_STREAM6_BASE)
#define EDMA1_STREAM7                     ((EDMA_Stream_TypeDef *) EDMA_STREAM7_BASE)
#define EDMA1_STREAM8                     ((EDMA_Stream_TypeDef *) EDMA_STREAM8_BASE)
#define EDMA1_STREAM1_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM1_2D_BASE)
#define EDMA1_STREAM2_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM2_2D_BASE)
#define EDMA1_STREAM3_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM3_2D_BASE)
#define EDMA1_STREAM4_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM4_2D_BASE)
#define EDMA1_STREAM5_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM5_2D_BASE)
#define EDMA1_STREAM6_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM6_2D_BASE)
#define EDMA1_STREAM7_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM7_2D_BASE)
#define EDMA1_STREAM8_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM8_2D_BASE)
#define EDMA1_STREAM1_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM1_LL_BASE)
#define EDMA1_STREAM2_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM2_LL_BASE)
#define EDMA1_STREAM3_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM3_LL_BASE)
#define EDMA1_STREAM4_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM4_LL_BASE)
#define EDMA1_STREAM5_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM5_LL_BASE)
#define EDMA1_STREAM6_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM6_LL_BASE)
#define EDMA1_STREAM7_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM7_LL_BASE)
#define EDMA1_STREAM8_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM8_LL_BASE)
#define EDMA1MUX_CHANNEL1                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL1_BASE)
#define EDMA1MUX_CHANNEL2                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL2_BASE)
#define EDMA1MUX_CHANNEL3                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL3_BASE)
#define EDMA1MUX_CHANNEL4                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL4_BASE)
#define EDMA1MUX_CHANNEL5                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL5_BASE)
#define EDMA1MUX_CHANNEL6                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL6_BASE)
#define EDMA1MUX_CHANNEL7                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL7_BASE)
#define EDMA1MUX_CHANNEL8                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL8_BASE)
#define EDMA1MUX_GENERATOR1               ((EDMAMUX_Generator_TypeDef *) EDMAMUX_GENERATOR1_BASE)
#define EDMA1MUX_GENERATOR2               ((EDMAMUX_Generator_TypeDef *) EDMAMUX_GENERATOR2_BASE)
#define EDMA1MUX_GENERATOR3               ((EDMAMUX_Generator_TypeDef *) EDMAMUX_GENERATOR3_BASE)
#define EDMA1MUX_GENERATOR4               ((EDMAMUX_Generator_TypeDef *) EDMAMUX_GENERATOR4_BASE)
#define ERTC                              ((ERTC_TypeDef *) ERTC_BASE)
#define ADC1                              ((ADC_TypeDef *) ADC1_BASE)
#define ADC2                              ((ADC_TypeDef *) ADC2_BASE)
#define ADC3                              ((ADC_TypeDef *) ADC3_BASE)
#define ADCCOM                            ((ADCCOM_TypeDef *) ADCCOM_BASE)
#define I2C1                              ((I2C_TypeDef *) I2C1_BASE)
#define I2C2                              ((I2C_TypeDef *) I2C2_BASE)
#define I2C3                              ((I2C_TypeDef *) I2C3_BASE)
#define USART1                            ((USART_TypeDef *) USART1_BASE)
#define USART2                            ((USART_TypeDef *) USART2_BASE)
#define USART3                            ((USART_TypeDef *) USART3_BASE)
#define UART4                             ((USART_TypeDef *) UART4_BASE)
#define UART5                             ((USART_TypeDef *) UART5_BASE)
#define USART6                            ((USART_TypeDef *) USART6_BASE)
#define UART7                             ((USART_TypeDef *) UART7_BASE)
#define UART8                             ((USART_TypeDef *) UART8_BASE)
#define SPI1                              ((SPI_TypeDef *) SPI1_BASE)
#define SPI2                              ((SPI_TypeDef *) SPI2_BASE)
#define SPI3                              ((SPI_TypeDef *) SPI3_BASE)
#define SPI4                              ((SPI_TypeDef *) SPI4_BASE)
#define I2S2EXT                           ((SPI_TypeDef *) I2S2EXT_BASE)
#define I2S3EXT                           ((SPI_TypeDef *) I2S3EXT_BASE)
#define SDIO1                             ((SDIO_TypeDef *) SDIO1_BASE)
#define SDIO2                             ((SDIO_TypeDef *) SDIO2_BASE)
#define SDIO                              SDIO1
#define CRC                               ((CRC_TypeDef *)CRC_BASE)
/**
  * @}
  */

/** @defgroup FLASH_unlock_keys
  * @brief flash unlock keys
  * @{
  */

#define FLASH_UNLOCK_KEY1                ((uint32_t)0x45670123) /*!< flash operation unlock order key1 */
#define FLASH_UNLOCK_KEY2                ((uint32_t)0xCDEF89AB) /*!< flash operation unlock order key2 */
#define FAP_RELIEVE_KEY                  ((uint16_t)0x00A5)     /*!< flash fap relieve key val */
#define SLIB_UNLOCK_KEY                  ((uint32_t)0xA35F6D24) /*!< flash slib operation unlock order key */

#if defined (AT32F435CMU7) || defined (AT32F435CMT7) || defined (AT32F435RMT7) || \
    defined (AT32F435VMT7) || defined (AT32F435ZMT7) || defined (AT32F437RMT7) || \
    defined (AT32F437VMT7) || defined (AT32F437ZMT7)
#define FLASH_BANK1_START_ADDR           ((uint32_t)0x08000000) /*!< flash start address of bank1 */
#define FLASH_BANK1_END_ADDR             ((uint32_t)0x081FFFFF) /*!< flash end address of bank1 */
#define FLASH_BANK2_START_ADDR           ((uint32_t)0x08200000) /*!< flash start address of bank2 */
#define FLASH_BANK2_END_ADDR             ((uint32_t)0x083EFFFF) /*!< flash end address of bank2 */
#else
#define FLASH_BANK1_START_ADDR           ((uint32_t)0x08000000) /*!< flash start address of bank1 */
#define FLASH_BANK1_END_ADDR             ((uint32_t)0x0807FFFF) /*!< flash end address of bank1 */
#define FLASH_BANK2_START_ADDR           ((uint32_t)0x08080000) /*!< flash start address of bank2 */
#define FLASH_BANK2_END_ADDR             ((uint32_t)0x080FFFFF) /*!< flash end address of bank2 */
#endif

#define FLASHSIZE_BASE                   ((uint32_t)0x1FFFF7E0U) /*!< FLASH Size register base address */
#define UID_BASE                         ((uint32_t)0x1FFFF7E8U) /*!< Unique device ID register base address */

/**
  * @}
  */


/** @addtogroup Bit_definition
  * @{
  */

/* =========================================================================================================================== */
/* ================                                           CRC                                             ================ */
/* =========================================================================================================================== */

/******************  Bit definition for CRC_CTRL register  ***************/
#define CRC_CTRL_RST                    (0x1U << 0)
#define CRC_CTRL_POLYSIZE               (0x3U << 3)
#define CRC_CTRL_POLYSIZE_32            (0x0U << 3)
#define CRC_CTRL_POLYSIZE_16            (0x1U << 3)
#define CRC_CTRL_POLYSIZE_8             (0x2U << 3)
#define CRC_CTRL_POLYSIZE_7             (0x3U << 3)
#define CRC_CTRL_REVID_0                (0x0U << 5)
#define CRC_CTRL_REVID_1                (0x1U << 5)
#define CRC_CTRL_REVID_2                (0x2U << 5)
#define CRC_CTRL_REVID_3                (0x3U << 5)
#define CRC_CTRL_REVOD                  (0x1U << 7)

/******************  Bit definition for CRM_CTRL register  *****************/
#define CRM_CTRL_HICKEN                  (0x1U << 0)
#define CRM_CTRL_HICKSTBL                (0x1U << 1)
#define CRM_CTRL_HICKTRIM                (0x3FU << 2)
#define CRM_CTRL_HEXTEN                  (0x1U << 16)
#define CRM_CTRL_HEXTSTBL                (0x1U << 17)
#define CRM_CTRL_HEXTBYPS                (0x1U << 18)
#define CRM_CTRL_CFDEN                   (0x1U << 19)
#define CRM_CTRL_PLLEN                   (0x1U << 24)
#define CRM_CTRL_PLLSTBL                 (0x1U << 25)

/******************  Bit definition for CRM_CFG register  ******************/
#define CRM_CFG_SCLKSEL                  (0x3U << 0)
#define CRM_CFG_SCLK_HICK                (0x0U << 0)
#define CRM_CFG_SCLK_HEXT                (0x1U << 0)
#define CRM_CFG_SCLK_PLL                 (0x2U << 0)
#define CRM_CFG_SCLKSTS                  (0x3U << 2)
#define CRM_CFG_SCLKSTS_HICK             (0x0U << 2)
#define CRM_CFG_SCLKSTS_HEXT             (0x1U << 2)
#define CRM_CFG_SCLKSTS_PLL              (0x2U << 2)

/*****************  Bit definition for CRM_AHBRST1 register  ***************/
#define CRM_AHBRST1_GPIOARST             (0x1U << 0)
#define CRM_AHBRST1_GPIOBRST             (0x1U << 1)
#define CRM_AHBRST1_GPIOCRST             (0x1U << 2)
#define CRM_AHBRST1_GPIODRST             (0x1U << 3)
#define CRM_AHBRST1_GPIOERST             (0x1U << 4)
#define CRM_AHBRST1_GPIOFRST             (0x1U << 5)
#define CRM_AHBRST1_GPIOGRST             (0x1U << 6)
#define CRM_AHBRST1_GPIOHRST             (0x1U << 7)
#define CRM_AHBRST1_CRCRST               (0x1U << 12)
#define CRM_AHBRST1_EDMARST              (0x1U << 21)
#define CRM_AHBRST1_DMA1RST              (0x1U << 22)
#define CRM_AHBRST1_DMA2RST              (0x1U << 24)
#define CRM_AHBRST1_EMACRST              (0x1U << 25)
#define CRM_AHBRST1_OTGFS2RST            (0x1U << 29)

/*****************  Bit definition for CRM_AHBRST2 register  ***************/
#define CRM_AHBRST2_DVPRST               (0x1U << 0)
#define CRM_AHBRST2_OTGFS1RST            (0x1U << 7)
#define CRM_AHBRST2_SDIO1RST             (0x1U << 15)

/*****************  Bit definition for CRM_AHBRST3 register  ***************/
#define CRM_AHBRST3_XMCRST               (0x1U << 0)
#define CRM_AHBRST3_QSPI1RST             (0x1U << 1)
#define CRM_AHBRST3_QSPI2RST             (0x1U << 14)
#define CRM_AHBRST3_SDIO2RST             (0x1U << 15)

/*****************  Bit definition for CRM_APB1RST register  ***************/
#define CRM_APB1RST_TMR2RST              (0x1U << 0)
#define CRM_APB1RST_TMR3RST              (0x1U << 1)
#define CRM_APB1RST_TMR4RST              (0x1U << 2)
#define CRM_APB1RST_TMR5RST              (0x1U << 3)
#define CRM_APB1RST_TMR6RST              (0x1U << 4)
#define CRM_APB1RST_TMR7RST              (0x1U << 5)
#define CRM_APB1RST_TMR12RST             (0x1U << 6)
#define CRM_APB1RST_TMR13RST             (0x1U << 7)
#define CRM_APB1RST_TMR14RST             (0x1U << 8)
#define CRM_APB1RST_WWDTRST              (0x1U << 11)
#define CRM_APB1RST_SPI2RST              (0x1U << 14)
#define CRM_APB1RST_SPI3RST              (0x1U << 15)
#define CRM_APB1RST_USART2RST            (0x1U << 17)
#define CRM_APB1RST_USART3RST            (0x1U << 18)
#define CRM_APB1RST_UART4RST             (0x1U << 19)
#define CRM_APB1RST_UART5RST             (0x1U << 20)
#define CRM_APB1RST_I2C1RST              (0x1U << 21)
#define CRM_APB1RST_I2C2RST              (0x1U << 22)
#define CRM_APB1RST_I2C3RST              (0x1U << 23)
#define CRM_APB1RST_CAN1RST              (0x1U << 25)
#define CRM_APB1RST_CAN2RST              (0x1U << 26)
#define CRM_APB1RST_PWCRST               (0x1U << 28)
#define CRM_APB1RST_DACRST               (0x1U << 29)
#define CRM_APB1RST_UART7RST             (0x1U << 30)
#define CRM_APB1RST_UART8RST             (0x1U << 31)

/*****************  Bit definition for CRM_APB2RST register  ***************/
#define CRM_APB2RST_TMR1RST              (0x1U << 0)
#define CRM_APB2RST_TMR8RST              (0x1U << 1)
#define CRM_APB2RST_USART1RST            (0x1U << 4)
#define CRM_APB2RST_USART6RST            (0x1U << 5)
#define CRM_APB2RST_ADC1RST              (0x1U << 8)
#define CRM_APB2RST_ADC2RST              (0x1U << 8)
#define CRM_APB2RST_ADC3RST              (0x1U << 8)
#define CRM_APB2RST_SPI1RST              (0x1U << 12)
#define CRM_APB2RST_SPI4RST              (0x1U << 13)
#define CRM_APB2RST_SCFGRST              (0x1U << 14)
#define CRM_APB2RST_TMR9RST              (0x1U << 16)
#define CRM_APB2RST_TMR10RST             (0x1U << 17)
#define CRM_APB2RST_TMR11RST             (0x1U << 18)
#define CRM_APB2RST_TMR20RST             (0x1U << 20)
#define CRM_APB2RST_ACCRST               (0x1U << 29)

/*****************  Bit definition for CRM_AHBEN1 register  ***************/
#define CRM_AHBEN1_GPIOAEN               (0x1U << 0)
#define CRM_AHBEN1_GPIOBEN               (0x1U << 1)
#define CRM_AHBEN1_GPIOCEN               (0x1U << 2)
#define CRM_AHBEN1_GPIODEN               (0x1U << 3)
#define CRM_AHBEN1_GPIOEEN               (0x1U << 4)
#define CRM_AHBEN1_GPIOFEN               (0x1U << 5)
#define CRM_AHBEN1_GPIOGEN               (0x1U << 6)
#define CRM_AHBEN1_GPIOHEN               (0x1U << 7)
#define CRM_AHBEN1_CRCEN                 (0x1U << 12)
#define CRM_AHBEN1_EDMAEN                (0x1U << 21)
#define CRM_AHBEN1_DMA1EN                (0x1U << 22)
#define CRM_AHBEN1_DMA2EN                (0x1U << 24)
#define CRM_AHBEN1_EMACEN                (0x1U << 25)
#define CRM_AHBEN1_OTGFS2EN              (0x1U << 29)

/*****************  Bit definition for CRM_AHBEN2 register  ***************/
#define CRM_AHBEN2_DVPEN                 (0x1U << 0)
#define CRM_AHBEN2_OTGFS1EN              (0x1U << 7)
#define CRM_AHBEN2_SDIO1EN               (0x1U << 15)

/*****************  Bit definition for CRM_AHBEN3 register  ***************/
#define CRM_AHBEN3_XMCEN                 (0x1U << 0)
#define CRM_AHBEN3_QSPI1EN               (0x1U << 1)
#define CRM_AHBEN3_QSPI2EN               (0x1U << 14)
#define CRM_AHBEN3_SDIO2EN               (0x1U << 15)

/*****************  Bit definition for CRM_APB1EN register  ***************/
#define CRM_APB1EN_TMR2EN                (0x1U << 0)
#define CRM_APB1EN_TMR3EN                (0x1U << 1)
#define CRM_APB1EN_TMR4EN                (0x1U << 2)
#define CRM_APB1EN_TMR5EN                (0x1U << 3)
#define CRM_APB1EN_TMR6EN                (0x1U << 4)
#define CRM_APB1EN_TMR7EN                (0x1U << 5)
#define CRM_APB1EN_TMR12EN               (0x1U << 6)
#define CRM_APB1EN_TMR13EN               (0x1U << 7)
#define CRM_APB1EN_TMR14EN               (0x1U << 8)
#define CRM_APB1EN_WWDTEN                (0x1U << 11)
#define CRM_APB1EN_SPI2EN                (0x1U << 14)
#define CRM_APB1EN_SPI3EN                (0x1U << 15)
#define CRM_APB1EN_USART2EN              (0x1U << 17)
#define CRM_APB1EN_USART3EN              (0x1U << 18)
#define CRM_APB1EN_UART4EN               (0x1U << 19)
#define CRM_APB1EN_UART5EN               (0x1U << 20)
#define CRM_APB1EN_I2C1EN                (0x1U << 21)
#define CRM_APB1EN_I2C2EN                (0x1U << 22)
#define CRM_APB1EN_I2C3EN                (0x1U << 23)
#define CRM_APB1EN_CAN1EN                (0x1U << 25)
#define CRM_APB1EN_CAN2EN                (0x1U << 26)
#define CRM_APB1EN_PWCEN                 (0x1U << 28)
#define CRM_APB1EN_DACEN                 (0x1U << 29)
#define CRM_APB1EN_UART7EN               (0x1U << 30)
#define CRM_APB1EN_UART8EN               (0x1U << 31)

/*****************  Bit definition for CRM_APB2EN register  ***************/
#define CRM_APB2EN_TMR1EN                (0x1U << 0)
#define CRM_APB2EN_TMR8EN                (0x1U << 1)
#define CRM_APB2EN_USART1EN              (0x1U << 4)
#define CRM_APB2EN_USART6EN              (0x1U << 5)
#define CRM_APB2EN_ADC1EN                (0x1U << 8)
#define CRM_APB2EN_ADC2EN                (0x1U << 9)
#define CRM_APB2EN_ADC3EN                (0x1U << 10)
#define CRM_APB2EN_SPI1EN                (0x1U << 12)
#define CRM_APB2EN_SPI4EN                (0x1U << 13)
#define CRM_APB2EN_SCFGEN                (0x1U << 14)
#define CRM_APB2EN_TMR9EN                (0x1U << 16)
#define CRM_APB2EN_TMR10EN               (0x1U << 17)
#define CRM_APB2EN_TMR11EN               (0x1U << 18)
#define CRM_APB2EN_TMR20EN               (0x1U << 20)
#define CRM_APB2EN_ACCEN                 (0x1U << 29)

/*****************  Bit definition for CRM_AHBLPEN1 register  ***************/
#define CRM_AHBLPEN1_GPIOALPEN           (0x1U << 0)
#define CRM_AHBLPEN1_GPIOBLPEN           (0x1U << 1)
#define CRM_AHBLPEN1_GPIOCLPEN           (0x1U << 2)
#define CRM_AHBLPEN1_GPIODLPEN           (0x1U << 3)
#define CRM_AHBLPEN1_GPIOELPEN           (0x1U << 4)
#define CRM_AHBLPEN1_GPIOFLPEN           (0x1U << 5)
#define CRM_AHBLPEN1_GPIOGLPEN           (0x1U << 6)
#define CRM_AHBLPEN1_GPIOHLPEN           (0x1U << 7)
#define CRM_AHBLPEN1_CRCLPEN             (0x1U << 12)
#define CRM_AHBLPEN1_EDMALPEN            (0x1U << 21)
#define CRM_AHBLPEN1_DMA1LPEN            (0x1U << 22)
#define CRM_AHBLPEN1_DMA2LPEN            (0x1U << 24)
#define CRM_AHBLPEN1_EMACLPEN            (0x1U << 25)
#define CRM_AHBLPEN1_OTGFS2LPEN          (0x1U << 29)

/*****************  Bit definition for CRM_AHBLPEN2 register  ***************/
#define CRM_AHBLPEN2_DVPLPEN             (0x1U << 0)
#define CRM_AHBLPEN2_OTGFS1LPEN          (0x1U << 7)
#define CRM_AHBLPEN2_SDIO1LPEN           (0x1U << 15)

/*****************  Bit definition for CRM_AHBLPEN3 register  ***************/
#define CRM_AHBLPEN3_XMCLPEN             (0x1U << 0)
#define CRM_AHBLPEN3_QSPI1LPEN           (0x1U << 1)
#define CRM_AHBLPEN3_QSPI2LPEN           (0x1U << 14)
#define CRM_AHBLPEN3_SDIO2LPEN           (0x1U << 15)

/*****************  Bit definition for CRM_APB1LPEN register  ***************/
#define CRM_APB1LPEN_TMR2LPEN            (0x1U << 0)
#define CRM_APB1LPEN_TMR3LPEN            (0x1U << 1)
#define CRM_APB1LPEN_TMR4LPEN            (0x1U << 2)
#define CRM_APB1LPEN_TMR5LPEN            (0x1U << 3)
#define CRM_APB1LPEN_TMR6LPEN            (0x1U << 4)
#define CRM_APB1LPEN_TMR7LPEN            (0x1U << 5)
#define CRM_APB1LPEN_TMR12LPEN           (0x1U << 6)
#define CRM_APB1LPEN_TMR13LPEN           (0x1U << 7)
#define CRM_APB1LPEN_TMR14LPEN           (0x1U << 8)
#define CRM_APB1LPEN_WWDTLPEN            (0x1U << 11)
#define CRM_APB1LPEN_SPI2LPEN            (0x1U << 14)
#define CRM_APB1LPEN_SPI3LPEN            (0x1U << 15)
#define CRM_APB1LPEN_USART2LPEN          (0x1U << 17)
#define CRM_APB1LPEN_USART3LPEN          (0x1U << 18)
#define CRM_APB1LPEN_UART4LPEN           (0x1U << 19)
#define CRM_APB1LPEN_UART5LPEN           (0x1U << 20)
#define CRM_APB1LPEN_I2C1LPEN            (0x1U << 21)
#define CRM_APB1LPEN_I2C2LPEN            (0x1U << 22)
#define CRM_APB1LPEN_I2C3LPEN            (0x1U << 23)
#define CRM_APB1LPEN_CAN1LPEN            (0x1U << 25)
#define CRM_APB1LPEN_CAN2LPEN            (0x1U << 26)
#define CRM_APB1LPEN_PWCLPEN             (0x1U << 28)
#define CRM_APB1LPEN_DACLPEN             (0x1U << 29)
#define CRM_APB1LPEN_UART7LPEN           (0x1U << 30)
#define CRM_APB1LPEN_UART8LPEN           (0x1U << 31)

/*****************  Bit definition for CRM_APB2LPEN register  ***************/
#define CRM_APB2LPEN_TMR1LPEN            (0x1U << 0)
#define CRM_APB2LPEN_TMR8LPEN            (0x1U << 1)
#define CRM_APB2LPEN_USART1LPEN          (0x1U << 4)
#define CRM_APB2LPEN_USART6LPEN          (0x1U << 5)
#define CRM_APB2LPEN_ADC1LPEN            (0x1U << 8)
#define CRM_APB2LPEN_ADC2LPEN            (0x1U << 9)
#define CRM_APB2LPEN_ADC3LPEN            (0x1U << 10)
#define CRM_APB2LPEN_SPI1LPEN            (0x1U << 12)
#define CRM_APB2LPEN_SPI4LPEN            (0x1U << 13)
#define CRM_APB2LPEN_SCFGLPEN            (0x1U << 14)
#define CRM_APB2LPEN_TMR9LPEN            (0x1U << 16)
#define CRM_APB2LPEN_TMR10LPEN           (0x1U << 17)
#define CRM_APB2LPEN_TMR11LPEN           (0x1U << 18)
#define CRM_APB2LPEN_TMR20LPEN           (0x1U << 20)
#define CRM_APB2LPEN_ACCLPEN             (0x1U << 29)

/******************  Bit definition for CRM_BPDC register  *****************/
#define CRM_BPDC_LEXTEN                  (0x1U << 0)
#define CRM_BPDC_LEXTSTBL                (0x1U << 1)
#define CRM_BPDC_LEXTBYPS                (0x1U << 2)
#define CRM_BPDC_ERTCSEL                 (0x3U << 8)
#define CRM_BPDC_ERTCSEL_LEXT            (0x1U << 8)
#define CRM_BPDC_ERTCSEL_LICK            (0x2U << 8)
#define CRM_BPDC_ERTCSEL_HEXTDIV         (0x3U << 8)
#define CRM_BPDC_ERTCEN                  (0x1U << 15)
#define CRM_BPDC_BPDRST                  (0x1U << 16)

/******************  Bit definition for CRM_CTRLSTS register  **************/
#define CRM_CTRLSTS_LICKEN               (0x1U << 0)
#define CRM_CTRLSTS_LICKSTBL             (0x1U << 1)
#define CRM_CTRLSTS_RSTFC                (0x1U << 24)
#define CRM_CTRLSTS_NRSTF                (0x1U << 26)
#define CRM_CTRLSTS_PORRSTF              (0x1U << 27)
#define CRM_CTRLSTS_SWRSTF               (0x1U << 28)
#define CRM_CTRLSTS_WDTRSTF              (0x1U << 29)
#define CRM_CTRLSTS_WWDTRSTF             (0x1U << 30)
#define CRM_CTRLSTS_LPRSTF               (0x1U << 31)

/******************  Bit definition for CRM_MISC1 register  ****************/
#define CRM_MISC1_HICKDIV                (0x1U << 12)
#define CRM_MISC1_HICK_TO_USB            (0x1U << 13)
#define CRM_MISC1_HICK_TO_SCLK           (0x1U << 14)

/******************  Bit definition for CRM_MISC2 register  ****************/
#define CRM_MISC2_AUTO_STEP_EN           (0x3U << 4)
#define CRM_MISC2_CLK1_TO_TMR            (0x1U << 8)
#define CRM_MISC2_EMAC_PPS_SEL           (0x1U << 9)


/* =========================================================================================================================== */
/* ================                                           ERTC                                             ================ */
/* =========================================================================================================================== */

/******************  Bit definition for ERTC_TIME register  *******************/
/*!< SU configuration */
#define ERTC_TIME_SU_Pos                 (0U)
#define ERTC_TIME_SU_Msk                 (0xFU << ERTC_TIME_SU_Pos)              /*!< 0x0000000F */
#define ERTC_TIME_SU                     ERTC_TIME_SU_Msk                        /*!< SU[3:0] (Second units) */
#define ERTC_TIME_SU_0                   (0x1U << ERTC_TIME_SU_Pos)              /*!< 0x00000001 */
#define ERTC_TIME_SU_1                   (0x2U << ERTC_TIME_SU_Pos)              /*!< 0x00000002 */
#define ERTC_TIME_SU_2                   (0x4U << ERTC_TIME_SU_Pos)              /*!< 0x00000004 */
#define ERTC_TIME_SU_3                   (0x8U << ERTC_TIME_SU_Pos)              /*!< 0x00000008 */

/*!< ST configuration */
#define ERTC_TIME_ST_Pos                 (4U)
#define ERTC_TIME_ST_Msk                 (0x7U << ERTC_TIME_ST_Pos)              /*!< 0x00000070 */
#define ERTC_TIME_ST                     ERTC_TIME_ST_Msk                        /*!< ST[2:0] (Second tens) */
#define ERTC_TIME_ST_0                   (0x1U << ERTC_TIME_ST_Pos)              /*!< 0x00000010 */
#define ERTC_TIME_ST_1                   (0x2U << ERTC_TIME_ST_Pos)              /*!< 0x00000020 */
#define ERTC_TIME_ST_2                   (0x4U << ERTC_TIME_ST_Pos)              /*!< 0x00000040 */

/*!< MU configuration */
#define ERTC_TIME_MU_Pos                 (8U)
#define ERTC_TIME_MU_Msk                 (0xFU << ERTC_TIME_MU_Pos)              /*!< 0x00000F00 */
#define ERTC_TIME_MU                     ERTC_TIME_MU_Msk                        /*!< MU[3:0] (Minute units) */
#define ERTC_TIME_MU_0                   (0x1U << ERTC_TIME_MU_Pos)              /*!< 0x00000100 */
#define ERTC_TIME_MU_1                   (0x2U << ERTC_TIME_MU_Pos)              /*!< 0x00000200 */
#define ERTC_TIME_MU_2                   (0x4U << ERTC_TIME_MU_Pos)              /*!< 0x00000400 */
#define ERTC_TIME_MU_3                   (0x8U << ERTC_TIME_MU_Pos)              /*!< 0x00000800 */

/*!< MT configuration */
#define ERTC_TIME_MT_Pos                 (12U)
#define ERTC_TIME_MT_Msk                 (0x7U << ERTC_TIME_MT_Pos)              /*!< 0x00007000 */
#define ERTC_TIME_MT                     ERTC_TIME_MT_Msk                        /*!< MT[2:0] (Minute tens) */
#define ERTC_TIME_MT_0                   (0x1U << ERTC_TIME_MT_Pos)              /*!< 0x00001000 */
#define ERTC_TIME_MT_1                   (0x2U << ERTC_TIME_MT_Pos)              /*!< 0x00002000 */
#define ERTC_TIME_MT_2                   (0x4U << ERTC_TIME_MT_Pos)              /*!< 0x00004000 */

/*!< HU configuration */
#define ERTC_TIME_HU_Pos                 (16U)
#define ERTC_TIME_HU_Msk                 (0xFU << ERTC_TIME_HU_Pos)              /*!< 0x000F0000 */
#define ERTC_TIME_HU                     ERTC_TIME_HU_Msk                        /*!< HU[3:0] (Hour units) */
#define ERTC_TIME_HU_0                   (0x1U << ERTC_TIME_HU_Pos)              /*!< 0x00010000 */
#define ERTC_TIME_HU_1                   (0x2U << ERTC_TIME_HU_Pos)              /*!< 0x00020000 */
#define ERTC_TIME_HU_2                   (0x4U << ERTC_TIME_HU_Pos)              /*!< 0x00040000 */
#define ERTC_TIME_HU_3                   (0x8U << ERTC_TIME_HU_Pos)              /*!< 0x00080000 */

/*!< HT configuration */
#define ERTC_TIME_HT_Pos                 (20U)
#define ERTC_TIME_HT_Msk                 (0x3U << ERTC_TIME_HT_Pos)              /*!< 0x00300000 */
#define ERTC_TIME_HT                     ERTC_TIME_HT_Msk                        /*!< HT[1:0] (Hour tens) */
#define ERTC_TIME_HT_0                   (0x1U << ERTC_TIME_HT_Pos)              /*!< 0x00100000 */
#define ERTC_TIME_HT_1                   (0x2U << ERTC_TIME_HT_Pos)              /*!< 0x00200000 */

#define ERTC_TIME_AMPM_Pos               (22U)
#define ERTC_TIME_AMPM_Msk               (0x1U << ERTC_TIME_AMPM_Pos)            /*!< 0x00400000 */
#define ERTC_TIME_AMPM                   ERTC_TIME_AMPM_Msk                      /*!< AM/PM */

/******************  Bit definition for ERTC_DATE register  *******************/
/*!< DU configuration */
#define ERTC_DATE_DU_Pos                 (0U)
#define ERTC_DATE_DU_Msk                 (0xFU << ERTC_DATE_DU_Pos)              /*!< 0x0000000F */
#define ERTC_DATE_DU                     ERTC_DATE_DU_Msk                        /*!< DU[3:0] (Date units) */
#define ERTC_DATE_DU_0                   (0x1U << ERTC_DATE_DU_Pos)              /*!< 0x00000001 */
#define ERTC_DATE_DU_1                   (0x2U << ERTC_DATE_DU_Pos)              /*!< 0x00000002 */
#define ERTC_DATE_DU_2                   (0x4U << ERTC_DATE_DU_Pos)              /*!< 0x00000004 */
#define ERTC_DATE_DU_3                   (0x8U << ERTC_DATE_DU_Pos)              /*!< 0x00000008 */

/*!< DT configuration */
#define ERTC_DATE_DT_Pos                 (4U)
#define ERTC_DATE_DT_Msk                 (0x3U << ERTC_DATE_DT_Pos)              /*!< 0x00300000 */
#define ERTC_DATE_DT                     ERTC_DATE_DT_Msk                        /*!< DT[1:0] (Date tens) */
#define ERTC_DATE_DT_0                   (0x1U << ERTC_DATE_DT_Pos)              /*!< 0x00000010 */
#define ERTC_DATE_DT_1                   (0x2U << ERTC_DATE_DT_Pos)              /*!< 0x00000020 */

/*!< MU configuration */
#define ERTC_DATE_MU_Pos                 (8U)
#define ERTC_DATE_MU_Msk                 (0xFU << ERTC_DATE_MU_Pos)              /*!< 0x00000F00 */
#define ERTC_DATE_MU                     ERTC_DATE_MU_Msk                        /*!< MU[3:0] (Month units) */
#define ERTC_DATE_MU_0                   (0x1U << ERTC_DATE_MU_Pos)              /*!< 0x00000100 */
#define ERTC_DATE_MU_1                   (0x2U << ERTC_DATE_MU_Pos)              /*!< 0x00000200 */
#define ERTC_DATE_MU_2                   (0x4U << ERTC_DATE_MU_Pos)              /*!< 0x00000400 */
#define ERTC_DATE_MU_3                   (0x8U << ERTC_DATE_MU_Pos)              /*!< 0x00000800 */

#define ERTC_DATE_MT_Pos                 (12U)
#define ERTC_DATE_MT_Msk                 (0x1U << ERTC_DATE_MT_Pos)              /*!< 0x00001000 */
#define ERTC_DATE_MT                     ERTC_DATE_MT_Msk                        /*!< Month tens */

/*!< WK configuration */
#define ERTC_DATE_WK_Pos                 (13U)
#define ERTC_DATE_WK_Msk                 (0x7U << ERTC_DATE_WK_Pos)              /*!< 0x0000E000 */
#define ERTC_DATE_WK                     ERTC_DATE_WK_Msk                        /*!< WK[2:0] (Week day) */
#define ERTC_DATE_WK_0                   (0x1U << ERTC_DATE_WK_Pos)              /*!< 0x00002000 */
#define ERTC_DATE_WK_1                   (0x2U << ERTC_DATE_WK_Pos)              /*!< 0x00004000 */
#define ERTC_DATE_WK_2                   (0x4U << ERTC_DATE_WK_Pos)              /*!< 0x00008000 */

/*!< YU configuration */
#define ERTC_DATE_YU_Pos                 (16U)
#define ERTC_DATE_YU_Msk                 (0xFU << ERTC_DATE_YU_Pos)              /*!< 0x000F0000 */
#define ERTC_DATE_YU                     ERTC_DATE_YU_Msk                        /*!< YU[3:0] (Year units) */
#define ERTC_DATE_YU_0                   (0x1U << ERTC_DATE_YU_Pos)              /*!< 0x00010000 */
#define ERTC_DATE_YU_1                   (0x2U << ERTC_DATE_YU_Pos)              /*!< 0x00020000 */
#define ERTC_DATE_YU_2                   (0x4U << ERTC_DATE_YU_Pos)              /*!< 0x00040000 */
#define ERTC_DATE_YU_3                   (0x8U << ERTC_DATE_YU_Pos)              /*!< 0x00080000 */

/*!< YT configuration */
#define ERTC_DATE_YT_Pos                 (20U)
#define ERTC_DATE_YT_Msk                 (0xFU << ERTC_DATE_YT_Pos)              /*!< 0x00F00000 */
#define ERTC_DATE_YT                     ERTC_DATE_YT_Msk                        /*!< YT[3:0] (Year tens) */
#define ERTC_DATE_YT_0                   (0x1U << ERTC_DATE_YT_Pos)              /*!< 0x00100000 */
#define ERTC_DATE_YT_1                   (0x2U << ERTC_DATE_YT_Pos)              /*!< 0x00200000 */
#define ERTC_DATE_YT_2                   (0x4U << ERTC_DATE_YT_Pos)              /*!< 0x00400000 */
#define ERTC_DATE_YT_3                   (0x8U << ERTC_DATE_YT_Pos)              /*!< 0x00800000 */

/******************  Bit definition for ERTC_CTRL register  *******************/
/*!< WATCLK configuration */
#define ERTC_CTRL_WATCLK_Pos             (0U)
#define ERTC_CTRL_WATCLK_Msk             (0x7U << ERTC_CTRL_WATCLK_Pos)          /*!< 0x00000007 */
#define ERTC_CTRL_WATCLK                 ERTC_CTRL_WATCLK_Msk                    /*!< WATCLK[2:0] (Wakeup timer clock selection) */
#define ERTC_CTRL_WATCLK_0               (0x1U << ERTC_CTRL_WATCLK_Pos)          /*!< 0x00000001 */
#define ERTC_CTRL_WATCLK_1               (0x2U << ERTC_CTRL_WATCLK_Pos)          /*!< 0x00000002 */
#define ERTC_CTRL_WATCLK_2               (0x4U << ERTC_CTRL_WATCLK_Pos)          /*!< 0x00000004 */

#define ERTC_CTRL_TSEDG_Pos              (3U)
#define ERTC_CTRL_TSEDG_Msk              (0x1U << ERTC_CTRL_TSEDG_Pos)           /*!< 0x00000008 */
#define ERTC_CTRL_TSEDG                  ERTC_CTRL_TSEDG_Msk                     /*!< Timestamp trigger edge */
#define ERTC_CTRL_RCDEN_Pos              (4U)
#define ERTC_CTRL_RCDEN_Msk              (0x1U << ERTC_CTRL_RCDEN_Pos)           /*!< 0x00000010 */
#define ERTC_CTRL_RCDEN                  ERTC_CTRL_RCDEN_Msk                     /*!< Reference clock detection enable */
#define ERTC_CTRL_DREN_Pos               (5U)
#define ERTC_CTRL_DREN_Msk               (0x1U << ERTC_CTRL_DREN_Pos)            /*!< 0x00000020 */
#define ERTC_CTRL_DREN                   ERTC_CTRL_DREN_Msk                      /*!< Date/time register direct read enable */
#define ERTC_CTRL_HM_Pos                 (6U)
#define ERTC_CTRL_HM_Msk                 (0x1U << ERTC_CTRL_HM_Pos)              /*!< 0x00000040 */
#define ERTC_CTRL_HM                     ERTC_CTRL_HM_Msk                        /*!< Hour mode */
#define ERTC_CTRL_CCALEN_Pos             (7U)
#define ERTC_CTRL_CCALEN_Msk             (0x1U << ERTC_CTRL_CCALEN_Pos)          /*!< 0x00000080 */
#define ERTC_CTRL_CCALEN                 ERTC_CTRL_CCALEN_Msk                    /*!< Coarse calibration enable */
#define ERTC_CTRL_ALAEN_Pos              (8U)
#define ERTC_CTRL_ALAEN_Msk              (0x1U << ERTC_CTRL_ALAEN_Pos)           /*!< 0x00000100 */
#define ERTC_CTRL_ALAEN                  ERTC_CTRL_ALAEN_Msk                     /*!< Alarm A enable */
#define ERTC_CTRL_ALBEN_Pos              (9U)
#define ERTC_CTRL_ALBEN_Msk              (0x1U << ERTC_CTRL_ALBEN_Pos)           /*!< 0x00000200 */
#define ERTC_CTRL_ALBEN                  ERTC_CTRL_ALBEN_Msk                     /*!< Alarm B enable */
#define ERTC_CTRL_WATEN_Pos              (10U)
#define ERTC_CTRL_WATEN_Msk              (0x1U << ERTC_CTRL_WATEN_Pos)           /*!< 0x00000400 */
#define ERTC_CTRL_WATEN                  ERTC_CTRL_WATEN_Msk                     /*!< Wakeup timer enable */
#define ERTC_CTRL_TSEN_Pos               (11U)
#define ERTC_CTRL_TSEN_Msk               (0x1U << ERTC_CTRL_TSEN_Pos)            /*!< 0x00000800 */
#define ERTC_CTRL_TSEN                   ERTC_CTRL_TSEN_Msk                      /*!< Timestamp enable */
#define ERTC_CTRL_ALAIEN_Pos             (12U)
#define ERTC_CTRL_ALAIEN_Msk             (0x1U << ERTC_CTRL_ALAIEN_Pos)          /*!< 0x00001000 */
#define ERTC_CTRL_ALAIEN                 ERTC_CTRL_ALAIEN_Msk                    /*!< Alarm A interrupt enable */
#define ERTC_CTRL_ALBIEN_Pos             (13U)
#define ERTC_CTRL_ALBIEN_Msk             (0x1U << ERTC_CTRL_ALBIEN_Pos)          /*!< 0x00002000 */
#define ERTC_CTRL_ALBIEN                 ERTC_CTRL_ALBIEN_Msk                    /*!< Alarm B interrupt enable */
#define ERTC_CTRL_WATIEN_Pos             (14U)
#define ERTC_CTRL_WATIEN_Msk             (0x1U << ERTC_CTRL_WATIEN_Pos)          /*!< 0x00004000 */
#define ERTC_CTRL_WATIEN                 ERTC_CTRL_WATIEN_Msk                    /*!< Wakeup timer interrupt enable */
#define ERTC_CTRL_TSIEN_Pos              (15U)
#define ERTC_CTRL_TSIEN_Msk              (0x1U << ERTC_CTRL_TSIEN_Pos)           /*!< 0x000008000 */
#define ERTC_CTRL_TSIEN                  ERTC_CTRL_TSIEN_Msk                     /*!< Timestamp interrupt enable */
#define ERTC_CTRL_ADD1H_Pos              (16U)
#define ERTC_CTRL_ADD1H_Msk              (0x1U << ERTC_CTRL_ADD1H_Pos)           /*!< 0x00010000 */
#define ERTC_CTRL_ADD1H                  ERTC_CTRL_ADD1H_Msk                     /*!< Add 1 hour */
#define ERTC_CTRL_DEC1H_Pos              (17U)
#define ERTC_CTRL_DEC1H_Msk              (0x1U << ERTC_CTRL_DEC1H_Pos)           /*!< 0x00020000 */
#define ERTC_CTRL_DEC1H                  ERTC_CTRL_DEC1H_Msk                     /*!< Decrease 1 hour */
#define ERTC_CTRL_BPR_Pos                (18U)
#define ERTC_CTRL_BPR_Msk                (0x1U << ERTC_CTRL_BPR_Pos)             /*!< 0x00040000 */
#define ERTC_CTRL_BPR                    ERTC_CTRL_BPR_Msk                       /*!< Battery powered domain data register */
#define ERTC_CTRL_CALOSEL_Pos            (19U)
#define ERTC_CTRL_CALOSEL_Msk            (0x1U << ERTC_CTRL_CALOSEL_Pos)         /*!< 0x00080000 */
#define ERTC_CTRL_CALOSEL                ERTC_CTRL_CALOSEL_Msk                   /*!< Calibration output selection */
#define ERTC_CTRL_OUTP_Pos               (20U)
#define ERTC_CTRL_OUTP_Msk               (0x1U << ERTC_CTRL_OUTP_Pos)            /*!< 0x00100000 */
#define ERTC_CTRL_OUTP                   ERTC_CTRL_OUTP_Msk                      /*!< Output polarity */

/*!< OUTSEL configuration */
#define ERTC_CTRL_OUTSEL_Pos             (21U)
#define ERTC_CTRL_OUTSEL_Msk             (0x3U << ERTC_CTRL_OUTSEL_Pos)          /*!< 0x00600000 */
#define ERTC_CTRL_OUTSEL                 ERTC_CTRL_OUTSEL_Msk                    /*!< OUTSEL[1:0] (Output source selection) */
#define ERTC_CTRL_OUTSEL_0               (0x1U << ERTC_CTRL_OUTSEL_Pos)          /*!< 0x00200000 */
#define ERTC_CTRL_OUTSEL_1               (0x2U << ERTC_CTRL_OUTSEL_Pos)          /*!< 0x00400000 */

#define ERTC_CTRL_CALOEN_Pos             (23U)
#define ERTC_CTRL_CALOEN_Msk             (0x1U << ERTC_CTRL_CALOEN_Pos)          /*!< 0x00800000 */
#define ERTC_CTRL_CALOEN                 ERTC_CTRL_CALOEN_Msk                    /*!< Calibration output enable */

/*******************  Bit definition for ERTC_STS register  *******************/
#define ERTC_STS_ALAWF_Pos               (0U)
#define ERTC_STS_ALAWF_Msk               (0x1U << ERTC_STS_ALAWF_Pos)            /*!< 0x00000001 */
#define ERTC_STS_ALAWF                   ERTC_STS_ALAWF_Msk                      /*!< Alarm A register allows write flag */
#define ERTC_STS_ALBWF_Pos               (1U)
#define ERTC_STS_ALBWF_Msk               (0x1U << ERTC_STS_ALBWF_Pos)            /*!< 0x00000002 */
#define ERTC_STS_ALBWF                   ERTC_STS_ALBWF_Msk                      /*!< Alarm B register allows write flag */
#define ERTC_STS_WATWF_Pos               (2U)
#define ERTC_STS_WATWF_Msk               (0x1U << ERTC_STS_WATWF_Pos)            /*!< 0x00000004 */
#define ERTC_STS_WATWF                   ERTC_STS_WATWF_Msk                      /*!< Wakeup timer register allows write flag */
#define ERTC_STS_TADJF_Pos               (3U)
#define ERTC_STS_TADJF_Msk               (0x1U << ERTC_STS_TADJF_Pos)            /*!< 0x00000008 */
#define ERTC_STS_TADJF                   ERTC_STS_TADJF_Msk                      /*!< Time adjustment flag */
#define ERTC_STS_INITF_Pos               (4U)
#define ERTC_STS_INITF_Msk               (0x1U << ERTC_STS_INITF_Pos)            /*!< 0x00000010 */
#define ERTC_STS_INITF                   ERTC_STS_INITF_Msk                      /*!< Calendar initialization flag */
#define ERTC_STS_UPDF_Pos                (5U)
#define ERTC_STS_UPDF_Msk                (0x1U << ERTC_STS_UPDF_Pos)             /*!< 0x00000020 */
#define ERTC_STS_UPDF                    ERTC_STS_UPDF_Msk                       /*!< Calendar update flag */
#define ERTC_STS_IMF_Pos                 (6U)
#define ERTC_STS_IMF_Msk                 (0x1U << ERTC_STS_IMF_Pos)              /*!< 0x00000040 */
#define ERTC_STS_IMF                     ERTC_STS_IMF_Msk                        /*!< Enter initialization mode flag */
#define ERTC_STS_IMEN_Pos                (7U)
#define ERTC_STS_IMEN_Msk                (0x1U << ERTC_STS_IMEN_Pos)             /*!< 0x00000080 */
#define ERTC_STS_IMEN                    ERTC_STS_IMEN_Msk                       /*!< Initialization mode enable */
#define ERTC_STS_ALAF_Pos                (8U)
#define ERTC_STS_ALAF_Msk                (0x1U << ERTC_STS_ALAF_Pos)             /*!< 0x00000100 */
#define ERTC_STS_ALAF                    ERTC_STS_ALAF_Msk                       /*!< Alarm clock A flag */
#define ERTC_STS_ALBF_Pos                (9U)
#define ERTC_STS_ALBF_Msk                (0x1U << ERTC_STS_ALBF_Pos)             /*!< 0x00000200 */
#define ERTC_STS_ALBF                    ERTC_STS_ALBF_Msk                       /*!< Alarm clock B flag */
#define ERTC_STS_WATF_Pos                (10U)
#define ERTC_STS_WATF_Msk                (0x1U << ERTC_STS_WATF_Pos)             /*!< 0x00000400 */
#define ERTC_STS_WATF                    ERTC_STS_WATF_Msk                       /*!< Wakeup timer flag */
#define ERTC_STS_TSF_Pos                 (11U)
#define ERTC_STS_TSF_Msk                 (0x1U << ERTC_STS_TSF_Pos)              /*!< 0x00000800 */
#define ERTC_STS_TSF                     ERTC_STS_TSF_Msk                        /*!< Timestamp flag */
#define ERTC_STS_TSOF_Pos                (12U)
#define ERTC_STS_TSOF_Msk                (0x1U << ERTC_STS_TSOF_Pos)             /*!< 0x00001000 */
#define ERTC_STS_TSOF                    ERTC_STS_TSOF_Msk                       /*!< Timestamp overflow flag */
#define ERTC_STS_TP1F_Pos                (13U)
#define ERTC_STS_TP1F_Msk                (0x1U << ERTC_STS_TP1F_Pos)             /*!< 0x00002000 */
#define ERTC_STS_TP1F                    ERTC_STS_TP1F_Msk                       /*!< Tamper detection 1 flag */
#define ERTC_STS_CALUPDF_Pos             (16U)
#define ERTC_STS_CALUPDF_Msk             (0x1U << ERTC_STS_CALUPDF_Pos)          /*!< 0x00010000 */
#define ERTC_STS_CALUPDF                 ERTC_STS_CALUPDF_Msk                    /*!< Calibration value update complete flag */

/*******************  Bit definition for ERTC_DIV register  *******************/
#define ERTC_DIV_DIVB_Pos                (0U)
#define ERTC_DIV_DIVB_Msk                (0x7FFFU << ERTC_DIV_DIVB_Pos)          /*!< 0x00007FFF */
#define ERTC_DIV_DIVB                    ERTC_DIV_DIVB_Msk                       /*!< Divider B */
#define ERTC_DIV_DIVA_Pos                (16U)
#define ERTC_DIV_DIVA_Msk                (0x7FU << ERTC_DIV_DIVA_Pos)            /*!< 0x007F0000 */
#define ERTC_DIV_DIVA                    ERTC_DIV_DIVA_Msk                       /*!< Divider A */

/*******************  Bit definition for ERTC_WAT register  *******************/
#define ERTC_WAT_VAL_Pos                 (0U)
#define ERTC_WAT_VAL_Msk                 (0xFFFFU << ERTC_WAT_VAL_Pos)           /*!< 0x0000FFFF */
#define ERTC_WAT_VAL                     ERTC_WAT_VAL_Msk                        /*!< Wakeup timer reload value */

/******************  Bit definition for ERTC_CCAL register  *******************/
/*!< CALVAL configuration */
#define ERTC_CCAL_CALVAL_Pos             (0U)
#define ERTC_CCAL_CALVAL_Msk             (0x1FU << ERTC_CCAL_CALVAL_Pos)         /*!< 0x0000001F */
#define ERTC_CCAL_CALVAL                 ERTC_CCAL_CALVAL_Msk                    /*!< CALVAL[4:0] (Calibration value) */
#define ERTC_CCAL_CALVAL_0               (0x1U << ERTC_CCAL_CALVAL_Pos)          /*!< 0x00000001 */
#define ERTC_CCAL_CALVAL_1               (0x2U << ERTC_CCAL_CALVAL_Pos)          /*!< 0x00000002 */
#define ERTC_CCAL_CALVAL_2               (0x4U << ERTC_CCAL_CALVAL_Pos)          /*!< 0x00000004 */
#define ERTC_CCAL_CALVAL_3               (0x8U << ERTC_CCAL_CALVAL_Pos)          /*!< 0x00000008 */
#define ERTC_CCAL_CALVAL_4               (0x10U << ERTC_CCAL_CALVAL_Pos)         /*!< 0x00000010 */

#define ERTC_CCAL_CALDIR_Pos             (7U)
#define ERTC_CCAL_CALDIR_Msk             (0x1U << ERTC_CCAL_CALDIR_Pos)          /*!< 0x00000080 */
#define ERTC_CCAL_CALDIR                 ERTC_CCAL_CALDIR_Msk                    /*!< Calibration direction */

/*******************  Bit definition for ERTC_ALA register  *******************/
/*!< SU configuration */
#define ERTC_ALA_SU_Pos                  (0U)
#define ERTC_ALA_SU_Msk                  (0xFU << ERTC_ALA_SU_Pos)               /*!< 0x0000000F */
#define ERTC_ALA_SU                      ERTC_ALA_SU_Msk                         /*!< SU[3:0] (Second units) */
#define ERTC_ALA_SU_0                    (0x1U << ERTC_ALA_SU_Pos)               /*!< 0x00000001 */
#define ERTC_ALA_SU_1                    (0x2U << ERTC_ALA_SU_Pos)               /*!< 0x00000002 */
#define ERTC_ALA_SU_2                    (0x4U << ERTC_ALA_SU_Pos)               /*!< 0x00000004 */
#define ERTC_ALA_SU_3                    (0x8U << ERTC_ALA_SU_Pos)               /*!< 0x00000008 */

/*!< ST configuration */
#define ERTC_ALA_ST_Pos                  (4U)
#define ERTC_ALA_ST_Msk                  (0x7U << ERTC_ALA_ST_Pos)               /*!< 0x00000070 */
#define ERTC_ALA_ST                      ERTC_ALA_ST_Msk                         /*!< ST[2:0] (Second tens) */
#define ERTC_ALA_ST_0                    (0x1U << ERTC_ALA_ST_Pos)               /*!< 0x00000010 */
#define ERTC_ALA_ST_1                    (0x2U << ERTC_ALA_ST_Pos)               /*!< 0x00000020 */
#define ERTC_ALA_ST_2                    (0x4U << ERTC_ALA_ST_Pos)               /*!< 0x00000040 */

#define ERTC_ALA_MASK1_Pos               (7U)
#define ERTC_ALA_MASK1_Msk               (0x1U << ERTC_ALA_MASK1_Pos)            /*!< 0x00000080 */
#define ERTC_ALA_MASK1                   ERTC_ALA_MASK1_Msk                      /*!< Second mask */

/*!< MU configuration */
#define ERTC_ALA_MU_Pos                  (8U)
#define ERTC_ALA_MU_Msk                  (0xFU << ERTC_ALA_MU_Pos)               /*!< 0x00000F00 */
#define ERTC_ALA_MU                      ERTC_ALA_MU_Msk                         /*!< MU[3:0] (Minute units) */
#define ERTC_ALA_MU_0                    (0x1U << ERTC_ALA_MU_Pos)               /*!< 0x00000100 */
#define ERTC_ALA_MU_1                    (0x2U << ERTC_ALA_MU_Pos)               /*!< 0x00000200 */
#define ERTC_ALA_MU_2                    (0x4U << ERTC_ALA_MU_Pos)               /*!< 0x00000400 */
#define ERTC_ALA_MU_3                    (0x8U << ERTC_ALA_MU_Pos)               /*!< 0x00000800 */

/*!< MT configuration */
#define ERTC_ALA_MT_Pos                  (12U)
#define ERTC_ALA_MT_Msk                  (0x7U << ERTC_ALA_MT_Pos)               /*!< 0x00007000 */
#define ERTC_ALA_MT                      ERTC_ALA_MT_Msk                         /*!< MT[2:0] (Minute tens) */
#define ERTC_ALA_MT_0                    (0x1U << ERTC_ALA_MT_Pos)               /*!< 0x00001000 */
#define ERTC_ALA_MT_1                    (0x2U << ERTC_ALA_MT_Pos)               /*!< 0x00002000 */
#define ERTC_ALA_MT_2                    (0x4U << ERTC_ALA_MT_Pos)               /*!< 0x00004000 */

#define ERTC_ALA_MASK2_Pos               (15U)
#define ERTC_ALA_MASK2_Msk               (0x1U << ERTC_ALA_MASK2_Pos)            /*!< 0x00008000 */
#define ERTC_ALA_MASK2                   ERTC_ALA_MASK2_Msk                      /*!< Minute mask */

/*!< HU configuration */
#define ERTC_ALA_HU_Pos                  (16U)
#define ERTC_ALA_HU_Msk                  (0xFU << ERTC_ALA_HU_Pos)               /*!< 0x000F0000 */
#define ERTC_ALA_HU                      ERTC_ALA_HU_Msk                         /*!< HU[3:0] (Hour units) */
#define ERTC_ALA_HU_0                    (0x1U << ERTC_ALA_HU_Pos)               /*!< 0x00010000 */
#define ERTC_ALA_HU_1                    (0x2U << ERTC_ALA_HU_Pos)               /*!< 0x00020000 */
#define ERTC_ALA_HU_2                    (0x4U << ERTC_ALA_HU_Pos)               /*!< 0x00040000 */
#define ERTC_ALA_HU_3                    (0x8U << ERTC_ALA_HU_Pos)               /*!< 0x00080000 */

/*!< HT configuration */
#define ERTC_ALA_HT_Pos                  (20U)
#define ERTC_ALA_HT_Msk                  (0x3U << ERTC_ALA_HT_Pos)               /*!< 0x00300000 */
#define ERTC_ALA_HT                      ERTC_ALA_HT_Msk                         /*!< HT[1:0] (Hour tens) */
#define ERTC_ALA_HT_0                    (0x1U << ERTC_ALA_HT_Pos)               /*!< 0x00100000 */
#define ERTC_ALA_HT_1                    (0x2U << ERTC_ALA_HT_Pos)               /*!< 0x00200000 */

#define ERTC_ALA_AMPM_Pos                (22U)
#define ERTC_ALA_AMPM_Msk                (0x1U << ERTC_ALA_AMPM_Pos)             /*!< 0x00400000 */
#define ERTC_ALA_AMPM                    ERTC_ALA_AMPM_Msk                       /*!< AM/PM */
#define ERTC_ALA_MASK3_Pos               (23U)
#define ERTC_ALA_MASK3_Msk               (0x1U << ERTC_ALA_MASK3_Pos)            /*!< 0x00800000 */
#define ERTC_ALA_MASK3                   ERTC_ALA_MASK3_Msk                      /*!< Hour mask */

/*!< DU configuration */
#define ERTC_ALA_DU_Pos                  (24U)
#define ERTC_ALA_DU_Msk                  (0xFU << ERTC_ALA_DU_Pos)               /*!< 0x0F000000 */
#define ERTC_ALA_DU                      ERTC_ALA_DU_Msk                         /*!< DU[3:0] (Date/week day units) */
#define ERTC_ALA_DU_0                    (0x1U << ERTC_ALA_DU_Pos)               /*!< 0x01000000 */
#define ERTC_ALA_DU_1                    (0x2U << ERTC_ALA_DU_Pos)               /*!< 0x02000000 */
#define ERTC_ALA_DU_2                    (0x4U << ERTC_ALA_DU_Pos)               /*!< 0x04000000 */
#define ERTC_ALA_DU_3                    (0x8U << ERTC_ALA_DU_Pos)               /*!< 0x08000000 */

/*!< DT configuration */
#define ERTC_ALA_DT_Pos                  (28U)
#define ERTC_ALA_DT_Msk                  (0x3U << ERTC_ALA_DT_Pos)               /*!< 0x30000000 */
#define ERTC_ALA_DT                      ERTC_ALA_DT_Msk                         /*!< DT[1:0] (Date/week day tens) */
#define ERTC_ALA_DT_0                    (0x1U << ERTC_ALA_DT_Pos)               /*!< 0x10000000 */
#define ERTC_ALA_DT_1                    (0x2U << ERTC_ALA_DT_Pos)               /*!< 0x20000000 */

#define ERTC_ALA_WKSEL_Pos               (30U)
#define ERTC_ALA_WKSEL_Msk               (0x1U << ERTC_ALA_WKSEL_Pos)            /*!< 0x40000000 */
#define ERTC_ALA_WKSEL                   ERTC_ALA_WKSEL_Msk                      /*!< Date/week day select */
#define ERTC_ALA_MASK4_Pos               (31U)
#define ERTC_ALA_MASK4_Msk               (0x1U << ERTC_ALA_MASK4_Pos)            /*!< 0x80000000 */
#define ERTC_ALA_MASK4                   ERTC_ALA_MASK4_Msk                      /*!< Date/week day mask */

/*******************  Bit definition for ERTC_ALB register  *******************/
/*!< SU configuration */
#define ERTC_ALB_SU_Pos                  (0U)
#define ERTC_ALB_SU_Msk                  (0xFU << ERTC_ALB_SU_Pos)               /*!< 0x0000000F */
#define ERTC_ALB_SU                      ERTC_ALB_SU_Msk                         /*!< SU[3:0] (Second units) */
#define ERTC_ALB_SU_0                    (0x1U << ERTC_ALB_SU_Pos)               /*!< 0x00000001 */
#define ERTC_ALB_SU_1                    (0x2U << ERTC_ALB_SU_Pos)               /*!< 0x00000002 */
#define ERTC_ALB_SU_2                    (0x4U << ERTC_ALB_SU_Pos)               /*!< 0x00000004 */
#define ERTC_ALB_SU_3                    (0x8U << ERTC_ALB_SU_Pos)               /*!< 0x00000008 */

/*!< ST configuration */
#define ERTC_ALB_ST_Pos                  (4U)
#define ERTC_ALB_ST_Msk                  (0x7U << ERTC_ALB_ST_Pos)               /*!< 0x00000070 */
#define ERTC_ALB_ST                      ERTC_ALB_ST_Msk                         /*!< ST[2:0] (Second tens) */
#define ERTC_ALB_ST_0                    (0x1U << ERTC_ALB_ST_Pos)               /*!< 0x00000010 */
#define ERTC_ALB_ST_1                    (0x2U << ERTC_ALB_ST_Pos)               /*!< 0x00000020 */
#define ERTC_ALB_ST_2                    (0x4U << ERTC_ALB_ST_Pos)               /*!< 0x00000040 */

#define ERTC_ALB_MASK1_Pos               (7U)
#define ERTC_ALB_MASK1_Msk               (0x1U << ERTC_ALB_MASK1_Pos)            /*!< 0x00000080 */
#define ERTC_ALB_MASK1                   ERTC_ALB_MASK1_Msk                      /*!< Second mask */

/*!< MU configuration */
#define ERTC_ALB_MU_Pos                  (8U)
#define ERTC_ALB_MU_Msk                  (0xFU << ERTC_ALB_MU_Pos)               /*!< 0x00000F00 */
#define ERTC_ALB_MU                      ERTC_ALB_MU_Msk                         /*!< MU[3:0] (Minute units) */
#define ERTC_ALB_MU_0                    (0x1U << ERTC_ALB_MU_Pos)               /*!< 0x00000100 */
#define ERTC_ALB_MU_1                    (0x2U << ERTC_ALB_MU_Pos)               /*!< 0x00000200 */
#define ERTC_ALB_MU_2                    (0x4U << ERTC_ALB_MU_Pos)               /*!< 0x00000400 */
#define ERTC_ALB_MU_3                    (0x8U << ERTC_ALB_MU_Pos)               /*!< 0x00000800 */

/*!< MT configuration */
#define ERTC_ALB_MT_Pos                  (12U)
#define ERTC_ALB_MT_Msk                  (0x7U << ERTC_ALB_MT_Pos)               /*!< 0x00007000 */
#define ERTC_ALB_MT                      ERTC_ALB_MT_Msk                         /*!< MT[2:0] (Minute tens) */
#define ERTC_ALB_MT_0                    (0x1U << ERTC_ALB_MT_Pos)               /*!< 0x00001000 */
#define ERTC_ALB_MT_1                    (0x2U << ERTC_ALB_MT_Pos)               /*!< 0x00002000 */
#define ERTC_ALB_MT_2                    (0x4U << ERTC_ALB_MT_Pos)               /*!< 0x00004000 */

#define ERTC_ALB_MASK2_Pos               (15U)
#define ERTC_ALB_MASK2_Msk               (0x1U << ERTC_ALB_MASK2_Pos)            /*!< 0x00008000 */
#define ERTC_ALB_MASK2                   ERTC_ALB_MASK2_Msk                      /*!< Minute mask */

/*!< HU configuration */
#define ERTC_ALB_HU_Pos                  (16U)
#define ERTC_ALB_HU_Msk                  (0xFU << ERTC_ALB_HU_Pos)               /*!< 0x000F0000 */
#define ERTC_ALB_HU                      ERTC_ALB_HU_Msk                         /*!< HU[3:0] (Hour units) */
#define ERTC_ALB_HU_0                    (0x1U << ERTC_ALB_HU_Pos)               /*!< 0x00010000 */
#define ERTC_ALB_HU_1                    (0x2U << ERTC_ALB_HU_Pos)               /*!< 0x00020000 */
#define ERTC_ALB_HU_2                    (0x4U << ERTC_ALB_HU_Pos)               /*!< 0x00040000 */
#define ERTC_ALB_HU_3                    (0x8U << ERTC_ALB_HU_Pos)               /*!< 0x00080000 */

/*!< HT configuration */
#define ERTC_ALB_HT_Pos                  (20U)
#define ERTC_ALB_HT_Msk                  (0x3U << ERTC_ALB_HT_Pos)               /*!< 0x00300000 */
#define ERTC_ALB_HT                      ERTC_ALB_HT_Msk                         /*!< HT[1:0] (Hour tens) */
#define ERTC_ALB_HT_0                    (0x1U << ERTC_ALB_HT_Pos)               /*!< 0x00100000 */
#define ERTC_ALB_HT_1                    (0x2U << ERTC_ALB_HT_Pos)               /*!< 0x00200000 */

#define ERTC_ALB_AMPM_Pos                (22U)
#define ERTC_ALB_AMPM_Msk                (0x1U << ERTC_ALB_AMPM_Pos)             /*!< 0x00400000 */
#define ERTC_ALB_AMPM                    ERTC_ALB_AMPM_Msk                       /*!< AM/PM */
#define ERTC_ALB_MASK3_Pos               (23U)
#define ERTC_ALB_MASK3_Msk               (0x1U << ERTC_ALB_MASK3_Pos)            /*!< 0x00800000 */
#define ERTC_ALB_MASK3                   ERTC_ALB_MASK3_Msk                      /*!< Hour mask */

/*!< DU configuration */
#define ERTC_ALB_DU_Pos                  (24U)
#define ERTC_ALB_DU_Msk                  (0xFU << ERTC_ALB_DU_Pos)               /*!< 0x0F000000 */
#define ERTC_ALB_DU                      ERTC_ALB_DU_Msk                         /*!< DU[3:0] (Date/week day units) */
#define ERTC_ALB_DU_0                    (0x1U << ERTC_ALB_DU_Pos)               /*!< 0x01000000 */
#define ERTC_ALB_DU_1                    (0x2U << ERTC_ALB_DU_Pos)               /*!< 0x02000000 */
#define ERTC_ALB_DU_2                    (0x4U << ERTC_ALB_DU_Pos)               /*!< 0x04000000 */
#define ERTC_ALB_DU_3                    (0x8U << ERTC_ALB_DU_Pos)               /*!< 0x08000000 */

/*!< DT configuration */
#define ERTC_ALB_DT_Pos                  (28U)
#define ERTC_ALB_DT_Msk                  (0x3U << ERTC_ALB_DT_Pos)               /*!< 0x30000000 */
#define ERTC_ALB_DT                      ERTC_ALB_DT_Msk                         /*!< DT[1:0] (Date/week day tens) */
#define ERTC_ALB_DT_0                    (0x1U << ERTC_ALB_DT_Pos)               /*!< 0x10000000 */
#define ERTC_ALB_DT_1                    (0x2U << ERTC_ALB_DT_Pos)               /*!< 0x20000000 */

#define ERTC_ALB_WKSEL_Pos               (30U)
#define ERTC_ALB_WKSEL_Msk               (0x1U << ERTC_ALB_WKSEL_Pos)            /*!< 0x40000000 */
#define ERTC_ALB_WKSEL                   ERTC_ALB_WKSEL_Msk                      /*!< Date/week day select */
#define ERTC_ALB_MASK4_Pos               (31U)
#define ERTC_ALB_MASK4_Msk               (0x1U << ERTC_ALB_MASK4_Pos)            /*!< 0x80000000 */
#define ERTC_ALB_MASK4                   ERTC_ALB_MASK4_Msk                      /*!< Date/week day mask */

/*******************  Bit definition for ERTC_WP register  ********************/
#define ERTC_WP_CMD_Pos                  (0U)
#define ERTC_WP_CMD_Msk                  (0xFFU << ERTC_WP_CMD_Pos)              /*!< 0x000000FF */
#define ERTC_WP_CMD                      ERTC_WP_CMD_Msk                         /*!< Command register */

/*******************  Bit definition for ERTC_SBS register  *******************/
#define ERTC_SBS_SBS_Pos                 (0U)
#define ERTC_SBS_SBS_Msk                 (0xFFFFU << ERTC_SBS_SBS_Pos)           /*!< 0x0000FFFF */
#define ERTC_SBS_SBS                     ERTC_SBS_SBS_Msk                        /*!< Sub-second value */

/******************  Bit definition for ERTC_TADJ register  *******************/
#define ERTC_TADJ_DECSBS_Pos             (0U)
#define ERTC_TADJ_DECSBS_Msk             (0x7FFFU << ERTC_TADJ_DECSBS_Pos)       /*!< 0x00007FFF */
#define ERTC_TADJ_DECSBS                 ERTC_TADJ_DECSBS_Msk                    /*!< Decrease sub-second value */
#define ERTC_TADJ_ADD1S_Pos              (31U)
#define ERTC_TADJ_ADD1S_Msk              (0x1U << ERTC_TADJ_ADD1S_Pos)           /*!< 0x80000000 */
#define ERTC_TADJ_ADD1S                  ERTC_TADJ_ADD1S_Msk                     /*!< Add 1 second */

/******************  Bit definition for ERTC_TSTM register  *******************/
/*!< SU configuration */
#define ERTC_TSTM_SU_Pos                 (0U)
#define ERTC_TSTM_SU_Msk                 (0xFU << ERTC_TSTM_SU_Pos)              /*!< 0x0000000F */
#define ERTC_TSTM_SU                     ERTC_TSTM_SU_Msk                        /*!< SU[3:0] (Second units) */
#define ERTC_TSTM_SU_0                   (0x1U << ERTC_TSTM_SU_Pos)              /*!< 0x00000001 */
#define ERTC_TSTM_SU_1                   (0x2U << ERTC_TSTM_SU_Pos)              /*!< 0x00000002 */
#define ERTC_TSTM_SU_2                   (0x4U << ERTC_TSTM_SU_Pos)              /*!< 0x00000004 */
#define ERTC_TSTM_SU_3                   (0x8U << ERTC_TSTM_SU_Pos)              /*!< 0x00000008 */

/*!< ST configuration */
#define ERTC_TSTM_ST_Pos                 (4U)
#define ERTC_TSTM_ST_Msk                 (0x7U << ERTC_TSTM_ST_Pos)              /*!< 0x00000070 */
#define ERTC_TSTM_ST                     ERTC_TSTM_ST_Msk                        /*!< ST[2:0] (Second tens) */
#define ERTC_TSTM_ST_0                   (0x1U << ERTC_TSTM_ST_Pos)              /*!< 0x00000010 */
#define ERTC_TSTM_ST_1                   (0x2U << ERTC_TSTM_ST_Pos)              /*!< 0x00000020 */
#define ERTC_TSTM_ST_2                   (0x4U << ERTC_TSTM_ST_Pos)              /*!< 0x00000040 */

/*!< MU configuration */
#define ERTC_TSTM_MU_Pos                 (8U)
#define ERTC_TSTM_MU_Msk                 (0xFU << ERTC_TSTM_MU_Pos)              /*!< 0x00000F00 */
#define ERTC_TSTM_MU                     ERTC_TSTM_MU_Msk                        /*!< MU[3:0] (Minute units) */
#define ERTC_TSTM_MU_0                   (0x1U << ERTC_TSTM_MU_Pos)              /*!< 0x00000100 */
#define ERTC_TSTM_MU_1                   (0x2U << ERTC_TSTM_MU_Pos)              /*!< 0x00000200 */
#define ERTC_TSTM_MU_2                   (0x4U << ERTC_TSTM_MU_Pos)              /*!< 0x00000400 */
#define ERTC_TSTM_MU_3                   (0x8U << ERTC_TSTM_MU_Pos)              /*!< 0x00000800 */

/*!< MT configuration */
#define ERTC_TSTM_MT_Pos                 (12U)
#define ERTC_TSTM_MT_Msk                 (0x7U << ERTC_TSTM_MT_Pos)              /*!< 0x00007000 */
#define ERTC_TSTM_MT                     ERTC_TSTM_MT_Msk                        /*!< MT[2:0] (Minute tens) */
#define ERTC_TSTM_MT_0                   (0x1U << ERTC_TSTM_MT_Pos)              /*!< 0x00001000 */
#define ERTC_TSTM_MT_1                   (0x2U << ERTC_TSTM_MT_Pos)              /*!< 0x00002000 */
#define ERTC_TSTM_MT_2                   (0x4U << ERTC_TSTM_MT_Pos)              /*!< 0x00004000 */

/*!< HU configuration */
#define ERTC_TSTM_HU_Pos                 (16U)
#define ERTC_TSTM_HU_Msk                 (0xFU << ERTC_TSTM_HU_Pos)              /*!< 0x000F0000 */
#define ERTC_TSTM_HU                     ERTC_TSTM_HU_Msk                        /*!< HU[3:0] (Hour units) */
#define ERTC_TSTM_HU_0                   (0x1U << ERTC_TSTM_HU_Pos)              /*!< 0x00010000 */
#define ERTC_TSTM_HU_1                   (0x2U << ERTC_TSTM_HU_Pos)              /*!< 0x00020000 */
#define ERTC_TSTM_HU_2                   (0x4U << ERTC_TSTM_HU_Pos)              /*!< 0x00040000 */
#define ERTC_TSTM_HU_3                   (0x8U << ERTC_TSTM_HU_Pos)              /*!< 0x00080000 */

/*!< HT configuration */
#define ERTC_TSTM_HT_Pos                 (20U)
#define ERTC_TSTM_HT_Msk                 (0x3U << ERTC_TSTM_HT_Pos)              /*!< 0x00300000 */
#define ERTC_TSTM_HT                     ERTC_TSTM_HT_Msk                        /*!< HT[1:0] (Hour tens) */
#define ERTC_TSTM_HT_0                   (0x1U << ERTC_TSTM_HT_Pos)              /*!< 0x00100000 */
#define ERTC_TSTM_HT_1                   (0x2U << ERTC_TSTM_HT_Pos)              /*!< 0x00200000 */

#define ERTC_TSTM_AMPM_Pos               (22U)
#define ERTC_TSTM_AMPM_Msk               (0x1U << ERTC_TSTM_AMPM_Pos)            /*!< 0x00400000 */
#define ERTC_TSTM_AMPM                   ERTC_TSTM_AMPM_Msk                      /*!< AM/PM */

/******************  Bit definition for ERTC_TSDT register  *******************/
/*!< DU configuration */
#define ERTC_TSDT_DU_Pos                 (0U)
#define ERTC_TSDT_DU_Msk                 (0xFU << ERTC_TSDT_DU_Pos)              /*!< 0x0000000F */
#define ERTC_TSDT_DU                     ERTC_TSDT_DU_Msk                        /*!< DU[3:0] (Date units) */
#define ERTC_TSDT_DU_0                   (0x1U << ERTC_TSDT_DU_Pos)              /*!< 0x00000001 */
#define ERTC_TSDT_DU_1                   (0x2U << ERTC_TSDT_DU_Pos)              /*!< 0x00000002 */
#define ERTC_TSDT_DU_2                   (0x4U << ERTC_TSDT_DU_Pos)              /*!< 0x00000004 */
#define ERTC_TSDT_DU_3                   (0x8U << ERTC_TSDT_DU_Pos)              /*!< 0x00000008 */

/*!< DT configuration */
#define ERTC_TSDT_DT_Pos                 (4U)
#define ERTC_TSDT_DT_Msk                 (0x3U << ERTC_TSDT_DT_Pos)              /*!< 0x00000030 */
#define ERTC_TSDT_DT                     ERTC_TSDT_DT_Msk                        /*!< DT[1:0] (Date tens) */
#define ERTC_TSDT_DT_0                   (0x1U << ERTC_TSDT_DT_Pos)              /*!< 0x00000010 */
#define ERTC_TSDT_DT_1                   (0x2U << ERTC_TSDT_DT_Pos)              /*!< 0x00000020 */

/*!< MU configuration */
#define ERTC_TSDT_MU_Pos                 (8U)
#define ERTC_TSDT_MU_Msk                 (0xFU << ERTC_TSDT_MU_Pos)              /*!< 0x00000F00 */
#define ERTC_TSDT_MU                     ERTC_TSDT_MU_Msk                        /*!< MU[3:0] (Month units) */
#define ERTC_TSDT_MU_0                   (0x1U << ERTC_TSDT_MU_Pos)              /*!< 0x00000100 */
#define ERTC_TSDT_MU_1                   (0x2U << ERTC_TSDT_MU_Pos)              /*!< 0x00000200 */
#define ERTC_TSDT_MU_2                   (0x4U << ERTC_TSDT_MU_Pos)              /*!< 0x00000400 */
#define ERTC_TSDT_MU_3                   (0x8U << ERTC_TSDT_MU_Pos)              /*!< 0x00000800 */

#define ERTC_TSDT_MT_Pos                 (12U)
#define ERTC_TSDT_MT_Msk                 (0x1U << ERTC_TSDT_MT_Pos)              /*!< 0x00001000 */
#define ERTC_TSDT_MT                     ERTC_TSDT_MT_Msk                        /*!< Month tens */

/*!< WK configuration */
#define ERTC_TSDT_WK_Pos                 (13U)
#define ERTC_TSDT_WK_Msk                 (0x7U << ERTC_TSDT_WK_Pos)              /*!< 0x0000E000 */
#define ERTC_TSDT_WK                     ERTC_TSDT_WK_Msk                        /*!< WK[2:0] (Week day) */
#define ERTC_TSDT_WK_0                   (0x1U << ERTC_TSDT_WK_Pos)              /*!< 0x00002000 */
#define ERTC_TSDT_WK_1                   (0x2U << ERTC_TSDT_WK_Pos)              /*!< 0x00004000 */
#define ERTC_TSDT_WK_2                   (0x4U << ERTC_TSDT_WK_Pos)              /*!< 0x00008000 */

/******************  Bit definition for ERTC_TSSBS register  ******************/
#define ERTC_TSSBS_SBS_Pos               (0U)
#define ERTC_TSSBS_SBS_Msk               (0xFFFFU << ERTC_TSSBS_SBS_Pos)         /*!< 0x0000FFFF */
#define ERTC_TSSBS_SBS                   ERTC_TSSBS_SBS_Msk                      /*!< Sub-second value */

/******************  Bit definition for ERTC_SCAL register  *******************/
#define ERTC_SCAL_DEC_Pos                (0U)
#define ERTC_SCAL_DEC_Msk                (0x1FFU << ERTC_SCAL_DEC_Pos)           /*!< 0x000001FF */
#define ERTC_SCAL_DEC                    ERTC_SCAL_DEC_Msk                       /*!< Decrease ERTC clock */
#define ERTC_SCAL_CAL16_Pos              (13U)
#define ERTC_SCAL_CAL16_Msk              (0x1U << ERTC_SCAL_CAL16_Pos)           /*!< 0x00002000 */
#define ERTC_SCAL_CAL16                  ERTC_SCAL_CAL16_Msk                     /*!< 16 second calibration period */
#define ERTC_SCAL_CAL8_Pos               (14U)
#define ERTC_SCAL_CAL8_Msk               (0x1U << ERTC_SCAL_CAL8_Pos)            /*!< 0x00004000 */
#define ERTC_SCAL_CAL8                   ERTC_SCAL_CAL8_Msk                      /*!< 8 second calibration period */
#define ERTC_SCAL_ADD_Pos                (15U)
#define ERTC_SCAL_ADD_Msk                (0x1U << ERTC_SCAL_ADD_Pos)             /*!< 0x00008000 */
#define ERTC_SCAL_ADD                    ERTC_SCAL_ADD_Msk                       /*!< Add ERTC clock */

/******************  Bit definition for ERTC_TAMP register  *******************/
#define ERTC_TAMP_TP1EN_Pos              (0U)
#define ERTC_TAMP_TP1EN_Msk              (0x1U << ERTC_TAMP_TP1EN_Pos)           /*!< 0x00000001 */
#define ERTC_TAMP_TP1EN                  ERTC_TAMP_TP1EN_Msk                     /*!< Tamper detection 1 enable */
#define ERTC_TAMP_TP1EDG_Pos             (1U)
#define ERTC_TAMP_TP1EDG_Msk             (0x1U << ERTC_TAMP_TP1EDG_Pos)          /*!< 0x00000002 */
#define ERTC_TAMP_TP1EDG                 ERTC_TAMP_TP1EDG_Msk                    /*!< Tamper detection 1 valid edge */
#define ERTC_TAMP_TPIEN_Pos              (2U)
#define ERTC_TAMP_TPIEN_Msk              (0x1U << ERTC_TAMP_TPIEN_Pos)           /*!< 0x00000004 */
#define ERTC_TAMP_TPIEN                  ERTC_TAMP_TPIEN_Msk                     /*!< Tamper detection interrupt enable */
#define ERTC_TAMP_TPTSEN_Pos             (7U)
#define ERTC_TAMP_TPTSEN_Msk             (0x1U << ERTC_TAMP_TPTSEN_Pos)          /*!< 0x00000080 */
#define ERTC_TAMP_TPTSEN                 ERTC_TAMP_TPTSEN_Msk                    /*!< Tamper detection timestamp enable */

/*!< TPFREQ configuration */
#define ERTC_TAMP_TPFREQ_Pos             (8U)
#define ERTC_TAMP_TPFREQ_Msk             (0x7U << ERTC_TAMP_TPFREQ_Pos)          /*!< 0x00000700 */
#define ERTC_TAMP_TPFREQ                 ERTC_TAMP_TPFREQ_Msk                    /*!< TPFREQ[2:0] (Tamper detection frequency) */
#define ERTC_TAMP_TPFREQ_0               (0x1U << ERTC_TAMP_TPFREQ_Pos)          /*!< 0x00000100 */
#define ERTC_TAMP_TPFREQ_1               (0x2U << ERTC_TAMP_TPFREQ_Pos)          /*!< 0x00000200 */
#define ERTC_TAMP_TPFREQ_2               (0x4U << ERTC_TAMP_TPFREQ_Pos)          /*!< 0x00000400 */

/*!< TPFLT configuration */
#define ERTC_TAMP_TPFLT_Pos              (11U)
#define ERTC_TAMP_TPFLT_Msk              (0x3U << ERTC_TAMP_TPFLT_Pos)           /*!< 0x00001800 */
#define ERTC_TAMP_TPFLT                  ERTC_TAMP_TPFLT_Msk                     /*!< TPFLT[1:0] (Tamper detection filter time) */
#define ERTC_TAMP_TPFLT_0                (0x1U << ERTC_TAMP_TPFLT_Pos)           /*!< 0x00000800 */
#define ERTC_TAMP_TPFLT_1                (0x2U << ERTC_TAMP_TPFLT_Pos)           /*!< 0x00001000 */

/*!< TPPR configuration */
#define ERTC_TAMP_TPPR_Pos               (13U)
#define ERTC_TAMP_TPPR_Msk               (0x3U << ERTC_TAMP_TPPR_Pos)            /*!< 0x00006000 */
#define ERTC_TAMP_TPPR                   ERTC_TAMP_TPPR_Msk                      /*!< TPPR[1:0] (Tamper detection pre-charge time) */
#define ERTC_TAMP_TPPR_0                 (0x1U << ERTC_TAMP_TPPR_Pos)            /*!< 0x00002000 */
#define ERTC_TAMP_TPPR_1                 (0x2U << ERTC_TAMP_TPPR_Pos)            /*!< 0x00004000 */

#define ERTC_TAMP_TPPU_Pos               (15U)
#define ERTC_TAMP_TPPU_Msk               (0x1U << ERTC_TAMP_TPPU_Pos)            /*!< 0x00008000 */
#define ERTC_TAMP_TPPU                   ERTC_TAMP_TPPU_Msk                      /*!< Tamper detection pull-up */
#define ERTC_TAMP_OUTTYPE_Pos            (18U)
#define ERTC_TAMP_OUTTYPE_Msk            (0x1U << ERTC_TAMP_OUTTYPE_Pos)         /*!< 0x00040000 */
#define ERTC_TAMP_OUTTYPE                ERTC_TAMP_OUTTYPE_Msk                   /*!< Output type */

/*****************  Bit definition for ERTC_ALASBS register  ******************/
#define ERTC_ALASBS_SBS_Pos              (0U)
#define ERTC_ALASBS_SBS_Msk              (0x7FFFU << ERTC_ALASBS_SBS_Pos)        /*!< 0x00007FFF */
#define ERTC_ALASBS_SBS                  ERTC_ALASBS_SBS_Msk                     /*!< Sub-second value */

/*!< SBSMSK configuration */
#define ERTC_ALASBS_SBSMSK_Pos           (24U)
#define ERTC_ALASBS_SBSMSK_Msk           (0xFU << ERTC_ALASBS_SBSMSK_Pos)        /*!< 0x0F000000 */
#define ERTC_ALASBS_SBSMSK               ERTC_ALASBS_SBSMSK_Msk                  /*!< SBSMSK[3:0] (Sub-second mask) */
#define ERTC_ALASBS_SBSMSK_0             (0x1U << ERTC_ALASBS_SBSMSK_Pos)        /*!< 0x01000000 */
#define ERTC_ALASBS_SBSMSK_1             (0x2U << ERTC_ALASBS_SBSMSK_Pos)        /*!< 0x02000000 */
#define ERTC_ALASBS_SBSMSK_2             (0x4U << ERTC_ALASBS_SBSMSK_Pos)        /*!< 0x04000000 */
#define ERTC_ALASBS_SBSMSK_3             (0x8U << ERTC_ALASBS_SBSMSK_Pos)        /*!< 0x08000000 */

/*****************  Bit definition for ERTC_ALBSBS register  ******************/
#define ERTC_ALBSBS_SBS_Pos              (0U)
#define ERTC_ALBSBS_SBS_Msk              (0x7FFFU << ERTC_ALBSBS_SBS_Pos)        /*!< 0x00007FFF */
#define ERTC_ALBSBS_SBS                  ERTC_ALBSBS_SBS_Msk                     /*!< Sub-second value */

/*!< SBSMSK configuration */
#define ERTC_ALBSBS_SBSMSK_Pos           (24U)
#define ERTC_ALBSBS_SBSMSK_Msk           (0xFU << ERTC_ALBSBS_SBSMSK_Pos)        /*!< 0x0F000000 */
#define ERTC_ALBSBS_SBSMSK               ERTC_ALBSBS_SBSMSK_Msk                  /*!< SBSMSK[3:0] (Sub-second mask) */
#define ERTC_ALBSBS_SBSMSK_0             (0x1U << ERTC_ALBSBS_SBSMSK_Pos)        /*!< 0x01000000 */
#define ERTC_ALBSBS_SBSMSK_1             (0x2U << ERTC_ALBSBS_SBSMSK_Pos)        /*!< 0x02000000 */
#define ERTC_ALBSBS_SBSMSK_2             (0x4U << ERTC_ALBSBS_SBSMSK_Pos)        /*!< 0x04000000 */
#define ERTC_ALBSBS_SBSMSK_3             (0x8U << ERTC_ALBSBS_SBSMSK_Pos)        /*!< 0x08000000 */

/******************  Bit definition for ERTC_BPR1 register  *******************/
#define ERTC_BPR1_DT_Pos                 (0U)
#define ERTC_BPR1_DT_Msk                 (0xFFFFFFFFU << ERTC_BPR1_DT_Pos)       /*!< 0xFFFFFFFF */
#define ERTC_BPR1_DT                     ERTC_BPR1_DT_Msk                        /*!< Battery powered domain data 1 */

/******************  Bit definition for ERTC_BPR2 register  *******************/
#define ERTC_BPR2_DT_Pos                 (0U)
#define ERTC_BPR2_DT_Msk                 (0xFFFFFFFFU << ERTC_BPR2_DT_Pos)       /*!< 0xFFFFFFFF */
#define ERTC_BPR2_DT                      ERTC_BPR2_DT_Msk                        /*!< Battery powered domain data 2 */

/******************  Bit definition for ERTC_BPR3 register  *******************/
#define ERTC_BPR3_DT_Pos                 (0U)
#define ERTC_BPR3_DT_Msk                 (0xFFFFFFFFU << ERTC_BPR3_DT_Pos)       /*!< 0xFFFFFFFF */
#define ERTC_BPR3_DT                     ERTC_BPR3_DT_Msk                        /*!< Battery powered domain data 3 */

/******************  Bit definition for ERTC_BPR4 register  *******************/
#define ERTC_BPR4_DT_Pos                 (0U)
#define ERTC_BPR4_DT_Msk                 (0xFFFFFFFFU << ERTC_BPR4_DT_Pos)       /*!< 0xFFFFFFFF */
#define ERTC_BPR4_DT                     ERTC_BPR4_DT_Msk                        /*!< Battery powered domain data 4 */

/******************  Bit definition for ERTC_BPR5 register  *******************/
#define ERTC_BPR5_DT_Pos                 (0U)
#define ERTC_BPR5_DT_Msk                 (0xFFFFFFFFU << ERTC_BPR5_DT_Pos)       /*!< 0xFFFFFFFF */
#define ERTC_BPR5_DT                     ERTC_BPR5_DT_Msk                        /*!< Battery powered domain data 5 */

/******************  Bit definition for ERTC_BPR6 register  *******************/
#define ERTC_BPR6_DT_Pos                 (0U)
#define ERTC_BPR6_DT_Msk                 (0xFFFFFFFFU << ERTC_BPR6_DT_Pos)       /*!< 0xFFFFFFFF */
#define ERTC_BPR6_DT                     ERTC_BPR6_DT_Msk                        /*!< Battery powered domain data 6 */

/******************  Bit definition for ERTC_BPR7 register  *******************/
#define ERTC_BPR7_DT_Pos                 (0U)
#define ERTC_BPR7_DT_Msk                 (0xFFFFFFFFU << ERTC_BPR7_DT_Pos)       /*!< 0xFFFFFFFF */
#define ERTC_BPR7_DT                     ERTC_BPR7_DT_Msk                        /*!< Battery powered domain data 7 */

/******************  Bit definition for ERTC_BPR8 register  *******************/
#define ERTC_BPR8_DT_Pos                 (0U)
#define ERTC_BPR8_DT_Msk                 (0xFFFFFFFFU << ERTC_BPR8_DT_Pos)       /*!< 0xFFFFFFFF */
#define ERTC_BPR8_DT                     ERTC_BPR8_DT_Msk                        /*!< Battery powered domain data 8 */

/******************  Bit definition for ERTC_BPR9 register  *******************/
#define ERTC_BPR9_DT_Pos                 (0U)
#define ERTC_BPR9_DT_Msk                 (0xFFFFFFFFU << ERTC_BPR9_DT_Pos)       /*!< 0xFFFFFFFF */
#define ERTC_BPR9_DT                     ERTC_BPR9_DT_Msk                        /*!< Battery powered domain data 9 */

/******************  Bit definition for ERTC_BPR10 register  ******************/
#define ERTC_BPR10_DT_Pos                (0U)
#define ERTC_BPR10_DT_Msk                (0xFFFFFFFFU << ERTC_BPR10_DT_Pos)      /*!< 0xFFFFFFFF */
#define ERTC_BPR10_DT                    ERTC_BPR10_DT_Msk                       /*!< Battery powered domain data 10 */

/******************  Bit definition for ERTC_BPR11 register  ******************/
#define ERTC_BPR11_DT_Pos                (0U)
#define ERTC_BPR11_DT_Msk                (0xFFFFFFFFU << ERTC_BPR11_DT_Pos)      /*!< 0xFFFFFFFF */
#define ERTC_BPR11_DT                    ERTC_BPR11_DT_Msk                       /*!< Battery powered domain data 11 */

/******************  Bit definition for ERTC_BPR12 register  ******************/
#define ERTC_BPR12_DT_Pos                (0U)
#define ERTC_BPR12_DT_Msk                (0xFFFFFFFFU << ERTC_BPR12_DT_Pos)      /*!< 0xFFFFFFFF */
#define ERTC_BPR12_DT                    ERTC_BPR12_DT_Msk                       /*!< Battery powered domain data 12 */

/******************  Bit definition for ERTC_BPR13 register  ******************/
#define ERTC_BPR13_DT_Pos                (0U)
#define ERTC_BPR13_DT_Msk                (0xFFFFFFFFU << ERTC_BPR13_DT_Pos)      /*!< 0xFFFFFFFF */
#define ERTC_BPR13_DT                    ERTC_BPR13_DT_Msk                       /*!< Battery powered domain data 13 */

/******************  Bit definition for ERTC_BPR14 register  ******************/
#define ERTC_BPR14_DT_Pos                (0U)
#define ERTC_BPR14_DT_Msk                (0xFFFFFFFFU << ERTC_BPR14_DT_Pos)      /*!< 0xFFFFFFFF */
#define ERTC_BPR14_DT                    ERTC_BPR14_DT_Msk                       /*!< Battery powered domain data 14 */

/******************  Bit definition for ERTC_BPR15 register  ******************/
#define ERTC_BPR15_DT_Pos                (0U)
#define ERTC_BPR15_DT_Msk                (0xFFFFFFFFU << ERTC_BPR15_DT_Pos)      /*!< 0xFFFFFFFF */
#define ERTC_BPR15_DT                    ERTC_BPR15_DT_Msk                       /*!< Battery powered domain data 15 */

/******************  Bit definition for ERTC_BPR16 register  ******************/
#define ERTC_BPR16_DT_Pos                (0U)
#define ERTC_BPR16_DT_Msk                (0xFFFFFFFFU << ERTC_BPR16_DT_Pos)      /*!< 0xFFFFFFFF */
#define ERTC_BPR16_DT                    ERTC_BPR16_DT_Msk                       /*!< Battery powered domain data 16 */

/******************  Bit definition for ERTC_BPR17 register  ******************/
#define ERTC_BPR17_DT_Pos                (0U)
#define ERTC_BPR17_DT_Msk                (0xFFFFFFFFU << ERTC_BPR17_DT_Pos)      /*!< 0xFFFFFFFF */
#define ERTC_BPR17_DT                    ERTC_BPR17_DT_Msk                       /*!< Battery powered domain data 17 */

/******************  Bit definition for ERTC_BPR18 register  ******************/
#define ERTC_BPR18_DT_Pos                (0U)
#define ERTC_BPR18_DT_Msk                (0xFFFFFFFFU << ERTC_BPR18_DT_Pos)      /*!< 0xFFFFFFFF */
#define ERTC_BPR18_DT                    ERTC_BPR18_DT_Msk                       /*!< Battery powered domain data 18 */

/******************  Bit definition for ERTC_BPR19 register  ******************/
#define ERTC_BPR19_DT_Pos                (0U)
#define ERTC_BPR19_DT_Msk                (0xFFFFFFFFU << ERTC_BPR19_DT_Pos)      /*!< 0xFFFFFFFF */
#define ERTC_BPR19_DT                    ERTC_BPR19_DT_Msk                       /*!< Battery powered domain data 19 */

/******************  Bit definition for ERTC_BPR20 register  ******************/
#define ERTC_BPR20_DT_Pos                (0U)
#define ERTC_BPR20_DT_Msk                (0xFFFFFFFFU << ERTC_BPR20_DT_Pos)      /*!< 0xFFFFFFFF */
#define ERTC_BPR20_DT                    ERTC_BPR20_DT_Msk                       /*!< Battery powered domain data 20 */

/************************* Number of backup registers *************************/
#define ERTC_BPR_NUMBER                  0x000000014U


/******************  Bit definition for PWC_CTRL register  *****************/
#define PWC_CTRL_PVMEN                   (0x1U << 4)
#define PWC_CTRL_BPWEN                   (0x1U << 8)

/******************  Bit definition for FLASH_STS register  ****************/
#define FLASH_STS_OBF                    (0x1U << 0)
#define FLASH_STS_PRGMERR                (0x1U << 2)
#define FLASH_STS_EPPERR                 (0x1U << 4)
#define FLASH_STS_ODF                    (0x1U << 5)

/******************  Bit definition for FLASH_CTRL register  ***************/
#define FLASH_CTRL_FPRGM                 (0x1U << 0)
#define FLASH_CTRL_SECERS                (0x1U << 1)
#define FLASH_CTRL_BANKERS               (0x1U << 2)
#define FLASH_CTRL_USDPRGM               (0x1U << 4)
#define FLASH_CTRL_USDERS                (0x1U << 5)
#define FLASH_CTRL_ERSTR                 (0x1U << 6)
#define FLASH_CTRL_OPLK                  (0x1U << 7)

/******************  Bit definition for TMR_IDEN register  ****************/
#define TMR_IDEN_OVFIEN                  (0x1U << 0)
#define TMR_IDEN_C1IEN                   (0x1U << 1)
#define TMR_IDEN_C2IEN                   (0x1U << 2)
#define TMR_IDEN_C3IEN                   (0x1U << 3)
#define TMR_IDEN_C4IEN                   (0x1U << 4)
#define TMR_IDEN_HALLIEN                 (0x1U << 5)
#define TMR_IDEN_TIEN                    (0x1U << 6)
#define TMR_IDEN_BRKIEN                  (0x1U << 7)
#define TMR_IDEN_OVFDEN                  (0x1U << 8)
#define TMR_IDEN_C1DEN                   (0x1U << 9)
#define TMR_IDEN_C2DEN                   (0x1U << 10)
#define TMR_IDEN_C3DEN                   (0x1U << 11)
#define TMR_IDEN_C4DEN                   (0x1U << 12)
#define TMR_IDEN_HALLDEN                 (0x1U << 13)
#define TMR_IDEN_TDEN                    (0x1U << 14)

/******************  Bit definition for DMA_CxCTRL register  **************/
#define DMA_CTRL_CHEN                    (0x1U << 0)
#define DMA_CTRL_FDTIEN                  (0x1U << 1)
#define DMA_CTRL_HDTIEN                  (0x1U << 2)
#define DMA_CTRL_DTERRIEN                (0x1U << 3)
#define DMA_CTRL_DTD                     (0x1U << 4)
#define DMA_CTRL_LM                      (0x1U << 5)
#define DMA_CTRL_PINCM                   (0x1U << 6)
#define DMA_CTRL_MINCM                   (0x1U << 7)
#define DMA_CTRL_PWIDTH                  (0x3U << 8)
#define DMA_CTRL_PWIDTH_8BITS            (0x0U << 8)
#define DMA_CTRL_PWIDTH_16BITS           (0x1U << 8)
#define DMA_CTRL_PWIDTH_32BITS           (0x2U << 8)
#define DMA_CTRL_MWIDTH                  (0x3U << 10)
#define DMA_CTRL_MWIDTH_8BITS            (0x0U << 10)
#define DMA_CTRL_MWIDTH_16BITS           (0x1U << 10)
#define DMA_CTRL_MWIDTH_32BITS           (0x2U << 10)
#define DMA_CTRL_CHPL                    (0x3U << 12)
#define DMA_CTRL_CHPL_LOW                (0x0U << 12)
#define DMA_CTRL_CHPL_MID                (0x1U << 12)
#define DMA_CTRL_CHPL_HIGH               (0x2U << 12)
#define DMA_CTRL_CHPL_HIGHEST            (0x3U << 12)
#define DMA_CTRL_M2M                     (0x1U << 14)

/******************  Bit definition for DMA_MUXSEL register  *************/
#define DMA_MUXSEL_TBL_SEL               (0x1U << 0)

/******************  Bit definition for DMA_MUXCxCTRL register  *************/
#define DMA_MUXCTRL_SYNCOVIEN            (0x1U << 8)
#define DMA_MUXCTRL_EVTGEN               (0x1U << 9)
#define DMA_MUXCTRL_SYNCEN               (0x1U << 16)
#define DMA_MUXCTRL_SYNCPOL              (0x3U << 17)
#define DMA_MUXCTRL_SYNCPOL_NONE         (0x0U << 17)
#define DMA_MUXCTRL_SYNCPOL_RISING       (0x1U << 17)
#define DMA_MUXCTRL_SYNCPOL_FALLING      (0x2U << 17)
#define DMA_MUXCTRL_SYNCPOL_BOTH         (0x3U << 17)

/******************  Bit definition for DMA_MUXGxCTRL register  *************/
#define DMA_MUXGCTRL_TRGOVIEN            (0x1U << 8)
#define DMA_MUXGCTRL_GEN                 (0x1U << 16)
#define DMA_MUXGCTRL_GPOL                (0x3U << 17)
#define DMA_MUXGCTRL_GPOL_NONE           (0x0U << 17)
#define DMA_MUXGCTRL_GPOL_RISING         (0x1U << 17)
#define DMA_MUXGCTRL_GPOL_FALLING        (0x2U << 17)
#define DMA_MUXGCTRL_GPOL_BOTH           (0x3U << 17)

/******************  Bit definition for EDMA_SxCTRL register  **************/
#define EDMA_SCTRL_SEN                     (0x1U << 0)
#define EDMA_SCTRL_DMERRIEN                (0x1U << 1)
#define EDMA_SCTRL_DTERRIEN                (0x1U << 2)
#define EDMA_SCTRL_HDTIEN                  (0x1U << 3)
#define EDMA_SCTRL_FDTIEN                  (0x1U << 4)
#define EDMA_SCTRL_PFCTRL                  (0x1U << 5)
#define EDMA_SCTRL_DTD                     (0x3U << 6)
#define EDMA_SCTRL_DTD_P2M                 (0x0U << 6)
#define EDMA_SCTRL_DTD_M2P                 (0x1U << 6)
#define EDMA_SCTRL_DTD_M2M                 (0x2U << 6)
#define EDMA_SCTRL_LM                      (0x1U << 8)
#define EDMA_SCTRL_PINCM                   (0x1U << 9)
#define EDMA_SCTRL_MINCM                   (0x1U << 10)
#define EDMA_SCTRL_PWIDTH                  (0x3U << 11)
#define EDMA_SCTRL_PWIDTH_8BITS            (0x0U << 11)
#define EDMA_SCTRL_PWIDTH_16BITS           (0x1U << 11)
#define EDMA_SCTRL_PWIDTH_32BITS           (0x2U << 11)
#define EDMA_SCTRL_MWIDTH                  (0x3U << 13)
#define EDMA_SCTRL_MWIDTH_8BITS            (0x0U << 13)
#define EDMA_SCTRL_MWIDTH_16BITS           (0x1U << 13)
#define EDMA_SCTRL_MWIDTH_32BITS           (0x2U << 13)
#define EDMA_SCTRL_PINCOS                  (0x1U << 15)
#define EDMA_SCTRL_SPL                     (0x3U << 16)
#define EDMA_SCTRL_SPL_LOW                 (0x0U << 16)
#define EDMA_SCTRL_SPL_MID                 (0x1U << 16)
#define EDMA_SCTRL_SPL_HIGH                (0x2U << 16)
#define EDMA_SCTRL_SPL_HIGHEST             (0x3U << 16)
#define EDMA_SCTRL_DMM                     (0x1U << 18)
#define EDMA_SCTRL_CM                      (0x1U << 19)
#define EDMA_SCTRL_PBURST                  (0x3U << 21)
#define EDMA_SCTRL_PBURST_SINGLE           (0x0U << 21)
#define EDMA_SCTRL_PBURST_INCR4            (0x1U << 21)
#define EDMA_SCTRL_PBURST_INCR8            (0x2U << 21)
#define EDMA_SCTRL_PBURST_INCR16           (0x3U << 21)
#define EDMA_SCTRL_MBURST                  (0x3U << 23)
#define EDMA_SCTRL_MBURST_SINGLE           (0x0U << 23)
#define EDMA_SCTRL_MBURST_INCR4            (0x1U << 23)
#define EDMA_SCTRL_MBURST_INCR8            (0x2U << 23)
#define EDMA_SCTRL_MBURST_INCR16           (0x3U << 23)
#define EDMA_SCTRL_CHSEL                   (0x7U << 25)

/******************  Bit definition for EDMA_MUXSEL register  *************/
#define EDMA_MUXSEL_TBL_SEL               (0x1U << 0)

/******************  Bit definition for ADC_STS register  ***************/
#define ADC_STS_VMOR                     (0x1U << 0)
#define ADC_STS_OCCE                     (0x1U << 1)
#define ADC_STS_PCCE                     (0x1U << 2)
#define ADC_STS_PCCS                     (0x1U << 3)
#define ADC_STS_OCCS                     (0x1U << 4)
#define ADC_STS_OCCO                     (0x1U << 5)
#define ADC_STS_RDY                      (0x1U << 6)

/******************  Bit definition for ADC_CTRL1 register  ***************/
#define ADC_CTRL1_OCCEIEN                (0x1U << 5)
#define ADC_CTRL1_VMORIEN                (0x1U << 6)
#define ADC_CTRL1_PCCEIEN                (0x1U << 7)   
#define ADC_CTRL1_SQEN                   (0x1U << 8)
#define ADC_CTRL1_VMSGEN                 (0x1U << 9)
#define ADC_CTRL1_PCAUTOEN               (0x1U << 10)
#define ADC_CTRL1_OCPEN                  (0x1U << 11)
#define ADC_CTRL1_PCPEN                  (0x1U << 12)
#define ADC_CTRL1_PCVMEN                 (0x1U << 22)
#define ADC_CTRL1_OCVMEN                 (0x1U << 23)
#define ADC_CTRL1_OCCOIE                 (0x1U << 26)

/******************  Bit definition for ADC_CTRL2 register  ***************/
#define ADC_CTRL2_ADCEN                  (0x1U << 0)
#define ADC_CTRL2_RPEN                   (0x1U << 1)
#define ADC_CTRL2_ADCAL                  (0x1U << 2)
#define ADC_CTRL2_ADCALINIT              (0x1U << 3)
#define ADC_CTRL2_ADCABRT                (0x1U << 4)
#define ADC_CTRL2_OCDMAEN                (0x1U << 8)
#define ADC_CTRL2_OCDRCEN                (0x1U << 9)
#define ADC_CTRL2_EOCSFEN                (0x1U << 10)
#define ADC_CTRL2_DTALIGN                (0x1U << 11)
#define ADC_CTRL2_DTALIGN_R              (0x0U << 11)
#define ADC_CTRL2_DTALIGN_L              (0x1U << 11)
#define ADC_CTRL2_PCETE                  (0x3U << 20)
#define ADC_CTRL2_PCSWTRG                (0x1U << 22)
#define ADC_CTRL2_OCETE                  (0x3U << 28)
#define ADC_CTRL2_OCSWTRG                (0x1U << 30)

/******************  Bit definition for ADC_VMHB register  ***************/
#define ADC_VMHB_HB                      (0xFFFFU << 0)

/******************  Bit definition for ADC_VMLB register  ***************/
#define ADC_VMLB_LB                      (0x0000U << 0)

/******************  Bit definition for ADC_CSTS register  ***************/
#define ADC_CSTS_VMOR1                   (0x1U << 0)
#define ADC_CSTS_OCCE1                   (0x1U << 1)
#define ADC_CSTS_PCCE1                   (0x1U << 2)
#define ADC_CSTS_PCCS1                   (0x1U << 3)
#define ADC_CSTS_OCCS1                   (0x1U << 4)
#define ADC_CSTS_OCCO1                   (0x1U << 5)
#define ADC_CSTS_RDY1                    (0x1U << 6)
#define ADC_CSTS_VMOR2                   (0x1U << 8)
#define ADC_CSTS_OCCE2                   (0x1U << 9)
#define ADC_CSTS_PCCE2                   (0x1U << 10)
#define ADC_CSTS_PCCS2                   (0x1U << 11)
#define ADC_CSTS_OCCS2                   (0x1U << 12)
#define ADC_CSTS_OCCO2                   (0x1U << 13)
#define ADC_CSTS_RDY2                    (0x1U << 14)
#define ADC_CSTS_VMOR3                   (0x1U << 16)
#define ADC_CSTS_OCCE3                   (0x1U << 17)
#define ADC_CSTS_PCCE3                   (0x1U << 18)
#define ADC_CSTS_PCCS3                   (0x1U << 19)
#define ADC_CSTS_OCCS3                   (0x1U << 20)
#define ADC_CSTS_OCCO3                   (0x1U << 21)
#define ADC_CSTS_RDY3                    (0x1U << 22)

/******************  Bit definition for ADC_CCTRL register  ***************/
#define ADC_CCTRL_MSSEL                  (0x3FU << 0)
#define ADC_CCTRL_MSDRCEN                (0x1U << 13)
#define ADC_CCTRL_VBATEN                 (0x1U << 22)
#define ADC_CCTRL_ITSRVEN                (0x1U << 23)

/******************  Bit definition for I2C_CTRL1 register  ***************/
#define I2C_CTRL1_I2CEN                  (0x1U << 0)
#define I2C_CTRL1_TDIEN                  (0x1U << 1)
#define I2C_CTRL1_RDIEN                  (0x1U << 2)
#define I2C_CTRL1_ADDRIEN                (0x1U << 3)
#define I2C_CTRL1_ACKFAILIEN             (0x1U << 4)
#define I2C_CTRL1_STOPIEN                (0x1U << 5)
#define I2C_CTRL1_TDCIEN                 (0x1U << 6)
#define I2C_CTRL1_ERRIEN                 (0x1U << 7)
#define I2C_CTRL1_ANGNFOFF               (0x1U << 12)
#define I2C_CTRL1_DMATEN                 (0x1U << 14)
#define I2C_CTRL1_DMAREN                 (0x1U << 15)
#define I2C_CTRL1_SCTRL                  (0x1U << 16)
#define I2C_CTRL1_STRETCH                (0x1U << 17)
#define I2C_CTRL1_WAKEUPEN               (0x1U << 18)
#define I2C_CTRL1_GCAEN                  (0x1U << 19)
#define I2C_CTRL1_HADDREN                (0x1U << 20)
#define I2C_CTRL1_DEVADDREN              (0x1U << 21)
#define I2C_CTRL1_SMBALERT               (0x1U << 22)
#define I2C_CTRL1_PECEN                  (0x1U << 23)

/******************  Bit definition for I2C_CTRL2 register  ***************/
#define I2C_CTRL2_DIR                    (0x1U << 10)
#define I2C_CTRL2_ADDR10                 (0x1U << 11)
#define I2C_CTRL2_READH10                (0x1U << 12)
#define I2C_CTRL2_GENSTART               (0x1U << 13)
#define I2C_CTRL2_GENSTOP                (0x1U << 14)
#define I2C_CTRL2_NACKEN                 (0x1U << 15)
#define I2C_CTRL2_RLDEN                  (0x1U << 24)
#define I2C_CTRL2_ASTOPEN                (0x1U << 25)
#define I2C_CTRL2_PECTEN                 (0x1U << 26)
#define I2C_CTRL2_CNT_MASK               (0xFF << 16)

/******************  Bit definition for I2C_TIMEOUT register  ***************/
#define I2C_TIMEOUT_TOMODE               (0x1U << 12)
#define I2C_TIMEOUT_TOMODE_LOW           (0x0U << 12)
#define I2C_TIMEOUT_TOMODE_HIGH          (0x1U << 12)
#define I2C_TIMEOUT_TOEN                 (0x1U << 15)
#define I2C_TIMEOUT_EXTEN                (0x1U << 31)

/******************  Bit definition for I2C_STS register  ***************/
#define I2C_STS_TDBE                     (0x1U << 0)
#define I2C_STS_TDIS                     (0x1U << 1)
#define I2C_STS_RDBF                     (0x1U << 2)
#define I2C_STS_ADDRF                    (0x1U << 3)
#define I2C_STS_ACKFAILF                 (0x1U << 4)
#define I2C_STS_STOPF                    (0x1U << 5)
#define I2C_STS_TDC                      (0x1U << 6)
#define I2C_STS_TCRLD                    (0x1U << 7)
#define I2C_STS_BUSERR                   (0x1U << 8)
#define I2C_STS_ARLOST                   (0x1U << 9)
#define I2C_STS_OUF                      (0x1U << 10)
#define I2C_STS_PECERR                   (0x1U << 11)
#define I2C_STS_TMOUT                    (0x1U << 12)
#define I2C_STS_ALERTF                   (0x1U << 13)
#define I2C_STS_BUSYF                    (0x1U << 15)
#define I2C_STS_SDIR                     (0x1U << 16)

/*******************  Bit definition for USART_STS register  **************/
#define USART_STS_PERR                   (0x1U << 0)                   
#define USART_STS_FERR                   (0x1U << 1)                   
#define USART_STS_NERR                   (0x1U << 2)                   
#define USART_STS_ROERR                  (0x1U << 3)                   
#define USART_STS_IDLEF                  (0x1U << 4)                  
#define USART_STS_RDBF                   (0x1U << 5)
#define USART_STS_TDC                    (0x1U << 6)
#define USART_STS_TDBE                   (0x1U << 7)
#define USART_STS_BFF                    (0x1U << 8)
#define USART_STS_CTSCF                  (0x1U << 9)

/*******************  Bit definition for USART_DT register  ***************/
#define USART_DT_DT                      (0x1FFU << 0)

/******************  Bit definition for USART_CTRL1 register  *************/
#define USART_CTRL1_SBF                  (0x1U << 0)
#define USART_CTRL1_RM                   (0x1U << 1)
#define USART_CTRL1_REN                  (0x1U << 2)
#define USART_CTRL1_TEN                  (0x1U << 3)
#define USART_CTRL1_IDLEIEN              (0x1U << 4)
#define USART_CTRL1_RDBFIEN              (0x1U << 5)
#define USART_CTRL1_TDCIEN               (0x1U << 6)
#define USART_CTRL1_TDBEIEN              (0x1U << 7)
#define USART_CTRL1_PERRIEN              (0x1U << 8)
#define USART_CTRL1_PSEL                 (0x1U << 9)
#define USART_CTRL1_PEN                  (0x1U << 10)
#define USART_CTRL1_WUM                  (0x1U << 11)
#define USART_CTRL1_DBN0                 (0x1U << 12)
#define USART_CTRL1_UEN                  (0x1U << 13)
#define USART_CTRL1_DBN1                 (0x1U << 28)
#define USART_CTRL1_DBN_7BITS            (0x1U << 28)
#define USART_CTRL1_DBN_8BITS            (0x0U << 28)
#define USART_CTRL1_DBN_9BITS            (0x1U << 12)
#define USART_CTRL1_DBN                  (0x1U << 12)

/******************  Bit definition for USART_CTRL2 register  *************/
#define USART_CTRL2_IDL                  (0xFU << 0)
#define USART_CTRL2_IDBN                 (0x1U << 4)
#define USART_CTRL2_BFBN                 (0x1U << 5)
#define USART_CTRL2_BFIEN                (0x1U << 6)
#define USART_CTRL2_LBCP                 (0x1U << 8)
#define USART_CTRL2_CLKPHA               (0x1U << 9)
#define USART_CTRL2_CLKPOL               (0x1U << 10)
#define USART_CTRL2_CLKEN                (0x1U << 11)
#define USART_CTRL2_STOPBN               (0x3U << 12)
#define USART_CTRL2_STOP_0               (0x1U << 12)           
#define USART_CTRL2_STOP_1               (0x1U << 13)  
#define USART_CTRL2_STOPBN_1_BITS        (0x0U << 12)
#define USART_CTRL2_STOPBN_0P5_BITS      (0x1U << 12)
#define USART_CTRL2_STOPBN_2_BITS        (0x2U << 12)
#define USART_CTRL2_STOPBN_1P5_BITS      (0x3U << 12)
#define USART_CTRL2_LINEN                (0x1U << 14)
#define USART_CTRL2_TRPSWAP              (0x1U << 15)
#define USART_CTRL2_RXREV                (0x1U << 16)
#define USART_CTRL2_TXREV                (0x1U << 17)
#define USART_CTRL2_DTREV                (0x1U << 18)
#define USART_CTRL2_MTF                  (0x1U << 19)
#define USART_CTRL2_IDH                  (0xFU << 28)

/******************  Bit definition for USART_CTRL3 register  *************/
#define USART_CTRL3_ERRIEN               (0x1U << 0)
#define USART_CTRL3_IRDAEN               (0x1U << 1)
#define USART_CTRL3_IRDALP               (0x1U << 2)
#define USART_CTRL3_SLBEN                (0x1U << 3)
#define USART_CTRL3_SCNACKEN             (0x1U << 4)
#define USART_CTRL3_SCMEN                (0x1U << 5)
#define USART_CTRL3_DMAREN               (0x1U << 6)
#define USART_CTRL3_DMATEN               (0x1U << 7)
#define USART_CTRL3_RTSEN                (0x1U << 8)
#define USART_CTRL3_CTSEN                (0x1U << 9)
#define USART_CTRL3_CTSCFIEN             (0x1U << 10)
#define USART_CTRL3_RS485EN              (0x1U << 14)
#define USART_CTRL3_DEP                  (0x1U << 15)

/*******************  Bit definition for SPI_CTRL1 register  **************/
#define SPI_CTRL1_CLKPHA                 (0x1U << 0)
#define SPI_CTRL1_CLKPOL                 (0x1U << 1)
#define SPI_CTRL1_MSTEN                  (0x1U << 2)
#define SPI_CTRL1_MDIV                   (0x7U << 3)
#define SPI_CTRL1_MDIV_2                 (0x0U << 3)
#define SPI_CTRL1_MDIV_4                 (0x1U << 3)
#define SPI_CTRL1_MDIV_8                 (0x2U << 3)
#define SPI_CTRL1_MDIV_16                (0x3U << 3)
#define SPI_CTRL1_MDIV_32                (0x4U << 3)
#define SPI_CTRL1_MDIV_64                (0x5U << 3)
#define SPI_CTRL1_MDIV_128               (0x6U << 3)
#define SPI_CTRL1_MDIV_256               (0x7U << 3)
#define SPI_CTRL1_MDIV_512               (0x0U << 3)
#define SPI_CTRL1_MDIV_1024              (0x1U << 3)
#define SPI_CTRL1_SPIEN                  (0x1U << 6)
#define SPI_CTRL1_LTF                    (0x1U << 7)
#define SPI_CTRL1_SWCSIL                 (0x1U << 8)
#define SPI_CTRL1_SWCSEN                 (0x1U << 9)
#define SPI_CTRL1_ORA                    (0x1U << 10)
#define SPI_CTRL1_FBN                    (0x1U << 11)
#define SPI_CTRL1_NTC                    (0x1U << 12)
#define SPI_CTRL1_CCEN                   (0x1U << 13)
#define SPI_CTRL1_SLBTD                  (0x1U << 14)
#define SPI_CTRL1_SLBEN                  (0x1U << 15)

/*******************  Bit definition for SPI_CTRL2 register  **************/
#define SPI_CTRL2_DMAREN                 (0x1U << 0)
#define SPI_CTRL2_DMATEN                 (0x1U << 1)
#define SPI_CTRL2_HWCSOE                 (0x1U << 2)
#define SPI_CTRL2_TIEN                   (0x1U << 4)
#define SPI_CTRL2_ERRIE                  (0x1U << 5)
#define SPI_CTRL2_RDBFIE                 (0x1U << 6)
#define SPI_CTRL2_TDBEIE                 (0x1U << 7)
#define SPI_CTRL2_MDIV                   (0x1U << 8)
#define SPI_CTRL2_MDIV_512_1024          (0x1U << 8)
#define SPI_CTRL2_MDIV3EN                (0x1U << 9)

/*******************  Bit definition for SPI_STS register  ********************/
#define SPI_STS_RDBF                     (0x1U << 0)
#define SPI_STS_TDBE                     (0x1U << 1)
#define SPI_STS_ACS                      (0x1U << 2)
#define SPI_STS_TUERR                    (0x1U << 3)
#define SPI_STS_CCERR                    (0x1U << 4)
#define SPI_STS_MMERR                    (0x1U << 5)
#define SPI_STS_ROERR                    (0x1U << 6)
#define SPI_STS_BF                       (0x1U << 7)
#define SPI_STS_CSPAS                    (0x1U << 8)

/*******************  Bit definition for SPI_I2SCTRL register  *****************/
#define SPI_I2SCTRL_I2SCBN               (0x1U << 0)
#define SPI_I2SCTRL_I2SDBN               (0x3U << 1)
#define SPI_I2SCTRL_I2SDBN_16BITS        (0x0U << 1)
#define SPI_I2SCTRL_I2SDBN_24BITS        (0x1U << 1)
#define SPI_I2SCTRL_I2SDBN_32BITS        (0x2U << 1)
#define SPI_I2SCTRL_I2SDBN_NONE          (0x3U << 1)
#define SPI_I2SCTRL_I2SCLKPOL            (0x1U << 3)
#define SPI_I2SCTRL_STDSEL               (0x3U << 4)
#define SPI_I2SCTRL_STDSEL_PHILIPS       (0x0U << 4)
#define SPI_I2SCTRL_STDSEL_MSB           (0x1U << 4)
#define SPI_I2SCTRL_STDSEL_LSB           (0x2U << 4)
#define SPI_I2SCTRL_STDSEL_PCM           (0x3U << 4)
#define SPI_I2SCTRL_PCMFSSEL             (0x1U << 7)
#define SPI_I2SCTRL_OPERSEL              (0x3U << 8)
#define SPI_I2SCTRL_OPERSEL_ST           (0x0U << 8)
#define SPI_I2SCTRL_OPERSEL_SR           (0x1U << 8)
#define SPI_I2SCTRL_OPERSEL_HT           (0x2U << 8)
#define SPI_I2SCTRL_OPERSEL_HR           (0x3U << 8)
#define SPI_I2SCTRL_I2SEN                (0x1U << 10)
#define SPI_I2SCTRL_I2SMSEL              (0x1U << 11)

/*******************  Bit definition for SPI_I2SCLKP register  ************/
#define SPI_I2SCLKP_I2SDIV_1             (0xFFU << 0)
#define SPI_I2SCLKP_I2SODD               (0x1U << 8)
#define SPI_I2SCLKP_I2SMCLKOE            (0x1U << 9)
#define SPI_I2SCLKP_I2SDIV_2             (0x3U << 10)

/******************  Bit definition for DEBUG_APB1_PAUSE register  **************/
#define DEBUG_APB1_PAUSE_TMR2_PAUSE         (0x1U << 0)
#define DEBUG_APB1_PAUSE_TMR3_PAUSE         (0x1U << 1)
#define DEBUG_APB1_PAUSE_TMR4_PAUSE         (0x1U << 2)
#define DEBUG_APB1_PAUSE_TMR5_PAUSE         (0x1U << 3)
#define DEBUG_APB1_PAUSE_TMR6_PAUSE         (0x1U << 4)
#define DEBUG_APB1_PAUSE_TMR7_PAUSE         (0x1U << 5)
#define DEBUG_APB1_PAUSE_TMR12_PAUSE        (0x1U << 6)
#define DEBUG_APB1_PAUSE_TMR13_PAUSE        (0x1U << 7)
#define DEBUG_APB1_PAUSE_TMR14_PAUSE        (0x1U << 8)
#define DEBUG_APB1_PAUSE_ERTC_PAUSE         (0x1U << 10)
#define DEBUG_APB1_PAUSE_WWDT_PAUSE         (0x1U << 11)
#define DEBUG_APB1_PAUSE_WDT_PAUSE          (0x1U << 12)
#define DEBUG_APB1_PAUSE_ERTC_512_PAUSE     (0x1U << 15)
#define DEBUG_APB1_PAUSE_I2C1_SMBUS_TIMEOUT (0x1U << 24)
#define DEBUG_APB1_PAUSE_CAN1_PAUSE         (0x1U << 25)
#define DEBUG_APB1_PAUSE_CAN2_PAUSE         (0x1U << 26)
#define DEBUG_APB1_PAUSE_I2C2_SMBUS_TIMEOUT (0x1U << 27)
#define DEBUG_APB1_PAUSE_I2C3_SMBUS_TIMEOUT (0x1U << 28)

/******************  Bit definition for DEBUG_APB2_PAUSE register  **************/
#define DEBUG_APB2_PAUSE_TMR1_PAUSE      (0x1U << 0)
#define DEBUG_APB2_PAUSE_TMR8_PAUSE      (0x1U << 1)
#define DEBUG_APB2_PAUSE_TMR20_PAUSE     (0x1U << 6)
#define DEBUG_APB2_PAUSE_TMR9_PAUSE      (0x1U << 16)
#define DEBUG_APB2_PAUSE_TMR10_PAUSE     (0x1U << 17)
#define DEBUG_APB2_PAUSE_TMR11_PAUSE     (0x1U << 18)


/*****************  Bit definition for SDIO_PWRCTRL register  *****************/
/*!< PS congiguration */
#define SDIO_PWRCTRL_PS_Pos                 (0U)
#define SDIO_PWRCTRL_PS_Msk                 (0x3U << SDIO_PWRCTRL_PS_Pos)           /*!< 0x00000003 */
#define SDIO_PWRCTRL_PS                     SDIO_PWRCTRL_PS_Msk                     /*!< PS[1:0] bits (Power switch) */
#define SDIO_PWRCTRL_PS_0                   (0x1U << SDIO_PWRCTRL_PS_Pos)           /*!< 0x00000001 */
#define SDIO_PWRCTRL_PS_1                   (0x2U << SDIO_PWRCTRL_PS_Pos)           /*!< 0x00000002 */

/*****************  Bit definition for SDIO_CLKCTRL register  *****************/
#define SDIO_CLKCTRL_CLKDIV_Msk             ((0xFFU << 0) | (0x3U << 15))           /*!< 0x000180FF */
#define SDIO_CLKCTRL_CLKDIV                 SDIO_CLKCTRL_CLKDIV_Msk                 /*!< CLKDIV[9:0] bits (Clock division) */
#define SDIO_CLKCTRL_CLKOEN_Pos             (8U)
#define SDIO_CLKCTRL_CLKOEN_Msk             (0x1U << SDIO_CLKCTRL_CLKOEN_Pos)       /*!< 0x00000100 */
#define SDIO_CLKCTRL_CLKOEN                 SDIO_CLKCTRL_CLKOEN_Msk                 /*!< Clock output enable */
#define SDIO_CLKCTRL_PWRSVEN_Pos            (9U)
#define SDIO_CLKCTRL_PWRSVEN_Msk            (0x1U << SDIO_CLKCTRL_PWRSVEN_Pos)      /*!< 0x00000200 */
#define SDIO_CLKCTRL_PWRSVEN                SDIO_CLKCTRL_PWRSVEN_Msk                /*!< Power saving mode enable */
#define SDIO_CLKCTRL_BYPSEN_Pos             (10U)
#define SDIO_CLKCTRL_BYPSEN_Msk             (0x1U << SDIO_CLKCTRL_BYPSEN_Pos)       /*!< 0x00000400 */
#define SDIO_CLKCTRL_BYPSEN                 SDIO_CLKCTRL_BYPSEN_Msk                 /*!< Clock divider bypass enable bit */

/*!< BUSWS congiguration */
#define SDIO_CLKCTRL_BUSWS_Pos              (11U)
#define SDIO_CLKCTRL_BUSWS_Msk              (0x3U << SDIO_CLKCTRL_BUSWS_Pos)        /*!< 0x00001800 */
#define SDIO_CLKCTRL_BUSWS                  SDIO_CLKCTRL_BUSWS_Msk                  /*!< BUSWS[1:0] bits (Bus width selection) */
#define SDIO_CLKCTRL_BUSWS_0                (0x1U << SDIO_CLKCTRL_BUSWS_Pos)        /*!< 0x00000800 */
#define SDIO_CLKCTRL_BUSWS_1                (0x2U << SDIO_CLKCTRL_BUSWS_Pos)        /*!< 0x00001000 */

#define SDIO_CLKCTRL_CLKEGS_Pos             (13U)
#define SDIO_CLKCTRL_CLKEGS_Msk             (0x1U << SDIO_CLKCTRL_CLKEGS_Pos)       /*!< 0x00002000 */
#define SDIO_CLKCTRL_CLKEGS                 SDIO_CLKCTRL_CLKEGS_Msk                 /*!< SDIO_CK edge selection */
#define SDIO_CLKCTRL_HFCEN_Pos              (14U)
#define SDIO_CLKCTRL_HFCEN_Msk              (0x1U << SDIO_CLKCTRL_HFCEN_Pos)        /*!< 0x00004000 */
#define SDIO_CLKCTRL_HFCEN                  SDIO_CLKCTRL_HFCEN_Msk                  /*!< Hardware flow control enable */

/*******************  Bit definition for SDIO_ARG register  *******************/
#define SDIO_ARG_ARGU_Pos                   (0U)
#define SDIO_ARG_ARGU_Msk                   (0xFFFFFFFFU << SDIO_ARG_ARGU_Pos)      /*!< 0xFFFFFFFF */
#define SDIO_ARG_ARGU                       SDIO_ARG_ARGU_Msk                       /*!< Command argument */

/*******************  Bit definition for SDIO_CMD register  *******************/
#define SDIO_CMD_CMDIDX_Pos                 (0U)
#define SDIO_CMD_CMDIDX_Msk                 (0x3FU << SDIO_CMD_CMDIDX_Pos)          /*!< 0x0000003F */
#define SDIO_CMD_CMDIDX                     SDIO_CMD_CMDIDX_Msk                     /*!< Command index */

/*!< RSPWT congiguration */
#define SDIO_CMD_RSPWT_Pos                  (6U)
#define SDIO_CMD_RSPWT_Msk                  (0x3U << SDIO_CMD_RSPWT_Pos)            /*!< 0x000000C0 */
#define SDIO_CMD_RSPWT                      SDIO_CMD_RSPWT_Msk                      /*!< RSPWT[1:0] bits (Wait for response bits) */
#define SDIO_CMD_RSPWT_0                    (0x1U << SDIO_CMD_RSPWT_Pos)            /*!< 0x00000040 */
#define SDIO_CMD_RSPWT_1                    (0x2U << SDIO_CMD_RSPWT_Pos)            /*!< 0x00000080 */

#define SDIO_CMD_INTWT_Pos                  (8U)
#define SDIO_CMD_INTWT_Msk                  (0x1U << SDIO_CMD_INTWT_Pos)            /*!< 0x00000100 */
#define SDIO_CMD_INTWT                      SDIO_CMD_INTWT_Msk                      /*!< CCSM waits for interrupt request */
#define SDIO_CMD_PNDWT_Pos                  (9U)
#define SDIO_CMD_PNDWT_Msk                  (0x1U << SDIO_CMD_PNDWT_Pos)            /*!< 0x00000200 */
#define SDIO_CMD_PNDWT                      SDIO_CMD_PNDWT_Msk                      /*!< CCSM Waits for ends of data transfer (CmdPend internal signal) */
#define SDIO_CMD_CCSMEN_Pos                 (10U)
#define SDIO_CMD_CCSMEN_Msk                 (0x1U << SDIO_CMD_CCSMEN_Pos)           /*!< 0x00000400 */
#define SDIO_CMD_CCSMEN                     SDIO_CMD_CCSMEN_Msk                     /*!< Command channel state machine (CCSM) enable bit */
#define SDIO_CMD_IOSUSP_Pos                 (11U)
#define SDIO_CMD_IOSUSP_Msk                 (0x1U << SDIO_CMD_IOSUSP_Pos)           /*!< 0x00000800 */
#define SDIO_CMD_IOSUSP                     SDIO_CMD_IOSUSP_Msk                     /*!< SD I/O suspend command */

/*****************  Bit definition for SDIO_RSPCMD register  ******************/
#define SDIO_RSPCMD_RSPCMD_Pos              (0U)
#define SDIO_RSPCMD_RSPCMD_Msk              (0x3FU << SDIO_RSPCMD_RSPCMD_Pos)       /*!< 0x0000003F */
#define SDIO_RSPCMD_RSPCMD                  SDIO_RSPCMD_RSPCMD_Msk                  /*!< Response command index */

/******************  Bit definition for SDIO_RSP1 register  *******************/
#define SDIO_RSP1_CARDSTS1_Pos              (0U)
#define SDIO_RSP1_CARDSTS1_Msk              (0xFFFFFFFFU << SDIO_RSP1_CARDSTS1_Pos) /*!< 0xFFFFFFFF */
#define SDIO_RSP1_CARDSTS1                  SDIO_RSP1_CARDSTS1_Msk                  /*!< Card status */

/******************  Bit definition for SDIO_RSP2 register  *******************/
#define SDIO_RSP2_CARDSTS2_Pos              (0U)
#define SDIO_RSP2_CARDSTS2_Msk              (0xFFFFFFFFU << SDIO_RSP2_CARDSTS2_Pos) /*!< 0xFFFFFFFF */
#define SDIO_RSP2_CARDSTS2                  SDIO_RSP2_CARDSTS2_Msk                  /*!< Card status */

/******************  Bit definition for SDIO_RSP3 register  *******************/
#define SDIO_RSP3_CARDSTS3_Pos              (0U)
#define SDIO_RSP3_CARDSTS3_Msk              (0xFFFFFFFFU << SDIO_RSP3_CARDSTS3_Pos) /*!< 0xFFFFFFFF */
#define SDIO_RSP3_CARDSTS3                  SDIO_RSP3_CARDSTS3_Msk                  /*!< Card status */

/******************  Bit definition for SDIO_RSP4 register  *******************/
#define SDIO_RSP4_CARDSTS4_Pos              (0U)
#define SDIO_RSP4_CARDSTS4_Msk              (0xFFFFFFFFU << SDIO_RSP4_CARDSTS4_Pos) /*!< 0xFFFFFFFF */
#define SDIO_RSP4_CARDSTS4                  SDIO_RSP4_CARDSTS4_Msk                  /*!< Card status */

/******************  Bit definition for SDIO_DTTMR register  ******************/
#define SDIO_DTTMR_TIMEOUT_Pos              (0U)
#define SDIO_DTTMR_TIMEOUT_Msk              (0xFFFFFFFFU << SDIO_DTTMR_TIMEOUT_Pos) /*!< 0xFFFFFFFF */
#define SDIO_DTTMR_TIMEOUT                  SDIO_DTTMR_TIMEOUT_Msk                  /*!< Data timeout period */

/******************  Bit definition for SDIO_DTLEN register  ******************/
#define SDIO_DTLEN_DTLEN_Pos                (0U)
#define SDIO_DTLEN_DTLEN_Msk                (0x1FFFFFFU << SDIO_DTLEN_DTLEN_Pos)    /*!< 0x01FFFFFF */
#define SDIO_DTLEN_DTLEN                    SDIO_DTLEN_DTLEN_Msk                    /*!< Data length value */

/*****************  Bit definition for SDIO_DTCTRL register  ******************/
#define SDIO_DTCTRL_TFREN_Pos               (0U)
#define SDIO_DTCTRL_TFREN_Msk               (0x1U << SDIO_DTCTRL_TFREN_Pos)         /*!< 0x00000001 */
#define SDIO_DTCTRL_TFREN                   SDIO_DTCTRL_TFREN_Msk                   /*!< Data transfer enabled bit */
#define SDIO_DTCTRL_TFRDIR_Pos              (1U)
#define SDIO_DTCTRL_TFRDIR_Msk              (0x1U << SDIO_DTCTRL_TFRDIR_Pos)        /*!< 0x00000002 */
#define SDIO_DTCTRL_TFRDIR                  SDIO_DTCTRL_TFRDIR_Msk                  /*!< Data transfer direction selection */
#define SDIO_DTCTRL_TFRMODE_Pos             (2U)
#define SDIO_DTCTRL_TFRMODE_Msk             (0x1U << SDIO_DTCTRL_TFRMODE_Pos)       /*!< 0x00000004 */
#define SDIO_DTCTRL_TFRMODE                 SDIO_DTCTRL_TFRMODE_Msk                 /*!< Data transfer mode selection */
#define SDIO_DTCTRL_DMAEN_Pos               (3U)
#define SDIO_DTCTRL_DMAEN_Msk               (0x1U << SDIO_DTCTRL_DMAEN_Pos)         /*!< 0x00000008 */
#define SDIO_DTCTRL_DMAEN                   SDIO_DTCTRL_DMAEN_Msk                   /*!< DMA enable bit */

/*!< BLKSIZE congiguration */
#define SDIO_DTCTRL_BLKSIZE_Pos             (4U)
#define SDIO_DTCTRL_BLKSIZE_Msk             (0xFU << SDIO_DTCTRL_BLKSIZE_Pos)       /*!< 0x000000F0 */
#define SDIO_DTCTRL_BLKSIZE                 SDIO_DTCTRL_BLKSIZE_Msk                 /*!< BLKSIZE[3:0] bits (Data block size) */
#define SDIO_DTCTRL_BLKSIZE_0               (0x1U << SDIO_DTCTRL_BLKSIZE_Pos)       /*!< 0x00000010 */
#define SDIO_DTCTRL_BLKSIZE_1               (0x2U << SDIO_DTCTRL_BLKSIZE_Pos)       /*!< 0x00000020 */
#define SDIO_DTCTRL_BLKSIZE_2               (0x4U << SDIO_DTCTRL_BLKSIZE_Pos)       /*!< 0x00000040 */
#define SDIO_DTCTRL_BLKSIZE_3               (0x8U << SDIO_DTCTRL_BLKSIZE_Pos)       /*!< 0x00000080 */

#define SDIO_DTCTRL_RDWTSTART_Pos           (8U)
#define SDIO_DTCTRL_RDWTSTART_Msk           (0x1U << SDIO_DTCTRL_RDWTSTART_Pos)     /*!< 0x00000100 */
#define SDIO_DTCTRL_RDWTSTART               SDIO_DTCTRL_RDWTSTART_Msk               /*!< Read wait start */
#define SDIO_DTCTRL_RDWTSTOP_Pos            (9U)
#define SDIO_DTCTRL_RDWTSTOP_Msk            (0x1U << SDIO_DTCTRL_RDWTSTOP_Pos)      /*!< 0x00000200 */
#define SDIO_DTCTRL_RDWTSTOP                SDIO_DTCTRL_RDWTSTOP_Msk                /*!< Read wait stop */
#define SDIO_DTCTRL_RDWTMODE_Pos            (10U)
#define SDIO_DTCTRL_RDWTMODE_Msk            (0x1U << SDIO_DTCTRL_RDWTMODE_Pos)      /*!< 0x00000400 */
#define SDIO_DTCTRL_RDWTMODE                SDIO_DTCTRL_RDWTMODE_Msk                /*!< Read wait mode */
#define SDIO_DTCTRL_IOEN_Pos                (11U)
#define SDIO_DTCTRL_IOEN_Msk                (0x1U << SDIO_DTCTRL_IOEN_Pos)          /*!< 0x00000800 */
#define SDIO_DTCTRL_IOEN                    SDIO_DTCTRL_IOEN_Msk                    /*!< SD I/O enable functions */

/*****************  Bit definition for SDIO_DTCNTR register  ******************/
#define SDIO_DTCNTR_CNT_Pos                 (0U)
#define SDIO_DTCNTR_CNT_Msk                 (0x1FFFFFFU << SDIO_DTCNTR_CNT_Pos)     /*!< 0x01FFFFFF */
#define SDIO_DTCNTR_CNT                     SDIO_DTCNTR_CNT_Msk                     /*!< Data count value */

/*******************  Bit definition for SDIO_STS register  *******************/
#define SDIO_STS_CMDFAIL_Pos                (0U)
#define SDIO_STS_CMDFAIL_Msk                (0x1U << SDIO_STS_CMDFAIL_Pos)          /*!< 0x00000001 */
#define SDIO_STS_CMDFAIL                    SDIO_STS_CMDFAIL_Msk                    /*!< Command response received (CRC check failed) */
#define SDIO_STS_DTFAIL_Pos                 (1U)
#define SDIO_STS_DTFAIL_Msk                 (0x1U << SDIO_STS_DTFAIL_Pos)           /*!< 0x00000002 */
#define SDIO_STS_DTFAIL                     SDIO_STS_DTFAIL_Msk                     /*!< Data block sent/received (CRC check failed) */
#define SDIO_STS_CMDTIMEOUT_Pos             (2U)
#define SDIO_STS_CMDTIMEOUT_Msk             (0x1U << SDIO_STS_CMDTIMEOUT_Pos)       /*!< 0x00000004 */
#define SDIO_STS_CMDTIMEOUT                 SDIO_STS_CMDTIMEOUT_Msk                 /*!< Command response timeout */
#define SDIO_STS_DTTIMEOUT_Pos              (3U)
#define SDIO_STS_DTTIMEOUT_Msk              (0x1U << SDIO_STS_DTTIMEOUT_Pos)        /*!< 0x00000008 */
#define SDIO_STS_DTTIMEOUT                  SDIO_STS_DTTIMEOUT_Msk                  /*!< Data timeout */
#define SDIO_STS_TXERRU_Pos                 (4U)
#define SDIO_STS_TXERRU_Msk                 (0x1U << SDIO_STS_TXERRU_Pos)           /*!< 0x00000010 */
#define SDIO_STS_TXERRU                     SDIO_STS_TXERRU_Msk                     /*!< Transmit BUF underrun error */
#define SDIO_STS_RXERRO_Pos                 (5U)
#define SDIO_STS_RXERRO_Msk                 (0x1U << SDIO_STS_RXERRO_Pos)           /*!< 0x00000020 */
#define SDIO_STS_RXERRO                     SDIO_STS_RXERRO_Msk                     /*!< Received BUF overrun error */
#define SDIO_STS_CMDRSPCMPL_Pos             (6U)
#define SDIO_STS_CMDRSPCMPL_Msk             (0x1U << SDIO_STS_CMDRSPCMPL_Pos)       /*!< 0x00000040 */
#define SDIO_STS_CMDRSPCMPL                 SDIO_STS_CMDRSPCMPL_Msk                 /*!< Command response (CRC check passed) */
#define SDIO_STS_CMDCMPL_Pos                (7U)
#define SDIO_STS_CMDCMPL_Msk                (0x1U << SDIO_STS_CMDCMPL_Pos)          /*!< 0x00000080 */
#define SDIO_STS_CMDCMPL                    SDIO_STS_CMDCMPL_Msk                    /*!< Command sent (no response required) */
#define SDIO_STS_DTCMPL_Pos                 (8U)
#define SDIO_STS_DTCMPL_Msk                 (0x1U << SDIO_STS_DTCMPL_Pos)           /*!< 0x00000100 */
#define SDIO_STS_DTCMPL                     SDIO_STS_DTCMPL_Msk                     /*!< Data end (data counter, SDIO CNT, is zero) */
#define SDIO_STS_SBITERR_Pos                (9U)
#define SDIO_STS_SBITERR_Msk                (0x1U << SDIO_STS_SBITERR_Pos)          /*!< 0x00000200 */
#define SDIO_STS_SBITERR                    SDIO_STS_SBITERR_Msk                    /*!< Start bit not detected on all data signals in wide bus mode */
#define SDIO_STS_DTBLKCMPL_Pos              (10U)
#define SDIO_STS_DTBLKCMPL_Msk              (0x1U << SDIO_STS_DTBLKCMPL_Pos)        /*!< 0x00000400 */
#define SDIO_STS_DTBLKCMPL                  SDIO_STS_DTBLKCMPL_Msk                  /*!< Data block sent/received (CRC check passed) */
#define SDIO_STS_DOCMD_Pos                  (11U)
#define SDIO_STS_DOCMD_Msk                  (0x1U << SDIO_STS_DOCMD_Pos)            /*!< 0x00000800 */
#define SDIO_STS_DOCMD                      SDIO_STS_DOCMD_Msk                      /*!< Command transfer in progress */
#define SDIO_STS_DOTX_Pos                   (12U)
#define SDIO_STS_DOTX_Msk                   (0x1U << SDIO_STS_DOTX_Pos)             /*!< 0x00001000 */
#define SDIO_STS_DOTX                       SDIO_STS_DOTX_Msk                       /*!< Data transmit in progress */
#define SDIO_STS_DORX_Pos                   (13U)
#define SDIO_STS_DORX_Msk                   (0x1U << SDIO_STS_DORX_Pos)             /*!< 0x00002000 */
#define SDIO_STS_DORX                       SDIO_STS_DORX_Msk                       /*!< Data receive in progress */
#define SDIO_STS_TXBUFH_Pos                 (14U)
#define SDIO_STS_TXBUFH_Msk                 (0x1U << SDIO_STS_TXBUFH_Pos)           /*!< 0x00004000 */
#define SDIO_STS_TXBUFH                     SDIO_STS_TXBUFH_Msk                     /*!< Transmit BUF half empty: At least 8 words can be written to the BUF */
#define SDIO_STS_RXBUFH_Pos                 (15U)
#define SDIO_STS_RXBUFH_Msk                 (0x1U << SDIO_STS_RXBUFH_Pos)           /*!< 0x00008000 */
#define SDIO_STS_RXBUFH                     SDIO_STS_RXBUFH_Msk                     /*!< Receive BUF half full: There are at least 8 words in the BUF */
#define SDIO_STS_TXBUFF_Pos                 (16U)
#define SDIO_STS_TXBUFF_Msk                 (0x1U << SDIO_STS_TXBUFF_Pos)           /*!< 0x00010000 */
#define SDIO_STS_TXBUFF                     SDIO_STS_TXBUFF_Msk                     /*!< Transmit BUF full */
#define SDIO_STS_RXBUFF_Pos                 (17U)
#define SDIO_STS_RXBUFF_Msk                 (0x1U << SDIO_STS_RXBUFF_Pos)           /*!< 0x00020000 */
#define SDIO_STS_RXBUFF                     SDIO_STS_RXBUFF_Msk                     /*!< Receive BUF full */
#define SDIO_STS_TXBUFE_Pos                 (18U)
#define SDIO_STS_TXBUFE_Msk                 (0x1U << SDIO_STS_TXBUFE_Pos)           /*!< 0x00040000 */
#define SDIO_STS_TXBUFE                     SDIO_STS_TXBUFE_Msk                     /*!< Transmit BUF empty */
#define SDIO_STS_RXBUFE_Pos                 (19U)
#define SDIO_STS_RXBUFE_Msk                 (0x1U << SDIO_STS_RXBUFE_Pos)           /*!< 0x00080000 */
#define SDIO_STS_RXBUFE                     SDIO_STS_RXBUFE_Msk                     /*!< Receive BUF empty */
#define SDIO_STS_TXBUF_Pos                  (20U)
#define SDIO_STS_TXBUF_Msk                  (0x1U << SDIO_STS_TXBUF_Pos)            /*!< 0x00100000 */
#define SDIO_STS_TXBUF                      SDIO_STS_TXBUF_Msk                      /*!< Data available in transmit BUF */
#define SDIO_STS_RXBUF_Pos                  (21U)
#define SDIO_STS_RXBUF_Msk                  (0x1U << SDIO_STS_RXBUF_Pos)            /*!< 0x00200000 */
#define SDIO_STS_RXBUF                      SDIO_STS_RXBUF_Msk                      /*!< Data available in receive BUF */
#define SDIO_STS_IOIF_Pos                   (22U)
#define SDIO_STS_IOIF_Msk                   (0x1U << SDIO_STS_IOIF_Pos)             /*!< 0x00400000 */
#define SDIO_STS_IOIF                       SDIO_STS_IOIF_Msk                       /*!< SD I/O interrupt received */

/*****************  Bit definition for SDIO_INTCLR register  ******************/
#define SDIO_INTCLR_CMDFAIL_Pos             (0U)
#define SDIO_INTCLR_CMDFAIL_Msk             (0x1U << SDIO_INTCLR_CMDFAIL_Pos)       /*!< 0x00000001 */
#define SDIO_INTCLR_CMDFAIL                 SDIO_INTCLR_CMDFAIL_Msk                 /*!< CMDFAIL flag clear bit */
#define SDIO_INTCLR_DTFAIL_Pos              (1U)
#define SDIO_INTCLR_DTFAIL_Msk              (0x1U << SDIO_INTCLR_DTFAIL_Pos)        /*!< 0x00000002 */
#define SDIO_INTCLR_DTFAIL                  SDIO_INTCLR_DTFAIL_Msk                  /*!< DTFAIL flag clear bit */
#define SDIO_INTCLR_CMDTIMEOUT_Pos          (2U)
#define SDIO_INTCLR_CMDTIMEOUT_Msk          (0x1U << SDIO_INTCLR_CMDTIMEOUT_Pos)    /*!< 0x00000004 */
#define SDIO_INTCLR_CMDTIMEOUT              SDIO_INTCLR_CMDTIMEOUT_Msk              /*!< CMDTIMEOUT flag clear bit */
#define SDIO_INTCLR_DTTIMEOUT_Pos           (3U)
#define SDIO_INTCLR_DTTIMEOUT_Msk           (0x1U << SDIO_INTCLR_DTTIMEOUT_Pos)     /*!< 0x00000008 */
#define SDIO_INTCLR_DTTIMEOUT               SDIO_INTCLR_DTTIMEOUT_Msk               /*!< DTTIMEOUT flag clear bit */
#define SDIO_INTCLR_TXERRU_Pos              (4U)
#define SDIO_INTCLR_TXERRU_Msk              (0x1U << SDIO_INTCLR_TXERRU_Pos)        /*!< 0x00000010 */
#define SDIO_INTCLR_TXERRU                  SDIO_INTCLR_TXERRU_Msk                  /*!< TXERRU flag clear bit */
#define SDIO_INTCLR_RXERRO_Pos              (5U)
#define SDIO_INTCLR_RXERRO_Msk              (0x1U << SDIO_INTCLR_RXERRO_Pos)        /*!< 0x00000020 */
#define SDIO_INTCLR_RXERRO                  SDIO_INTCLR_RXERRO_Msk                  /*!< RXERRO flag clear bit */
#define SDIO_INTCLR_CMDRSPCMPL_Pos          (6U)
#define SDIO_INTCLR_CMDRSPCMPL_Msk          (0x1U << SDIO_INTCLR_CMDRSPCMPL_Pos)    /*!< 0x00000040 */
#define SDIO_INTCLR_CMDRSPCMPL              SDIO_INTCLR_CMDRSPCMPL_Msk              /*!< CMDRSPCMPL flag clear bit */
#define SDIO_INTCLR_CMDCMPL_Pos             (7U)
#define SDIO_INTCLR_CMDCMPL_Msk             (0x1U << SDIO_INTCLR_CMDCMPL_Pos)       /*!< 0x00000080 */
#define SDIO_INTCLR_CMDCMPL                 SDIO_INTCLR_CMDCMPL_Msk                 /*!< CMDCMPL flag clear bit */
#define SDIO_INTCLR_DTCMPL_Pos              (8U)
#define SDIO_INTCLR_DTCMPL_Msk              (0x1U << SDIO_INTCLR_DTCMPL_Pos)        /*!< 0x00000100 */
#define SDIO_INTCLR_DTCMPL                  SDIO_INTCLR_DTCMPL_Msk                  /*!< DTCMPL flag clear bit */
#define SDIO_INTCLR_SBITERR_Pos             (9U)
#define SDIO_INTCLR_SBITERR_Msk             (0x1U << SDIO_INTCLR_SBITERR_Pos)       /*!< 0x00000200 */
#define SDIO_INTCLR_SBITERR                 SDIO_INTCLR_SBITERR_Msk                 /*!< SBITERR flag clear bit */
#define SDIO_INTCLR_DTBLKCMPL_Pos           (10U)
#define SDIO_INTCLR_DTBLKCMPL_Msk           (0x1U << SDIO_INTCLR_DTBLKCMPL_Pos)     /*!< 0x00000400 */
#define SDIO_INTCLR_DTBLKCMPL               SDIO_INTCLR_DTBLKCMPL_Msk               /*!< DTBLKCMPL flag clear bit */
#define SDIO_INTCLR_IOIF_Pos                (22U)
#define SDIO_INTCLR_IOIF_Msk                (0x1U << SDIO_INTCLR_IOIF_Pos)          /*!< 0x00400000 */
#define SDIO_INTCLR_IOIF                    SDIO_INTCLR_IOIF_Msk                    /*!< SD I/O interface flag clear bit */

/******************  Bit definition for SDIO_INTEN register  ******************/
#define SDIO_INTEN_CMDFAILIEN_Pos           (0U)
#define SDIO_INTEN_CMDFAILIEN_Msk           (0x1U << SDIO_INTEN_CMDFAILIEN_Pos)     /*!< 0x00000001 */
#define SDIO_INTEN_CMDFAILIEN               SDIO_INTEN_CMDFAILIEN_Msk               /*!< Command CRC fail interrupt enable */
#define SDIO_INTEN_DTFAILIEN_Pos            (1U)
#define SDIO_INTEN_DTFAILIEN_Msk            (0x1U << SDIO_INTEN_DTFAILIEN_Pos)      /*!< 0x00000002 */
#define SDIO_INTEN_DTFAILIEN                SDIO_INTEN_DTFAILIEN_Msk                /*!< Data CRC fail interrupt enable */
#define SDIO_INTEN_CMDTIMEOUTIEN_Pos        (2U)
#define SDIO_INTEN_CMDTIMEOUTIEN_Msk        (0x1U << SDIO_INTEN_CMDTIMEOUTIEN_Pos)  /*!< 0x00000004 */
#define SDIO_INTEN_CMDTIMEOUTIEN            SDIO_INTEN_CMDTIMEOUTIEN_Msk            /*!< Command timeout interrupt enable */
#define SDIO_INTEN_DTTIMEOUTIEN_Pos         (3U)
#define SDIO_INTEN_DTTIMEOUTIEN_Msk         (0x1U << SDIO_INTEN_DTTIMEOUTIEN_Pos)   /*!< 0x00000008 */
#define SDIO_INTEN_DTTIMEOUTIEN             SDIO_INTEN_DTTIMEOUTIEN_Msk             /*!< Data timeout interrupt enable */
#define SDIO_INTEN_TXERRUIEN_Pos            (4U)
#define SDIO_INTEN_TXERRUIEN_Msk            (0x1U << SDIO_INTEN_TXERRUIEN_Pos)      /*!< 0x00000010 */
#define SDIO_INTEN_TXERRUIEN                SDIO_INTEN_TXERRUIEN_Msk                /*!< TxBUF underrun error interrupt enable */
#define SDIO_INTEN_RXERROIEN_Pos            (5U)
#define SDIO_INTEN_RXERROIEN_Msk            (0x1U << SDIO_INTEN_RXERROIEN_Pos)      /*!< 0x00000020 */
#define SDIO_INTEN_RXERROIEN                SDIO_INTEN_RXERROIEN_Msk                /*!< RxBUF overrun error interrupt enable */
#define SDIO_INTEN_CMDRSPCMPLIEN_Pos        (6U)
#define SDIO_INTEN_CMDRSPCMPLIEN_Msk        (0x1U << SDIO_INTEN_CMDRSPCMPLIEN_Pos)  /*!< 0x00000040 */
#define SDIO_INTEN_CMDRSPCMPLIEN            SDIO_INTEN_CMDRSPCMPLIEN_Msk            /*!< Command response received interrupt enable */
#define SDIO_INTEN_CMDCMPLIEN_Pos           (7U)
#define SDIO_INTEN_CMDCMPLIEN_Msk           (0x1U << SDIO_INTEN_CMDCMPLIEN_Pos)     /*!< 0x00000080 */
#define SDIO_INTEN_CMDCMPLIEN               SDIO_INTEN_CMDCMPLIEN_Msk               /*!< Command sent interrupt enable */
#define SDIO_INTEN_DTCMPLIEN_Pos            (8U)
#define SDIO_INTEN_DTCMPLIEN_Msk            (0x1U << SDIO_INTEN_DTCMPLIEN_Pos)      /*!< 0x00000100 */
#define SDIO_INTEN_DTCMPLIEN                SDIO_INTEN_DTCMPLIEN_Msk                /*!< Data end interrupt enable */
#define SDIO_INTEN_SBITERRIEN_Pos           (9U)
#define SDIO_INTEN_SBITERRIEN_Msk           (0x1U << SDIO_INTEN_SBITERRIEN_Pos)     /*!< 0x00000200 */
#define SDIO_INTEN_SBITERRIEN               SDIO_INTEN_SBITERRIEN_Msk               /*!< Start bit error interrupt enable */
#define SDIO_INTEN_DTBLKCMPLIEN_Pos         (10U)
#define SDIO_INTEN_DTBLKCMPLIEN_Msk         (0x1U << SDIO_INTEN_DTBLKCMPLIEN_Pos)   /*!< 0x00000400 */
#define SDIO_INTEN_DTBLKCMPLIEN             SDIO_INTEN_DTBLKCMPLIEN_Msk             /*!< Data block end interrupt enable */
#define SDIO_INTEN_DOCMDIEN_Pos             (11U)
#define SDIO_INTEN_DOCMDIEN_Msk             (0x1U << SDIO_INTEN_DOCMDIEN_Pos)       /*!< 0x00000800 */
#define SDIO_INTEN_DOCMDIEN                 SDIO_INTEN_DOCMDIEN_Msk                 /*!< Command acting interrupt enable */
#define SDIO_INTEN_DOTXIEN_Pos              (12U)
#define SDIO_INTEN_DOTXIEN_Msk              (0x1U << SDIO_INTEN_DOTXIEN_Pos)        /*!< 0x00001000 */
#define SDIO_INTEN_DOTXIEN                  SDIO_INTEN_DOTXIEN_Msk                  /*!< Data transmit acting interrupt enable */
#define SDIO_INTEN_DORXIEN_Pos              (13U)
#define SDIO_INTEN_DORXIEN_Msk              (0x1U << SDIO_INTEN_DORXIEN_Pos)        /*!< 0x00002000 */
#define SDIO_INTEN_DORXIEN                  SDIO_INTEN_DORXIEN_Msk                  /*!< Data receive acting interrupt enable */
#define SDIO_INTEN_TXBUFHIEN_Pos            (14U)
#define SDIO_INTEN_TXBUFHIEN_Msk            (0x1U << SDIO_INTEN_TXBUFHIEN_Pos)      /*!< 0x00004000 */
#define SDIO_INTEN_TXBUFHIEN                SDIO_INTEN_TXBUFHIEN_Msk                /*!< TxBUF half empty interrupt enable */
#define SDIO_INTEN_RXBUFHIEN_Pos            (15U)
#define SDIO_INTEN_RXBUFHIEN_Msk            (0x1U << SDIO_INTEN_RXBUFHIEN_Pos)      /*!< 0x00008000 */
#define SDIO_INTEN_RXBUFHIEN                SDIO_INTEN_RXBUFHIEN_Msk                /*!< RxBUF half full interrupt enable */
#define SDIO_INTEN_TXBUFFIEN_Pos            (16U)
#define SDIO_INTEN_TXBUFFIEN_Msk            (0x1U << SDIO_INTEN_TXBUFFIEN_Pos)      /*!< 0x00010000 */
#define SDIO_INTEN_TXBUFFIEN                SDIO_INTEN_TXBUFFIEN_Msk                /*!< TxBUF full interrupt enable */
#define SDIO_INTEN_RXBUFFIEN_Pos            (17U)
#define SDIO_INTEN_RXBUFFIEN_Msk            (0x1U << SDIO_INTEN_RXBUFFIEN_Pos)      /*!< 0x00020000 */
#define SDIO_INTEN_RXBUFFIEN                SDIO_INTEN_RXBUFFIEN_Msk                /*!< RxBUF full interrupt enable */
#define SDIO_INTEN_TXBUFEIEN_Pos            (18U)
#define SDIO_INTEN_TXBUFEIEN_Msk            (0x1U << SDIO_INTEN_TXBUFEIEN_Pos)      /*!< 0x00040000 */
#define SDIO_INTEN_TXBUFEIEN                SDIO_INTEN_TXBUFEIEN_Msk                /*!< TxBUF empty interrupt enable */
#define SDIO_INTEN_RXBUFEIEN_Pos            (19U)
#define SDIO_INTEN_RXBUFEIEN_Msk            (0x1U << SDIO_INTEN_RXBUFEIEN_Pos)      /*!< 0x00080000 */
#define SDIO_INTEN_RXBUFEIEN                SDIO_INTEN_RXBUFEIEN_Msk                /*!< RxBUF empty interrupt enable */
#define SDIO_INTEN_TXBUFIEN_Pos             (20U)
#define SDIO_INTEN_TXBUFIEN_Msk             (0x1U << SDIO_INTEN_TXBUFIEN_Pos)       /*!< 0x00100000 */
#define SDIO_INTEN_TXBUFIEN                 SDIO_INTEN_TXBUFIEN_Msk                 /*!< Data available in TxBUF interrupt enable */
#define SDIO_INTEN_RXBUFIEN_Pos             (21U)
#define SDIO_INTEN_RXBUFIEN_Msk             (0x1U << SDIO_INTEN_RXBUFIEN_Pos)       /*!< 0x00200000 */
#define SDIO_INTEN_RXBUFIEN                 SDIO_INTEN_RXBUFIEN_Msk                 /*!< Data available in RxBUF interrupt enable */
#define SDIO_INTEN_IOIFIEN_Pos              (22U)
#define SDIO_INTEN_IOIFIEN_Msk              (0x1U << SDIO_INTEN_IOIFIEN_Pos)        /*!< 0x00400000 */
#define SDIO_INTEN_IOIFIEN                  SDIO_INTEN_IOIFIEN_Msk                  /*!< SD I/O mode received interrupt enable */

/*****************  Bit definition for SDIO_BUFCNTR register  ******************/
#define SDIO_BUFCNTR_CNT_Pos                (0U)
#define SDIO_BUFCNTR_CNT_Msk                (0xFFFFFFU << SDIO_BUFCNTR_CNT_Pos)     /*!< 0x00FFFFFF */
#define SDIO_BUFCNTR_CNT                    SDIO_BUFCNTR_CNT_Msk                    /*!< Number of words to be written to or read from the BUF */

/*******************  Bit definition for SDIO_BUF register  *******************/
#define SDIO_BUF_DT_Pos                     (0U)
#define SDIO_BUF_DT_Msk                     (0xFFFFFFFFU << SDIO_BUF_DT_Pos)        /*!< 0xFFFFFFFF */
#define SDIO_BUF_DT                         SDIO_BUF_DT_Msk                         /*!< Receive and transmit BUF data */


/**
  * @}
  */
 
#ifdef __cplusplus
}
#endif

#endif
