cmd_drivers/i2c/busses/i2c-gpio.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/i2c/busses/i2c-gpio.ko drivers/i2c/busses/i2c-gpio.o drivers/i2c/busses/i2c-gpio.mod.o ;  true
