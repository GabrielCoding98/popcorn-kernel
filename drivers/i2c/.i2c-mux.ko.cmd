cmd_drivers/i2c/i2c-mux.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/i2c/i2c-mux.ko drivers/i2c/i2c-mux.o drivers/i2c/i2c-mux.mod.o ;  true
