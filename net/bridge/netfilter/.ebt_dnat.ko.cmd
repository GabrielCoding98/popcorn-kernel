cmd_net/bridge/netfilter/ebt_dnat.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/bridge/netfilter/ebt_dnat.ko net/bridge/netfilter/ebt_dnat.o net/bridge/netfilter/ebt_dnat.mod.o ;  true
