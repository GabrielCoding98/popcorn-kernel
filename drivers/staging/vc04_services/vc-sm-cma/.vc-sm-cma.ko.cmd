cmd_drivers/staging/vc04_services/vc-sm-cma/vc-sm-cma.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/staging/vc04_services/vc-sm-cma/vc-sm-cma.ko drivers/staging/vc04_services/vc-sm-cma/vc-sm-cma.o drivers/staging/vc04_services/vc-sm-cma/vc-sm-cma.mod.o ;  true