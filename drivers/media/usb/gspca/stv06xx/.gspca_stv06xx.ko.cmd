cmd_drivers/media/usb/gspca/stv06xx/gspca_stv06xx.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/usb/gspca/stv06xx/gspca_stv06xx.ko drivers/media/usb/gspca/stv06xx/gspca_stv06xx.o drivers/media/usb/gspca/stv06xx/gspca_stv06xx.mod.o ;  true