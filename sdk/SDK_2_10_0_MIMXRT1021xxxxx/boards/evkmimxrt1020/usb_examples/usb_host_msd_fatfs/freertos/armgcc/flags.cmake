SET(CMAKE_ASM_FLAGS_SDRAM_RELEASE " \
    ${CMAKE_ASM_FLAGS_SDRAM_RELEASE} \
    -D__STARTUP_CLEAR_BSS \
    -DNDEBUG \
    -D__STARTUP_INITIALIZE_NONCACHEDATA \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    -mthumb \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_ASM_FLAGS_RELEASE " \
    ${CMAKE_ASM_FLAGS_RELEASE} \
    -DNDEBUG \
    -D__STARTUP_CLEAR_BSS \
    -D__STARTUP_INITIALIZE_NONCACHEDATA \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    -mthumb \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_ASM_FLAGS_FLEXSPI_NOR_DEBUG " \
    ${CMAKE_ASM_FLAGS_FLEXSPI_NOR_DEBUG} \
    -D__STARTUP_CLEAR_BSS \
    -DDEBUG \
    -D__STARTUP_INITIALIZE_NONCACHEDATA \
    -g \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    -mthumb \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_ASM_FLAGS_FLEXSPI_NOR_RELEASE " \
    ${CMAKE_ASM_FLAGS_FLEXSPI_NOR_RELEASE} \
    -D__STARTUP_CLEAR_BSS \
    -DNDEBUG \
    -D__STARTUP_INITIALIZE_NONCACHEDATA \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    -mthumb \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_C_FLAGS_SDRAM_RELEASE " \
    ${CMAKE_C_FLAGS_SDRAM_RELEASE} \
    -DDATA_SECTION_IS_CACHEABLE=1 \
    -DSKIP_SYSCLK_INIT \
    -DNDEBUG \
    -DCPU_MIMXRT1021DAG5A \
    -DUSB_STACK_FREERTOS \
    -DPRINTF_ADVANCED_ENABLE=1 \
    -DUSB_STACK_FREERTOS_HEAP_SIZE=32768 \
    -DconfigAPPLICATION_ALLOCATED_HEAP=1 \
    -DSDK_OS_FREE_RTOS \
    -DFSL_OSA_BM_TASK_ENABLE=0 \
    -DFSL_OSA_BM_TIMER_CONFIG=0 \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DSDK_DEBUGCONSOLE=1 \
    -DMCUXPRESSO_SDK \
    -Os \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_C_FLAGS_RELEASE " \
    ${CMAKE_C_FLAGS_RELEASE} \
    -D_DEBUG=0 \
    -DNDEBUG \
    -DCPU_MIMXRT1021DAG5A \
    -DUSB_STACK_FREERTOS \
    -DPRINTF_ADVANCED_ENABLE=1 \
    -DUSB_STACK_FREERTOS_HEAP_SIZE=32768 \
    -DconfigAPPLICATION_ALLOCATED_HEAP=1 \
    -DSDK_OS_FREE_RTOS \
    -DFSL_OSA_BM_TASK_ENABLE=0 \
    -DFSL_OSA_BM_TIMER_CONFIG=0 \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DSDK_DEBUGCONSOLE=1 \
    -DMCUXPRESSO_SDK \
    -Os \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_C_FLAGS_FLEXSPI_NOR_DEBUG " \
    ${CMAKE_C_FLAGS_FLEXSPI_NOR_DEBUG} \
    -DXIP_EXTERNAL_FLASH=1 \
    -DXIP_BOOT_HEADER_ENABLE=1 \
    -DDEBUG \
    -DCPU_MIMXRT1021DAG5A \
    -DUSB_STACK_FREERTOS \
    -DPRINTF_ADVANCED_ENABLE=1 \
    -DUSB_STACK_FREERTOS_HEAP_SIZE=32768 \
    -DconfigAPPLICATION_ALLOCATED_HEAP=1 \
    -DSDK_OS_FREE_RTOS \
    -DFSL_OSA_BM_TASK_ENABLE=0 \
    -DFSL_OSA_BM_TIMER_CONFIG=0 \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DSDK_DEBUGCONSOLE=1 \
    -DMCUXPRESSO_SDK \
    -g \
    -O0 \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_C_FLAGS_FLEXSPI_NOR_RELEASE " \
    ${CMAKE_C_FLAGS_FLEXSPI_NOR_RELEASE} \
    -DXIP_EXTERNAL_FLASH=1 \
    -DXIP_BOOT_HEADER_ENABLE=1 \
    -DNDEBUG \
    -DCPU_MIMXRT1021DAG5A \
    -DUSB_STACK_FREERTOS \
    -DPRINTF_ADVANCED_ENABLE=1 \
    -DUSB_STACK_FREERTOS_HEAP_SIZE=32768 \
    -DconfigAPPLICATION_ALLOCATED_HEAP=1 \
    -DSDK_OS_FREE_RTOS \
    -DFSL_OSA_BM_TASK_ENABLE=0 \
    -DFSL_OSA_BM_TIMER_CONFIG=0 \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DSDK_DEBUGCONSOLE=1 \
    -DMCUXPRESSO_SDK \
    -Os \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -std=gnu99 \
")
SET(CMAKE_CXX_FLAGS_SDRAM_RELEASE " \
    ${CMAKE_CXX_FLAGS_SDRAM_RELEASE} \
    -DNDEBUG \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DMCUXPRESSO_SDK \
    -Os \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -fno-rtti \
    -fno-exceptions \
")
SET(CMAKE_CXX_FLAGS_RELEASE " \
    ${CMAKE_CXX_FLAGS_RELEASE} \
    -DNDEBUG \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DMCUXPRESSO_SDK \
    -Os \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -fno-rtti \
    -fno-exceptions \
")
SET(CMAKE_CXX_FLAGS_FLEXSPI_NOR_DEBUG " \
    ${CMAKE_CXX_FLAGS_FLEXSPI_NOR_DEBUG} \
    -DDEBUG \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DMCUXPRESSO_SDK \
    -g \
    -O0 \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -fno-rtti \
    -fno-exceptions \
")
SET(CMAKE_CXX_FLAGS_FLEXSPI_NOR_RELEASE " \
    ${CMAKE_CXX_FLAGS_FLEXSPI_NOR_RELEASE} \
    -DNDEBUG \
    -DSERIAL_PORT_TYPE_UART=1 \
    -DMCUXPRESSO_SDK \
    -Os \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    -mthumb \
    -MMD \
    -MP \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mapcs \
    -fno-rtti \
    -fno-exceptions \
")
SET(CMAKE_EXE_LINKER_FLAGS_SDRAM_RELEASE " \
    ${CMAKE_EXE_LINKER_FLAGS_SDRAM_RELEASE} \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    --specs=nano.specs \
    --specs=nosys.specs \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mthumb \
    -mapcs \
    -Xlinker \
    --gc-sections \
    -Xlinker \
    -static \
    -Xlinker \
    -z \
    -Xlinker \
    muldefs \
    -Xlinker \
    -Map=output.map \
    -Wl,--print-memory-usage \
    -Xlinker \
    --defsym=__stack_size__=0x2000 \
    -Xlinker \
    --defsym=__heap_size__=0x2000 \
    -T${ProjDirPath}/MIMXRT1021xxxxx_sdram.ld -static \
")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE " \
    ${CMAKE_EXE_LINKER_FLAGS_RELEASE} \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    --specs=nano.specs \
    --specs=nosys.specs \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mthumb \
    -mapcs \
    -Xlinker \
    --gc-sections \
    -Xlinker \
    -static \
    -Xlinker \
    -z \
    -Xlinker \
    muldefs \
    -Xlinker \
    -Map=output.map \
    -Wl,--print-memory-usage \
    -Xlinker \
    --defsym=__stack_size__=0x2000 \
    -Xlinker \
    --defsym=__heap_size__=0x2000 \
    -T${ProjDirPath}/MIMXRT1021xxxxx_ram.ld -static \
")
SET(CMAKE_EXE_LINKER_FLAGS_FLEXSPI_NOR_DEBUG " \
    ${CMAKE_EXE_LINKER_FLAGS_FLEXSPI_NOR_DEBUG} \
    -g \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    --specs=nano.specs \
    --specs=nosys.specs \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mthumb \
    -mapcs \
    -Xlinker \
    --gc-sections \
    -Xlinker \
    -static \
    -Xlinker \
    -z \
    -Xlinker \
    muldefs \
    -Xlinker \
    -Map=output.map \
    -Wl,--print-memory-usage \
    -Xlinker \
    --defsym=__stack_size__=0x2000 \
    -Xlinker \
    --defsym=__heap_size__=0x2000 \
    -T${ProjDirPath}/MIMXRT1021xxxxx_flexspi_nor.ld -static \
")
SET(CMAKE_EXE_LINKER_FLAGS_FLEXSPI_NOR_RELEASE " \
    ${CMAKE_EXE_LINKER_FLAGS_FLEXSPI_NOR_RELEASE} \
    -mcpu=cortex-m7 \
    -Wall \
    -mfloat-abi=hard \
    -mfpu=fpv5-d16 \
    --specs=nano.specs \
    --specs=nosys.specs \
    -fno-common \
    -ffunction-sections \
    -fdata-sections \
    -ffreestanding \
    -fno-builtin \
    -mthumb \
    -mapcs \
    -Xlinker \
    --gc-sections \
    -Xlinker \
    -static \
    -Xlinker \
    -z \
    -Xlinker \
    muldefs \
    -Xlinker \
    -Map=output.map \
    -Wl,--print-memory-usage \
    -Xlinker \
    --defsym=__stack_size__=0x2000 \
    -Xlinker \
    --defsym=__heap_size__=0x2000 \
    -T${ProjDirPath}/MIMXRT1021xxxxx_flexspi_nor.ld -static \
")
