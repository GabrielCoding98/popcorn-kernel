cmd_drivers/iio/industrialio.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/iio/industrialio.ko drivers/iio/industrialio.o drivers/iio/industrialio.mod.o ;  true