# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 3.14.0)

# armgccで必要な環境変数 CMakeLists.txtでフルパスを書くのはあまりよくない。
SET(ENV{ARMGCC_DIR} /usr/local/Cellar/arm-none-eabi-gcc/10.3-2021.07)

# Path to toolchain file. This one has to be before 'project()' below
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/armgcc.cmake)

# ENABLE ASM
ENABLE_LANGUAGE(C CXX ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})

SET(EXECUTABLE_OUTPUT_PATH ${ProjDirPath}/${CMAKE_BUILD_TYPE})
SET(LIBRARY_OUTPUT_PATH ${ProjDirPath}/${CMAKE_BUILD_TYPE})

project(AddPeripheral VERSION 1.0.0)

set(MCUX_SDK_PROJECT_NAME AddPeripheral.elf)

include(${ProjDirPath}/./flags.cmake)

include(${ProjDirPath}/./config.cmake)

add_executable(${MCUX_SDK_PROJECT_NAME}
"${ProjDirPath}/board/board.c"
"${ProjDirPath}/board/board.h"
"${ProjDirPath}/board/clock_config.c"
"${ProjDirPath}/board/clock_config.h"
"${ProjDirPath}/board/dcd.c"
"${ProjDirPath}/board/dcd.h"
"${ProjDirPath}/board/pin_mux.c"
"${ProjDirPath}/board/pin_mux.h"
"${ProjDirPath}/board/peripherals.c"
"${ProjDirPath}/source/hello_world.c"
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
${ProjDirPath}/board
)

SET(MCUSDK_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../sdk/SDK_2_10_0_MIMXRT1021xxxxx)

set(CMAKE_MODULE_PATH
${ProjDirPath}/.
${ProjDirPath}/CMSIS
${ProjDirPath}/component/lists
${ProjDirPath}/component/uart
${ProjDirPath}/device
${ProjDirPath}/drivers
${ProjDirPath}/startup
${ProjDirPath}/utilities
${ProjDirPath}/xip
${MCUSDK_DIR}/devices/MIMXRT1021/drivers
)

# include modules
include(utility_debug_console_lite_MIMXRT1021)

include(utility_assert_lite_MIMXRT1021)

include(driver_clock_MIMXRT1021)

include(driver_common_MIMXRT1021)

include(device_MIMXRT1021_CMSIS_MIMXRT1021)

include(component_lpuart_adapter_MIMXRT1021)

include(component_lists_MIMXRT1021)

include(driver_lpuart_MIMXRT1021)

include(device_MIMXRT1021_startup_MIMXRT1021)

include(driver_iomuxc_MIMXRT1021)

include(driver_igpio_MIMXRT1021)

include(driver_xip_device_MIMXRT1021)

include(driver_xip_board_evkmimxrt1020_MIMXRT1021)

include(CMSIS_Include_core_cm_MIMXRT1021)

include(utilities_misc_utilities_MIMXRT1021)

include(device_MIMXRT1021_system_MIMXRT1021)

#cmake module for ADC peripheral
include(driver_adc_12b1msps_sar_MIMXRT1021)


TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--start-group)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE m)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE c)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE gcc)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE nosys)

TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--end-group)

ADD_CUSTOM_COMMAND(TARGET ${MCUX_SDK_PROJECT_NAME} POST_BUILD COMMAND ${CMAKE_OBJCOPY}
-Obinary ${EXECUTABLE_OUTPUT_PATH}/${MCUX_SDK_PROJECT_NAME} ${EXECUTABLE_OUTPUT_PATH}/hello_world.bin)

