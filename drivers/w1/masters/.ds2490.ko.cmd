cmd_drivers/w1/masters/ds2490.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/w1/masters/ds2490.ko drivers/w1/masters/ds2490.o drivers/w1/masters/ds2490.mod.o ;  true
