cmd_drivers/hwmon/gpio-fan.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hwmon/gpio-fan.ko drivers/hwmon/gpio-fan.o drivers/hwmon/gpio-fan.mod.o ;  true