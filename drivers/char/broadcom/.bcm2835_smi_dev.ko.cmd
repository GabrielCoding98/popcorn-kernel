cmd_drivers/char/broadcom/bcm2835_smi_dev.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/char/broadcom/bcm2835_smi_dev.ko drivers/char/broadcom/bcm2835_smi_dev.o drivers/char/broadcom/bcm2835_smi_dev.mod.o ;  true
