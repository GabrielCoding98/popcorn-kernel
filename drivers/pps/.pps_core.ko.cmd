cmd_drivers/pps/pps_core.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/pps/pps_core.ko drivers/pps/pps_core.o drivers/pps/pps_core.mod.o ;  true
