cmd_drivers/usb/misc/cytherm.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/misc/cytherm.ko drivers/usb/misc/cytherm.o drivers/usb/misc/cytherm.mod.o ;  true