cmd_drivers/iio/common/ms_sensors/ms_sensors_i2c.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/iio/common/ms_sensors/ms_sensors_i2c.ko drivers/iio/common/ms_sensors/ms_sensors_i2c.o drivers/iio/common/ms_sensors/ms_sensors_i2c.mod.o ;  true