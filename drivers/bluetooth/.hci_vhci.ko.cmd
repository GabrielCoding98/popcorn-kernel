cmd_drivers/bluetooth/hci_vhci.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/bluetooth/hci_vhci.ko drivers/bluetooth/hci_vhci.o drivers/bluetooth/hci_vhci.mod.o ;  true