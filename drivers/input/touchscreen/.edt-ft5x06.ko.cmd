cmd_drivers/input/touchscreen/edt-ft5x06.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/input/touchscreen/edt-ft5x06.ko drivers/input/touchscreen/edt-ft5x06.o drivers/input/touchscreen/edt-ft5x06.mod.o ;  true