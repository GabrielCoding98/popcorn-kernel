cmd_net/ipv4/netfilter/ipt_ah.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/ipv4/netfilter/ipt_ah.ko net/ipv4/netfilter/ipt_ah.o net/ipv4/netfilter/ipt_ah.mod.o ;  true