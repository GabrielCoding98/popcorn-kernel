cmd_net/ipv6/netfilter/ip6t_mh.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/ipv6/netfilter/ip6t_mh.ko net/ipv6/netfilter/ip6t_mh.o net/ipv6/netfilter/ip6t_mh.mod.o ;  true