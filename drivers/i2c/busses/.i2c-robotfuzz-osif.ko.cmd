cmd_drivers/i2c/busses/i2c-robotfuzz-osif.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/i2c/busses/i2c-robotfuzz-osif.ko drivers/i2c/busses/i2c-robotfuzz-osif.o drivers/i2c/busses/i2c-robotfuzz-osif.mod.o ;  true