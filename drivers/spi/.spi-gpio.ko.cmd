cmd_drivers/spi/spi-gpio.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/spi/spi-gpio.ko drivers/spi/spi-gpio.o drivers/spi/spi-gpio.mod.o ;  true