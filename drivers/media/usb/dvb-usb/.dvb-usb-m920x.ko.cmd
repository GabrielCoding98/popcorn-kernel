cmd_drivers/media/usb/dvb-usb/dvb-usb-m920x.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/usb/dvb-usb/dvb-usb-m920x.ko drivers/media/usb/dvb-usb/dvb-usb-m920x.o drivers/media/usb/dvb-usb/dvb-usb-m920x.mod.o ;  true