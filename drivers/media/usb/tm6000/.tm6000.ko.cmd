cmd_drivers/media/usb/tm6000/tm6000.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/usb/tm6000/tm6000.ko drivers/media/usb/tm6000/tm6000.o drivers/media/usb/tm6000/tm6000.mod.o ;  true