cmd_net/bridge/netfilter/ebt_redirect.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/bridge/netfilter/ebt_redirect.ko net/bridge/netfilter/ebt_redirect.o net/bridge/netfilter/ebt_redirect.mod.o ;  true
