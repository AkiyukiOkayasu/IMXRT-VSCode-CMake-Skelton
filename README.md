# IMXRT-VSCode-CMake-Skelton

## ビルドターゲット

QSPI Flashを使ったXIPとSDRAMも使用する場合は
- FLEXSPI_NOR_SDRAM_DEBUG
- FLEXSPI_NOR_SDRAM_RELEASE
のいずれかにする。

$ cmake -DCMAKE_BUILD_TYPE=FLEXSPI_NOR_SDRAM_DEBUG ..

## （オプション）elfをhexに変換する
デフォルトではelfとbinが書き出されるが、elfをhexに変換したい場合がある。
objcopyを使って変換する。

$ arm-none-eabi-objcopy -O ihex hello_world.elf hello_world.hex
