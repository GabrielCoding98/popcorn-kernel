cmd_net/bluetooth/bluetooth.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/bluetooth/bluetooth.ko net/bluetooth/bluetooth.o net/bluetooth/bluetooth.mod.o ;  true