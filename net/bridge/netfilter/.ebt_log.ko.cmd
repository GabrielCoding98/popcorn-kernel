cmd_net/bridge/netfilter/ebt_log.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/bridge/netfilter/ebt_log.ko net/bridge/netfilter/ebt_log.o net/bridge/netfilter/ebt_log.mod.o ;  true
