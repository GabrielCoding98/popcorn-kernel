cmd_drivers/rtc/rtc-em3027.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/rtc/rtc-em3027.ko drivers/rtc/rtc-em3027.o drivers/rtc/rtc-em3027.mod.o ;  true
