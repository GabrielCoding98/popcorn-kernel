cmd_net/netfilter/xt_CT.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/xt_CT.ko net/netfilter/xt_CT.o net/netfilter/xt_CT.mod.o ;  true
