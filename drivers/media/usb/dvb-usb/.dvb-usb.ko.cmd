cmd_drivers/media/usb/dvb-usb/dvb-usb.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/usb/dvb-usb/dvb-usb.ko drivers/media/usb/dvb-usb/dvb-usb.o drivers/media/usb/dvb-usb/dvb-usb.mod.o ;  true
