cmd_drivers/bluetooth/btmrvl_sdio.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/bluetooth/btmrvl_sdio.ko drivers/bluetooth/btmrvl_sdio.o drivers/bluetooth/btmrvl_sdio.mod.o ;  true
