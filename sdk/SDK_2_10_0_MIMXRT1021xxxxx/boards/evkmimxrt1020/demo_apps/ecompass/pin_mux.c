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

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v9.0
processor: MIMXRT1021xxxxx
package_id: MIMXRT1021DAG5A
mcu_data: ksdk2_0
processor_version: 9.0.1
board: MIMXRT1020-EVK
pin_labels:
- {pin_num: '106', pin_signal: GPIO_AD_B0_05, label: 'JTAG_nTRST/J16[3]/USER_LED/J17[5]', identifier: USER_LED}
- {pin_num: '30', pin_signal: GPIO_SD_B1_02, label: I2C4_SCL, identifier: I2C4_SCL}
- {pin_num: '28', pin_signal: GPIO_SD_B1_03, label: I2C4_SDA, identifier: I2C4_SDA}
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
- options: {callFromInitBoot: 'true', prefix: BOARD_, coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '101', peripheral: LPUART1, signal: RX, pin_signal: GPIO_AD_B0_07, software_input_on: Disable, open_drain: Disable}
  - {pin_num: '105', peripheral: LPUART1, signal: TX, pin_signal: GPIO_AD_B0_06, software_input_on: Disable, open_drain: Disable}
  - {pin_num: '30', peripheral: LPI2C4, signal: SCL, pin_signal: GPIO_SD_B1_02, software_input_on: Enable, open_drain: Enable, pull_up_down_config: Pull_Up_22K_Ohm}
  - {pin_num: '28', peripheral: LPI2C4, signal: SDA, pin_signal: GPIO_SD_B1_03, software_input_on: Enable, open_drain: Enable, pull_up_down_config: Pull_Up_22K_Ohm}
  - {pin_num: '106', peripheral: GPIO1, signal: 'gpio_io, 05', pin_signal: GPIO_AD_B0_05, open_drain: Disable, drive_strength: R0_4}
  - {pin_num: '97', peripheral: ARM, signal: arm_trace_swo, pin_signal: GPIO_AD_B0_11, slew_rate: Slow}
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

  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_05_GPIO1_IO05, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_06_LPUART1_TX, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_07_LPUART1_RX, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_11_ARM_CM7_TRACE_SWO, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_02_LPI2C4_SCL, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_03_LPI2C4_SDA, 1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_05_GPIO1_IO05, 0x70A0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_06_LPUART1_TX, 0x10B0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_07_LPUART1_RX, 0x10B0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_11_ARM_CM7_TRACE_SWO, 0x10B0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_02_LPI2C4_SCL, 0xD8B0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_03_LPI2C4_SDA, 0xD8B0U); 
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
