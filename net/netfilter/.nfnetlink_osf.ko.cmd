cmd_net/netfilter/nfnetlink_osf.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/nfnetlink_osf.ko net/netfilter/nfnetlink_osf.o net/netfilter/nfnetlink_osf.mod.o ;  true