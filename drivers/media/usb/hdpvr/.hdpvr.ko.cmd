cmd_drivers/media/usb/hdpvr/hdpvr.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/usb/hdpvr/hdpvr.ko drivers/media/usb/hdpvr/hdpvr.o drivers/media/usb/hdpvr/hdpvr.mod.o ;  true