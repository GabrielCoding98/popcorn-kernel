cmd_net/ipv6/netfilter/ip6table_mangle.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/ipv6/netfilter/ip6table_mangle.ko net/ipv6/netfilter/ip6table_mangle.o net/ipv6/netfilter/ip6table_mangle.mod.o ;  true