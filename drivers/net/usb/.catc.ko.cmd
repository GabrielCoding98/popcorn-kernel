cmd_drivers/net/usb/catc.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/net/usb/catc.ko drivers/net/usb/catc.o drivers/net/usb/catc.mod.o ;  true
