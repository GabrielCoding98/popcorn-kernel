cmd_net/netfilter/nfnetlink.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/nfnetlink.ko net/netfilter/nfnetlink.o net/netfilter/nfnetlink.mod.o ;  true
