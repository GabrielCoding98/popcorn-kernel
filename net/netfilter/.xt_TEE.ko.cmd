cmd_net/netfilter/xt_TEE.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/xt_TEE.ko net/netfilter/xt_TEE.o net/netfilter/xt_TEE.mod.o ;  true