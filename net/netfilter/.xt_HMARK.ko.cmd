cmd_net/netfilter/xt_HMARK.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/xt_HMARK.ko net/netfilter/xt_HMARK.o net/netfilter/xt_HMARK.mod.o ;  true