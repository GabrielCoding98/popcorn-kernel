cmd_drivers/net/usb/qmi_wwan.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/net/usb/qmi_wwan.ko drivers/net/usb/qmi_wwan.o drivers/net/usb/qmi_wwan.mod.o ;  true
