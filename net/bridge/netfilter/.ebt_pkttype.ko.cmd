cmd_net/bridge/netfilter/ebt_pkttype.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/bridge/netfilter/ebt_pkttype.ko net/bridge/netfilter/ebt_pkttype.o net/bridge/netfilter/ebt_pkttype.mod.o ;  true