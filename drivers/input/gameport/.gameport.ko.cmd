cmd_drivers/input/gameport/gameport.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/input/gameport/gameport.ko drivers/input/gameport/gameport.o drivers/input/gameport/gameport.mod.o ;  true
