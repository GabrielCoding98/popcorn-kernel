cmd_drivers/staging/fbtft/flexfb.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/staging/fbtft/flexfb.ko drivers/staging/fbtft/flexfb.o drivers/staging/fbtft/flexfb.mod.o ;  true
