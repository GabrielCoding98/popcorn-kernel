cmd_drivers/hwmon/ina2xx.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hwmon/ina2xx.ko drivers/hwmon/ina2xx.o drivers/hwmon/ina2xx.mod.o ;  true