cmd_drivers/net/ethernet/qualcomm/qcaspi.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/net/ethernet/qualcomm/qcaspi.ko drivers/net/ethernet/qualcomm/qcaspi.o drivers/net/ethernet/qualcomm/qcaspi.mod.o ;  true
