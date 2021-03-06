/*
 * Copyright 2020 NXP
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
#define UART1_POLLFORACTIVITY_RX_GPIO_GPIO                                 GPIO1   /*!< GPIO device name: GPIO1 */
#define UART1_POLLFORACTIVITY_RX_GPIO_PORT                                 GPIO1   /*!< PORT device name: GPIO1 */
#define UART1_POLLFORACTIVITY_RX_GPIO_PIN                                     7U   /*!< GPIO1 pin index: 7 */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void UART1_PollForActivity(void);

/* GPIO_AD_B0_07 (number 101), UART1_RXD/J17[4] */
#define UART1_RX_PERIPHERAL                                              LPUART1   /*!< Device name: LPUART1 */
#define UART1_RX_SIGNAL                                                       RX   /*!< LPUART1 signal: RX */

/* GPIO_AD_B0_06 (number 105), UART1_TXD/J17[6] */
#define UART1_TX_PERIPHERAL                                              LPUART1   /*!< Device name: LPUART1 */
#define UART1_TX_SIGNAL                                                       TX   /*!< LPUART1 signal: TX */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void UART1_InitPins(void);


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void UART1_RestoreDefault(void);

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
