cmd_drivers/hwmon/lm75.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hwmon/lm75.ko drivers/hwmon/lm75.o drivers/hwmon/lm75.mod.o ;  true