cmd_net/6lowpan/nhc_dest.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/6lowpan/nhc_dest.ko net/6lowpan/nhc_dest.o net/6lowpan/nhc_dest.mod.o ;  true
