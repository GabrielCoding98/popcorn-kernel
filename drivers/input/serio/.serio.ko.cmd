cmd_drivers/input/serio/serio.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/input/serio/serio.ko drivers/input/serio/serio.o drivers/input/serio/serio.mod.o ;  true