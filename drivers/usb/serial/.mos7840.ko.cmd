cmd_drivers/usb/serial/mos7840.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/serial/mos7840.ko drivers/usb/serial/mos7840.o drivers/usb/serial/mos7840.mod.o ;  true