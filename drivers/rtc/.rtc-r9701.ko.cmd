cmd_drivers/rtc/rtc-r9701.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/rtc/rtc-r9701.ko drivers/rtc/rtc-r9701.o drivers/rtc/rtc-r9701.mod.o ;  true
