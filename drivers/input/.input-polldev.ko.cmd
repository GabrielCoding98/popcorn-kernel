cmd_drivers/input/input-polldev.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/input/input-polldev.ko drivers/input/input-polldev.o drivers/input/input-polldev.mod.o ;  true
