cmd_drivers/usb/class/usblp.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/class/usblp.ko drivers/usb/class/usblp.o drivers/usb/class/usblp.mod.o ;  true