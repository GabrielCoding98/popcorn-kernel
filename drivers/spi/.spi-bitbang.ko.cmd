cmd_drivers/spi/spi-bitbang.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/spi/spi-bitbang.ko drivers/spi/spi-bitbang.o drivers/spi/spi-bitbang.mod.o ;  true