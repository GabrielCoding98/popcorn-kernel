cmd_drivers/iio/pressure/bmp280.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/iio/pressure/bmp280.ko drivers/iio/pressure/bmp280.o drivers/iio/pressure/bmp280.mod.o ;  true
