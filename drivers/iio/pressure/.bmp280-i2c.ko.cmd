cmd_drivers/iio/pressure/bmp280-i2c.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/iio/pressure/bmp280-i2c.ko drivers/iio/pressure/bmp280-i2c.o drivers/iio/pressure/bmp280-i2c.mod.o ;  true