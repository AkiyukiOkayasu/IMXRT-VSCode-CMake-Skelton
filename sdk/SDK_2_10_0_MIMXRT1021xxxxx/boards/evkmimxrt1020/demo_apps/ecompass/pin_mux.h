/*
 * Copyright 2019-2020 ,2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* GPIO_AD_B0_07 (number 101), UART1_RXD/J17[4] */
/* Routed pin properties */
#define BOARD_UART1_RXD_PERIPHERAL                                       LPUART1   /*!< Peripheral name */
#define BOARD_UART1_RXD_SIGNAL                                                RX   /*!< Signal name */

/* GPIO_AD_B0_06 (number 105), UART1_TXD/J17[6] */
/* Routed pin properties */
#define BOARD_UART1_TXD_PERIPHERAL                                       LPUART1   /*!< Peripheral name */
#define BOARD_UART1_TXD_SIGNAL                                                TX   /*!< Signal name */

/* GPIO_SD_B1_02 (number 30), I2C4_SCL */
/* Routed pin properties */
#define BOARD_I2C4_SCL_PERIPHERAL                                         LPI2C4   /*!< Peripheral name */
#define BOARD_I2C4_SCL_SIGNAL                                                SCL   /*!< Signal name */

/* GPIO_SD_B1_03 (number 28), I2C4_SDA */
/* Routed pin properties */
#define BOARD_I2C4_SDA_PERIPHERAL                                         LPI2C4   /*!< Peripheral name */
#define BOARD_I2C4_SDA_SIGNAL                                                SDA   /*!< Signal name */

/* GPIO_AD_B0_05 (number 106), JTAG_nTRST/J16[3]/USER_LED/J17[5] */
/* Routed pin properties */
#define BOARD_USER_LED_PERIPHERAL                                          GPIO1   /*!< Peripheral name */
#define BOARD_USER_LED_SIGNAL                                            gpio_io   /*!< Signal name */
#define BOARD_USER_LED_CHANNEL                                                5U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_USER_LED_GPIO                                                GPIO1   /*!< GPIO peripheral base pointer */
#define BOARD_USER_LED_GPIO_PIN                                               5U   /*!< GPIO pin number */
#define BOARD_USER_LED_GPIO_PIN_MASK                                  (1U << 5U)   /*!< GPIO pin mask */
#define BOARD_USER_LED_PORT                                                GPIO1   /*!< PORT peripheral base pointer */
#define BOARD_USER_LED_PIN                                                    5U   /*!< PORT pin number */
#define BOARD_USER_LED_PIN_MASK                                       (1U << 5U)   /*!< PORT pin mask */

/* GPIO_AD_B0_11 (number 97), ENET_CRS_DV/U11[18]/J19[3] */
/* Routed pin properties */
#define BOARD_ENET_CRS_DV_PERIPHERAL                                         ARM   /*!< Peripheral name */
#define BOARD_ENET_CRS_DV_SIGNAL                                   arm_trace_swo   /*!< Signal name */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
