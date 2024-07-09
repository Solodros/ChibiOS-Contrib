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
 * @file    AT32F403_7xx/at32_registry.h
 * @brief   AT32F403_7xx capabilities registry.
 *
 * @addtogroup HAL
 * @{
 */

#ifndef AT32_REGISTRY_H
#define AT32_REGISTRY_H

#if !defined(AT32F403_7xx)
#error "unsupported or unrecognized AT32F403_7xx member"
#endif

/*===========================================================================*/
/* Platform capabilities.                                                    */
/*===========================================================================*/

#if defined(AT32F403ACx) || defined(__DOXYGEN__)
/**
 * @name    AT32F403ACx capabilities
 * @{
 */
/* ADC attributes.*/
#define AT32_HAS_ADC1                       TRUE
#define AT32_ADC1_DMA_MSK                   (AT32_DMA_STREAM_ID_MSK(1, 1))
#define AT32_ADC1_DMA_CHN                   0x00000000
#define AT32_HAS_ADC2                       TRUE
#define AT32_ADC2_DMA_MSK                   (AT32_DMA_STREAM_ID_MSK(1, 1))
#define AT32_ADC2_DMA_CHN                   0x00000000
#define AT32_HAS_ADC3                       TRUE
#define AT32_ADC3_DMA_MSK                   (AT32_DMA_STREAM_ID_MSK(2, 5))
#define AT32_ADC3_DMA_CHN                   0x00000000

/* CAN attributes.*/
#define AT32_HAS_CAN1                       TRUE
#define AT32_HAS_CAN2                       TRUE
#define AT32_CAN_MAX_FILTERS                14

/* DAC attributes.*/
#define AT32_HAS_DAC1_CH1                   TRUE
#define AT32_HAS_DAC1_CH2                   TRUE

/* DMA attributes.*/
#define AT32_ADVANCED_DMA                   FALSE
#define AT32_DMA_SUPPORTS_DMAMUX            TRUE
#define AT32_DMA_SUPPORTS_CSELR             FALSE

#define AT32_DMA1_NUM_CHANNELS              7
#define AT32_DMA2_NUM_CHANNELS              7

/* ETH attributes.*/
#define AT32_HAS_ETH                        FALSE

/* EXINT attributes.*/
#define AT32_EXINT_NUM_LINES                20
#define AT32_EXINT_INTEN_MASK               0x00000000U

/* Flash attributes.*/
#if defined(AT32F403AxG) || defined(AT32F407xG)
#define AT32_FLASH_NUMBER_OF_BANKS          2
#else
#define AT32_FLASH_NUMBER_OF_BANKS          1
#endif

#define AT32_FLASH_SECTOR_SIZE              2048U

#if !defined(AT32_FLASH_SECTORS_PER_BANK) || defined(__DOXYGEN__)
#if  defined(AT32F403AxG) || defined(AT32F407xG) || defined(AT32F403AxE) || defined(AT32F407xE)
#define AT32_FLASH_SECTORS_PER_BANK         256 /* Maximum, can be redefined.*/
#elif 
#define AT32_FLASH_SECTORS_PER_BANK         128 /* Maximum, can be redefined.*/
#endif
#endif

/* GPIO attributes.*/
#define AT32_HAS_GPIOA                      TRUE
#define AT32_HAS_GPIOB                      TRUE
#define AT32_HAS_GPIOC                      TRUE
#define AT32_HAS_GPIOD                      TRUE
#define AT32_HAS_GPIOE                      FALSE
#define AT32_HAS_GPIOF                      FALSE
#define AT32_HAS_GPIOG                      FALSE
#define AT32_GPIO_HAS_HDRV                  TRUE

/* I2C attributes.*/
#define AT32_HAS_I2C1                       TRUE
#define AT32_HAS_I2C2                       TRUE
#define AT32_HAS_I2C3                       TRUE

/* RTC attributes.*/
#define AT32_HAS_RTC                        TRUE
#define AT32_RTC_HAS_SUBSECONDS             FALSE
#define AT32_RTC_IS_CALENDAR                TRUE

/* SDIO attributes.*/
#define AT32_HAS_SDIO                       FALSE
#define AT32_HAS_SDIO2                      TRUE
#define AT32_SDC_SDIO2_DMA_STREAM           AT32_DMA_STREAM_ID(2, 5)

/* SPI attributes.*/
#define AT32_HAS_SPI1                       TRUE
#define AT32_SPI1_SUPPORTS_I2S              TRUE
#define AT32_SPI1_I2S_FULLDUPLEX            FALSE

#define AT32_HAS_SPI2                       TRUE
#define AT32_SPI2_SUPPORTS_I2S              TRUE
#define AT32_SPI2_I2S_FULLDUPLEX            TRUE

#define AT32_HAS_SPI3                       TRUE
#define AT32_SPI3_SUPPORTS_I2S              TRUE
#define AT32_SPI3_I2S_FULLDUPLEX            TRUE

#define AT32_HAS_SPI4                       TRUE
#define AT32_SPI4_SUPPORTS_I2S              TRUE
#define AT32_SPI4_I2S_FULLDUPLEX            FALSE

/* TMR attributes.*/
#define AT32_TMR_MAX_CHANNELS               4

#define AT32_HAS_TMR1                       TRUE
#define AT32_TMR1_IS_32BITS                 FALSE
#define AT32_TMR1_CHANNELS                  4

#define AT32_HAS_TMR2                       TRUE
#define AT32_TMR2_IS_32BITS                 TRUE
#define AT32_TMR2_CHANNELS                  4

#define AT32_HAS_TMR3                       TRUE
#define AT32_TMR3_IS_32BITS                 FALSE
#define AT32_TMR3_CHANNELS                  4

#define AT32_HAS_TMR4                       TRUE
#define AT32_TMR4_IS_32BITS                 FALSE
#define AT32_TMR4_CHANNELS                  4

#define AT32_HAS_TMR5                       TRUE
#define AT32_TMR5_IS_32BITS                 TRUE
#define AT32_TMR5_CHANNELS                  4

#define AT32_HAS_TMR6                       TRUE
#define AT32_TMR6_IS_32BITS                 FALSE
#define AT32_TMR6_CHANNELS                  0

#define AT32_HAS_TMR7                       TRUE
#define AT32_TMR7_IS_32BITS                 FALSE
#define AT32_TMR7_CHANNELS                  0

#define AT32_HAS_TMR8                       TRUE
#define AT32_TMR8_IS_32BITS                 FALSE
#define AT32_TMR8_CHANNELS                  4

#define AT32_HAS_TMR9                       TRUE
#define AT32_TMR9_IS_32BITS                 FALSE
#define AT32_TMR9_CHANNELS                  2

#define AT32_HAS_TMR10                      TRUE
#define AT32_TMR10_IS_32BITS                FALSE
#define AT32_TMR10_CHANNELS                 1

#define AT32_HAS_TMR11                      TRUE
#define AT32_TMR11_IS_32BITS                FALSE
#define AT32_TMR11_CHANNELS                 1

#define AT32_HAS_TMR12                      TRUE
#define AT32_TMR12_IS_32BITS                FALSE
#define AT32_TMR12_CHANNELS                 2

#define AT32_HAS_TMR13                      TRUE
#define AT32_TMR13_IS_32BITS                FALSE
#define AT32_TMR13_CHANNELS                 1

#define AT32_HAS_TMR14                      TRUE
#define AT32_TMR14_IS_32BITS                FALSE
#define AT32_TMR14_CHANNELS                 1

/* USART attributes.*/
#define AT32_HAS_USART1                     TRUE
#define AT32_HAS_USART2                     TRUE
#define AT32_HAS_USART3                     TRUE
#define AT32_HAS_UART4                      TRUE
#define AT32_HAS_UART5                      TRUE
#define AT32_HAS_USART6                     FALSE
#define AT32_HAS_UART7                      TRUE
#define AT32_HAS_UART8                      FALSE

/* USB attributes.*/
#define AT32_HAS_USB                        TRUE
#define AT32_USB_ACCESS_SCHEME_2x16         FALSE
#define AT32_USB_PMA_MAX_SIZE               1280
#define AT32_USB_HAS_BCDR                   FALSE
#define AT32_USB_HAS_CFG                    TRUE

/* IWDG attributes.*/
#define AT32_HAS_IWDG                       TRUE
#define AT32_IWDG_IS_WINDOWED               TRUE

/* FSMC attributes.*/
#define AT32_HAS_XMC                        TRUE

/* CRC attributes.*/
#define AT32_HAS_CRC                        TRUE
#define AT32_CRC_PROGRAMMABLE               FALSE

#endif /* defined(AT32F403ACx) */

#if defined(AT32F403ARx)
/**
 * @name    AT32F403ARx capabilities
 * @{
 */
/* ADC attributes.*/
#define AT32_HAS_ADC1                       TRUE
#define AT32_ADC1_DMA_MSK                   (AT32_DMA_STREAM_ID_MSK(1, 1))
#define AT32_ADC1_DMA_CHN                   0x00000000
#define AT32_HAS_ADC2                       TRUE
#define AT32_ADC2_DMA_MSK                   (AT32_DMA_STREAM_ID_MSK(1, 1))
#define AT32_ADC2_DMA_CHN                   0x00000000
#define AT32_HAS_ADC3                       TRUE
#define AT32_ADC3_DMA_MSK                   (AT32_DMA_STREAM_ID_MSK(2, 5))
#define AT32_ADC3_DMA_CHN                   0x00000000

/* CAN attributes.*/
#define AT32_HAS_CAN1                       TRUE
#define AT32_HAS_CAN2                       TRUE
#define AT32_CAN_MAX_FILTERS                14

/* DAC attributes.*/
#define AT32_HAS_DAC1_CH1                   TRUE
#define AT32_HAS_DAC1_CH2                   TRUE

/* DMA attributes.*/
#define AT32_ADVANCED_DMA                   FALSE
#define AT32_DMA_SUPPORTS_DMAMUX            TRUE
#define AT32_DMA_SUPPORTS_CSELR             FALSE

#define AT32_DMA1_NUM_CHANNELS              7
#define AT32_DMA2_NUM_CHANNELS              7

/* ETH attributes.*/
#define AT32_HAS_ETH                        FALSE

/* EXINT attributes.*/
#define AT32_EXINT_NUM_LINES                20
#define AT32_EXINT_INTEN_MASK               0x00000000U

/* Flash attributes.*/
#if defined(AT32F403AxG) || defined(AT32F407xG)
#define AT32_FLASH_NUMBER_OF_BANKS          2
#else
#define AT32_FLASH_NUMBER_OF_BANKS          1
#endif

#define AT32_FLASH_SECTOR_SIZE              2048U

#if !defined(AT32_FLASH_SECTORS_PER_BANK) || defined(__DOXYGEN__)
#if  defined(AT32F403AxG) || defined(AT32F407xG) || defined(AT32F403AxE) || defined(AT32F407xE)
#define AT32_FLASH_SECTORS_PER_BANK         256 /* Maximum, can be redefined.*/
#elif 
#define AT32_FLASH_SECTORS_PER_BANK         128 /* Maximum, can be redefined.*/
#endif
#endif

/* GPIO attributes.*/
#define AT32_HAS_GPIOA                      TRUE
#define AT32_HAS_GPIOB                      TRUE
#define AT32_HAS_GPIOC                      TRUE
#define AT32_HAS_GPIOD                      TRUE
#define AT32_HAS_GPIOE                      FALSE
#define AT32_HAS_GPIOF                      FALSE
#define AT32_HAS_GPIOG                      FALSE
#define AT32_GPIO_HAS_HDRV                  TRUE

/* I2C attributes.*/
#define AT32_HAS_I2C1                       TRUE
#define AT32_HAS_I2C2                       TRUE
#define AT32_HAS_I2C3                       TRUE

/* RTC attributes.*/
#define AT32_HAS_RTC                        TRUE
#define AT32_RTC_HAS_SUBSECONDS             FALSE
#define AT32_RTC_IS_CALENDAR                TRUE

/* SDIO attributes.*/
#define AT32_HAS_SDIO                       TRUE
#define AT32_SDC_SDIO_DMA_STREAM            AT32_DMA_STREAM_ID(2, 4)
#define AT32_HAS_SDIO2                      TRUE
#define AT32_SDC_SDIO2_DMA_STREAM           AT32_DMA_STREAM_ID(2, 5)

/* SPI attributes.*/
#define AT32_HAS_SPI1                       TRUE
#define AT32_SPI1_SUPPORTS_I2S              TRUE
#define AT32_SPI1_I2S_FULLDUPLEX            FALSE

#define AT32_HAS_SPI2                       TRUE
#define AT32_SPI2_SUPPORTS_I2S              TRUE
#define AT32_SPI2_I2S_FULLDUPLEX            TRUE

#define AT32_HAS_SPI3                       TRUE
#define AT32_SPI3_SUPPORTS_I2S              TRUE
#define AT32_SPI3_I2S_FULLDUPLEX            TRUE

#define AT32_HAS_SPI4                       TRUE
#define AT32_SPI4_SUPPORTS_I2S              TRUE
#define AT32_SPI4_I2S_FULLDUPLEX            FALSE

/* TMR attributes.*/
#define AT32_TMR_MAX_CHANNELS               4

#define AT32_HAS_TMR1                       TRUE
#define AT32_TMR1_IS_32BITS                 FALSE
#define AT32_TMR1_CHANNELS                  4

#define AT32_HAS_TMR2                       TRUE
#define AT32_TMR2_IS_32BITS                 TRUE
#define AT32_TMR2_CHANNELS                  4

#define AT32_HAS_TMR3                       TRUE
#define AT32_TMR3_IS_32BITS                 FALSE
#define AT32_TMR3_CHANNELS                  4

#define AT32_HAS_TMR4                       TRUE
#define AT32_TMR4_IS_32BITS                 FALSE
#define AT32_TMR4_CHANNELS                  4

#define AT32_HAS_TMR5                       TRUE
#define AT32_TMR5_IS_32BITS                 TRUE
#define AT32_TMR5_CHANNELS                  4

#define AT32_HAS_TMR6                       TRUE
#define AT32_TMR6_IS_32BITS                 FALSE
#define AT32_TMR6_CHANNELS                  0

#define AT32_HAS_TMR7                       TRUE
#define AT32_TMR7_IS_32BITS                 FALSE
#define AT32_TMR7_CHANNELS                  0

#define AT32_HAS_TMR8                       TRUE
#define AT32_TMR8_IS_32BITS                 FALSE
#define AT32_TMR8_CHANNELS                  4

#define AT32_HAS_TMR9                       TRUE
#define AT32_TMR9_IS_32BITS                 FALSE
#define AT32_TMR9_CHANNELS                  2

#define AT32_HAS_TMR10                      TRUE
#define AT32_TMR10_IS_32BITS                FALSE
#define AT32_TMR10_CHANNELS                 1

#define AT32_HAS_TMR11                      TRUE
#define AT32_TMR11_IS_32BITS                FALSE
#define AT32_TMR11_CHANNELS                 1

#define AT32_HAS_TMR12                      TRUE
#define AT32_TMR12_IS_32BITS                FALSE
#define AT32_TMR12_CHANNELS                 2

#define AT32_HAS_TMR13                      TRUE
#define AT32_TMR13_IS_32BITS                FALSE
#define AT32_TMR13_CHANNELS                 1

#define AT32_HAS_TMR14                      TRUE
#define AT32_TMR14_IS_32BITS                FALSE
#define AT32_TMR14_CHANNELS                 1

/* USART attributes.*/
#define AT32_HAS_USART1                     TRUE
#define AT32_HAS_USART2                     TRUE
#define AT32_HAS_USART3                     TRUE
#define AT32_HAS_UART4                      TRUE
#define AT32_HAS_UART5                      TRUE
#define AT32_HAS_USART6                     TRUE
#define AT32_HAS_UART7                      TRUE
#define AT32_HAS_UART8                      TRUE

/* USB attributes.*/
#define AT32_HAS_USB                        TRUE
#define AT32_USB_ACCESS_SCHEME_2x16         FALSE
#define AT32_USB_PMA_MAX_SIZE               1280
#define AT32_USB_HAS_BCDR                   FALSE
#define AT32_USB_HAS_CFG                    TRUE

/* IWDG attributes.*/
#define AT32_HAS_IWDG                       TRUE
#define AT32_IWDG_IS_WINDOWED               TRUE

/* FSMC attributes.*/
#define AT32_HAS_XMC                        TRUE

/* CRC attributes.*/
#define AT32_HAS_CRC                        TRUE
#define AT32_CRC_PROGRAMMABLE               FALSE

#endif /* defined(AT32F403ARx) */

#if defined(AT32F403AVx)
/**
 * @name    AT32F403AVx capabilities
 * @{
 */
/* ADC attributes.*/
#define AT32_HAS_ADC1                       TRUE
#define AT32_ADC1_DMA_MSK                   (AT32_DMA_STREAM_ID_MSK(1, 1))
#define AT32_ADC1_DMA_CHN                   0x00000000
#define AT32_HAS_ADC2                       TRUE
#define AT32_ADC2_DMA_MSK                   (AT32_DMA_STREAM_ID_MSK(1, 1))
#define AT32_ADC2_DMA_CHN                   0x00000000
#define AT32_HAS_ADC3                       TRUE
#define AT32_ADC3_DMA_MSK                   (AT32_DMA_STREAM_ID_MSK(2, 5))
#define AT32_ADC3_DMA_CHN                   0x00000000

/* CAN attributes.*/
#define AT32_HAS_CAN1                       TRUE
#define AT32_HAS_CAN2                       TRUE
#define AT32_CAN_MAX_FILTERS                14

/* DAC attributes.*/
#define AT32_HAS_DAC1_CH1                   TRUE
#define AT32_HAS_DAC1_CH2                   TRUE

/* DMA attributes.*/
#define AT32_ADVANCED_DMA                   FALSE
#define AT32_DMA_SUPPORTS_DMAMUX            TRUE
#define AT32_DMA_SUPPORTS_CSELR             FALSE

#define AT32_DMA1_NUM_CHANNELS              7
#define AT32_DMA2_NUM_CHANNELS              7

/* ETH attributes.*/
#define AT32_HAS_ETH                        FALSE

/* EXINT attributes.*/
#define AT32_EXINT_NUM_LINES                20
#define AT32_EXINT_INTEN_MASK               0x00000000U

/* Flash attributes.*/
#if defined(AT32F403AxG) || defined(AT32F407xG)
#define AT32_FLASH_NUMBER_OF_BANKS          2
#else
#define AT32_FLASH_NUMBER_OF_BANKS          1
#endif

#define AT32_FLASH_SECTOR_SIZE              2048U

#if !defined(AT32_FLASH_SECTORS_PER_BANK) || defined(__DOXYGEN__)
#if  defined(AT32F403AxG) || defined(AT32F407xG) || defined(AT32F403AxE) || defined(AT32F407xE)
#define AT32_FLASH_SECTORS_PER_BANK         256 /* Maximum, can be redefined.*/
#elif 
#define AT32_FLASH_SECTORS_PER_BANK         128 /* Maximum, can be redefined.*/
#endif
#endif

/* GPIO attributes.*/
#define AT32_HAS_GPIOA                      TRUE
#define AT32_HAS_GPIOB                      TRUE
#define AT32_HAS_GPIOC                      TRUE
#define AT32_HAS_GPIOD                      TRUE
#define AT32_HAS_GPIOE                      TRUE
#define AT32_HAS_GPIOF                      FALSE
#define AT32_HAS_GPIOG                      FALSE
#define AT32_GPIO_HAS_HDRV                  TRUE

/* I2C attributes.*/
#define AT32_HAS_I2C1                       TRUE
#define AT32_HAS_I2C2                       TRUE
#define AT32_HAS_I2C3                       TRUE

/* RTC attributes.*/
#define AT32_HAS_RTC                        TRUE
#define AT32_RTC_HAS_SUBSECONDS             FALSE
#define AT32_RTC_IS_CALENDAR                TRUE

/* SDIO attributes.*/
#define AT32_HAS_SDIO                       TRUE
#define AT32_SDC_SDIO_DMA_STREAM            AT32_DMA_STREAM_ID(2, 4)
#define AT32_HAS_SDIO2                      TRUE
#define AT32_SDC_SDIO2_DMA_STREAM           AT32_DMA_STREAM_ID(2, 5)

/* SPI attributes.*/
#define AT32_HAS_SPI1                       TRUE
#define AT32_SPI1_SUPPORTS_I2S              TRUE
#define AT32_SPI1_I2S_FULLDUPLEX            FALSE

#define AT32_HAS_SPI2                       TRUE
#define AT32_SPI2_SUPPORTS_I2S              TRUE
#define AT32_SPI2_I2S_FULLDUPLEX            TRUE

#define AT32_HAS_SPI3                       TRUE
#define AT32_SPI3_SUPPORTS_I2S              TRUE
#define AT32_SPI3_I2S_FULLDUPLEX            TRUE

#define AT32_HAS_SPI4                       TRUE
#define AT32_SPI4_SUPPORTS_I2S              TRUE
#define AT32_SPI4_I2S_FULLDUPLEX            FALSE

/* TMR attributes.*/
#define AT32_TMR_MAX_CHANNELS               4

#define AT32_HAS_TMR1                       TRUE
#define AT32_TMR1_IS_32BITS                 FALSE
#define AT32_TMR1_CHANNELS                  4

#define AT32_HAS_TMR2                       TRUE
#define AT32_TMR2_IS_32BITS                 TRUE
#define AT32_TMR2_CHANNELS                  4

#define AT32_HAS_TMR3                       TRUE
#define AT32_TMR3_IS_32BITS                 FALSE
#define AT32_TMR3_CHANNELS                  4

#define AT32_HAS_TMR4                       TRUE
#define AT32_TMR4_IS_32BITS                 FALSE
#define AT32_TMR4_CHANNELS                  4

#define AT32_HAS_TMR5                       TRUE
#define AT32_TMR5_IS_32BITS                 TRUE
#define AT32_TMR5_CHANNELS                  4

#define AT32_HAS_TMR6                       TRUE
#define AT32_TMR6_IS_32BITS                 FALSE
#define AT32_TMR6_CHANNELS                  0

#define AT32_HAS_TMR7                       TRUE
#define AT32_TMR7_IS_32BITS                 FALSE
#define AT32_TMR7_CHANNELS                  0

#define AT32_HAS_TMR8                       TRUE
#define AT32_TMR8_IS_32BITS                 FALSE
#define AT32_TMR8_CHANNELS                  4

#define AT32_HAS_TMR9                       TRUE
#define AT32_TMR9_IS_32BITS                 FALSE
#define AT32_TMR9_CHANNELS                  2

#define AT32_HAS_TMR10                      TRUE
#define AT32_TMR10_IS_32BITS                FALSE
#define AT32_TMR10_CHANNELS                 1

#define AT32_HAS_TMR11                      TRUE
#define AT32_TMR11_IS_32BITS                FALSE
#define AT32_TMR11_CHANNELS                 1

#define AT32_HAS_TMR12                      TRUE
#define AT32_TMR12_IS_32BITS                FALSE
#define AT32_TMR12_CHANNELS                 2

#define AT32_HAS_TMR13                      TRUE
#define AT32_TMR13_IS_32BITS                FALSE
#define AT32_TMR13_CHANNELS                 1

#define AT32_HAS_TMR14                      TRUE
#define AT32_TMR14_IS_32BITS                FALSE
#define AT32_TMR14_CHANNELS                 1

/* USART attributes.*/
#define AT32_HAS_USART1                     TRUE
#define AT32_HAS_USART2                     TRUE
#define AT32_HAS_USART3                     TRUE
#define AT32_HAS_UART4                      TRUE
#define AT32_HAS_UART5                      TRUE
#define AT32_HAS_USART6                     TRUE
#define AT32_HAS_UART7                      TRUE
#define AT32_HAS_UART8                      TRUE


/* USB attributes.*/
#define AT32_HAS_USB                        TRUE
#define AT32_USB_ACCESS_SCHEME_2x16         FALSE
#define AT32_USB_PMA_MAX_SIZE               1280
#define AT32_USB_HAS_BCDR                   FALSE
#define AT32_USB_HAS_CFG                    TRUE

/* IWDG attributes.*/
#define AT32_HAS_IWDG                       TRUE
#define AT32_IWDG_IS_WINDOWED               TRUE

/* FSMC attributes.*/
#define AT32_HAS_XMC                        TRUE

/* CRC attributes.*/
#define AT32_HAS_CRC                        TRUE
#define AT32_CRC_PROGRAMMABLE               FALSE

#endif /* defined(AT32F403AVx) */

#if defined(AT32F407Rx) || defined(AT32F407Vx)
/**
 * @name    AT32F407Rx/AT32F407Vx capabilities
 * @{
 */
/* ADC attributes.*/
#define AT32_HAS_ADC1                       TRUE
#define AT32_ADC1_DMA_MSK                   (AT32_DMA_STREAM_ID_MSK(1, 1))
#define AT32_ADC1_DMA_CHN                   0x00000000
#define AT32_HAS_ADC2                       TRUE
#define AT32_ADC2_DMA_MSK                   (AT32_DMA_STREAM_ID_MSK(1, 1))
#define AT32_ADC2_DMA_CHN                   0x00000000
#define AT32_HAS_ADC3                       TRUE
#define AT32_ADC3_DMA_MSK                   (AT32_DMA_STREAM_ID_MSK(2, 5))
#define AT32_ADC3_DMA_CHN                   0x00000000

/* CAN attributes.*/
#define AT32_HAS_CAN1                       TRUE
#define AT32_HAS_CAN2                       TRUE
#define AT32_CAN_MAX_FILTERS                14

/* DAC attributes.*/
#define AT32_HAS_DAC1_CH1                   TRUE
#define AT32_HAS_DAC1_CH2                   TRUE

/* DMA attributes.*/
#define AT32_ADVANCED_DMA                   FALSE
#define AT32_DMA_SUPPORTS_DMAMUX            TRUE
#define AT32_DMA_SUPPORTS_CSELR             FALSE

#define AT32_DMA1_NUM_CHANNELS              7
#define AT32_DMA2_NUM_CHANNELS              7

/* ETH attributes.*/
#define AT32_HAS_ETH                        TRUE

/* EXINT attributes.*/
#define AT32_EXINT_NUM_LINES                20
#define AT32_EXINT_INTEN_MASK               0x00000000U

/* Flash attributes.*/
#if defined(AT32F403AxG) || defined(AT32F407xG)
#define AT32_FLASH_NUMBER_OF_BANKS          2
#else
#define AT32_FLASH_NUMBER_OF_BANKS          1
#endif

#define AT32_FLASH_SECTOR_SIZE              2048U

#if !defined(AT32_FLASH_SECTORS_PER_BANK) || defined(__DOXYGEN__)
#if  defined(AT32F403AxG) || defined(AT32F407xG) || defined(AT32F403AxE) || defined(AT32F407xE)
#define AT32_FLASH_SECTORS_PER_BANK         256 /* Maximum, can be redefined.*/
#elif 
#define AT32_FLASH_SECTORS_PER_BANK         128 /* Maximum, can be redefined.*/
#endif
#endif

/* GPIO attributes.*/
#define AT32_HAS_GPIOA                      TRUE
#define AT32_HAS_GPIOB                      TRUE
#define AT32_HAS_GPIOC                      TRUE
#define AT32_HAS_GPIOD                      TRUE
#define AT32_HAS_GPIOE                      TRUE
#define AT32_HAS_GPIOF                      FALSE
#define AT32_HAS_GPIOG                      FALSE
#define AT32_GPIO_HAS_HDRV                  TRUE

/* I2C attributes.*/
#define AT32_HAS_I2C1                       TRUE
#define AT32_HAS_I2C2                       TRUE
#define AT32_HAS_I2C3                       TRUE

/* RTC attributes.*/
#define AT32_HAS_RTC                        TRUE
#define AT32_RTC_HAS_SUBSECONDS             FALSE
#define AT32_RTC_IS_CALENDAR                TRUE

/* SDIO attributes.*/
#define AT32_HAS_SDIO                       TRUE
#define AT32_SDC_SDIO_DMA_STREAM            AT32_DMA_STREAM_ID(2, 4)
#define AT32_HAS_SDIO2                      TRUE
#define AT32_SDC_SDIO2_DMA_STREAM           AT32_DMA_STREAM_ID(2, 5)

/* SPI attributes.*/
#define AT32_HAS_SPI1                       TRUE
#define AT32_SPI1_SUPPORTS_I2S              TRUE
#define AT32_SPI1_I2S_FULLDUPLEX            FALSE

#define AT32_HAS_SPI2                       TRUE
#define AT32_SPI2_SUPPORTS_I2S              TRUE
#define AT32_SPI2_I2S_FULLDUPLEX            TRUE

#define AT32_HAS_SPI3                       TRUE
#define AT32_SPI3_SUPPORTS_I2S              TRUE
#define AT32_SPI3_I2S_FULLDUPLEX            TRUE

#define AT32_HAS_SPI4                       TRUE
#define AT32_SPI4_SUPPORTS_I2S              TRUE
#define AT32_SPI4_I2S_FULLDUPLEX            FALSE

/* TMR attributes.*/
#define AT32_TMR_MAX_CHANNELS               4

#define AT32_HAS_TMR1                       TRUE
#define AT32_TMR1_IS_32BITS                 FALSE
#define AT32_TMR1_CHANNELS                  4

#define AT32_HAS_TMR2                       TRUE
#define AT32_TMR2_IS_32BITS                 TRUE
#define AT32_TMR2_CHANNELS                  4

#define AT32_HAS_TMR3                       TRUE
#define AT32_TMR3_IS_32BITS                 FALSE
#define AT32_TMR3_CHANNELS                  4

#define AT32_HAS_TMR4                       TRUE
#define AT32_TMR4_IS_32BITS                 FALSE
#define AT32_TMR4_CHANNELS                  4

#define AT32_HAS_TMR5                       TRUE
#define AT32_TMR5_IS_32BITS                 TRUE
#define AT32_TMR5_CHANNELS                  4

#define AT32_HAS_TMR6                       TRUE
#define AT32_TMR6_IS_32BITS                 FALSE
#define AT32_TMR6_CHANNELS                  0

#define AT32_HAS_TMR7                       TRUE
#define AT32_TMR7_IS_32BITS                 FALSE
#define AT32_TMR7_CHANNELS                  0

#define AT32_HAS_TMR8                       TRUE
#define AT32_TMR8_IS_32BITS                 FALSE
#define AT32_TMR8_CHANNELS                  4

#define AT32_HAS_TMR9                       TRUE
#define AT32_TMR9_IS_32BITS                 FALSE
#define AT32_TMR9_CHANNELS                  2

#define AT32_HAS_TMR10                      TRUE
#define AT32_TMR10_IS_32BITS                FALSE
#define AT32_TMR10_CHANNELS                 1

#define AT32_HAS_TMR11                      TRUE
#define AT32_TMR11_IS_32BITS                FALSE
#define AT32_TMR11_CHANNELS                 1

#define AT32_HAS_TMR12                      TRUE
#define AT32_TMR12_IS_32BITS                FALSE
#define AT32_TMR12_CHANNELS                 2

#define AT32_HAS_TMR13                      TRUE
#define AT32_TMR13_IS_32BITS                FALSE
#define AT32_TMR13_CHANNELS                 1

#define AT32_HAS_TMR14                      TRUE
#define AT32_TMR14_IS_32BITS                FALSE
#define AT32_TMR14_CHANNELS                 1

/* USART attributes.*/
#define AT32_HAS_USART1                     TRUE
#define AT32_HAS_USART2                     TRUE
#define AT32_HAS_USART3                     TRUE
#define AT32_HAS_UART4                      TRUE
#define AT32_HAS_UART5                      TRUE
#define AT32_HAS_USART6                     TRUE
#define AT32_HAS_UART7                      TRUE
#define AT32_HAS_UART8                      TRUE

/* USB attributes.*/
#define AT32_HAS_USB                        TRUE
#define AT32_USB_ACCESS_SCHEME_2x16         FALSE
#define AT32_USB_PMA_MAX_SIZE               1280
#define AT32_USB_HAS_BCDR                   FALSE
#define AT32_USB_HAS_CFG                    TRUE

/* IWDG attributes.*/
#define AT32_HAS_IWDG                       TRUE
#define AT32_IWDG_IS_WINDOWED               TRUE

/* FSMC attributes.*/
#define AT32_HAS_XMC                        TRUE

/* CRC attributes.*/
#define AT32_HAS_CRC                        TRUE
#define AT32_CRC_PROGRAMMABLE               FALSE

#endif /* defined(AT32F407Rx) || defined(AT32F407Vx) */
#endif /* AT32_REGISTRY_H */

/** @} */
