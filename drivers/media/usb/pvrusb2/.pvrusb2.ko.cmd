cmd_drivers/media/usb/pvrusb2/pvrusb2.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/usb/pvrusb2/pvrusb2.ko drivers/media/usb/pvrusb2/pvrusb2.o drivers/media/usb/pvrusb2/pvrusb2.mod.o ;  true