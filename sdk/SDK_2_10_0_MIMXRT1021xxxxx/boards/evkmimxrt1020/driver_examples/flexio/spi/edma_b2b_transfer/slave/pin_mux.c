/*
 * Copyright 2020 ,2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v9.0
processor: MIMXRT1021xxxxx
package_id: MIMXRT1021DAG5A
mcu_data: ksdk2_0
processor_version: 9.0.1
board: MIMXRT1020-EVK
power_domains: {NVCC_GPIO: '3.3'}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '101', peripheral: LPUART1, signal: RX, pin_signal: GPIO_AD_B0_07, software_input_on: Disable, open_drain: Disable, speed: MHZ_100, hysteresis_enable: Disable}
  - {pin_num: '105', peripheral: LPUART1, signal: TX, pin_signal: GPIO_AD_B0_06, software_input_on: Disable, open_drain: Disable, hysteresis_enable: Disable}
  - {pin_num: '74', peripheral: FLEXIO1, signal: 'IO, 00', pin_signal: GPIO_AD_B1_15, direction: OUTPUT, slew_rate: Fast, software_input_on: Disable, open_drain: Disable,
    hysteresis_enable: Disable}
  - {pin_num: '75', peripheral: FLEXIO1, signal: 'IO, 01', pin_signal: GPIO_AD_B1_14, direction: INPUT, slew_rate: Fast, software_input_on: Enable, open_drain: Disable,
    hysteresis_enable: Disable}
  - {pin_num: '76', peripheral: FLEXIO1, signal: 'IO, 02', pin_signal: GPIO_AD_B1_13, direction: INPUT, slew_rate: Fast, software_input_on: Enable, hysteresis_enable: Disable}
  - {pin_num: '78', peripheral: FLEXIO1, signal: 'IO, 03', pin_signal: GPIO_AD_B1_12, direction: INPUT, slew_rate: Fast, software_input_on: Enable, hysteresis_enable: Disable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           

  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_06_LPUART1_TX, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_07_LPUART1_RX, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_12_FLEXIO1_FLEXIO03, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_13_FLEXIO1_FLEXIO02, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_14_FLEXIO1_FLEXIO01, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_15_FLEXIO1_FLEXIO00, 0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_06_LPUART1_TX, 0x10B0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_07_LPUART1_RX, 0x10B0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B1_12_FLEXIO1_FLEXIO03, 0x10B1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B1_13_FLEXIO1_FLEXIO02, 0x10B1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B1_14_FLEXIO1_FLEXIO01, 0x10B1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B1_15_FLEXIO1_FLEXIO00, 0x10B1U); 
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
