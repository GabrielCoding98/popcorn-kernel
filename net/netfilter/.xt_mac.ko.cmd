cmd_net/netfilter/xt_mac.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/xt_mac.ko net/netfilter/xt_mac.o net/netfilter/xt_mac.mod.o ;  true
