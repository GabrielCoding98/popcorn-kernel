cmd_net/netfilter/ipset/ip_set.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/ipset/ip_set.ko net/netfilter/ipset/ip_set.o net/netfilter/ipset/ip_set.mod.o ;  true
