cmd_drivers/media/usb/em28xx/em28xx-dvb.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/usb/em28xx/em28xx-dvb.ko drivers/media/usb/em28xx/em28xx-dvb.o drivers/media/usb/em28xx/em28xx-dvb.mod.o ;  true