cmd_drivers/usb/storage/ums-onetouch.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/storage/ums-onetouch.ko drivers/usb/storage/ums-onetouch.o drivers/usb/storage/ums-onetouch.mod.o ;  true
