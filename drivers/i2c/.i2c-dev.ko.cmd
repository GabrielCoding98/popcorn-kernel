cmd_drivers/i2c/i2c-dev.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/i2c/i2c-dev.ko drivers/i2c/i2c-dev.o drivers/i2c/i2c-dev.mod.o ;  true
