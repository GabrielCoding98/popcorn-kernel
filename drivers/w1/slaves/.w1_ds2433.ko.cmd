cmd_drivers/w1/slaves/w1_ds2433.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/w1/slaves/w1_ds2433.ko drivers/w1/slaves/w1_ds2433.o drivers/w1/slaves/w1_ds2433.mod.o ;  true