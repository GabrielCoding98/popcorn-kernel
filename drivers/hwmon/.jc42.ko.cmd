cmd_drivers/hwmon/jc42.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hwmon/jc42.ko drivers/hwmon/jc42.o drivers/hwmon/jc42.mod.o ;  true
