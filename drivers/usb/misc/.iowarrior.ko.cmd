cmd_drivers/usb/misc/iowarrior.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/misc/iowarrior.ko drivers/usb/misc/iowarrior.o drivers/usb/misc/iowarrior.mod.o ;  true
