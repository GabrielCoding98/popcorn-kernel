cmd_net/netfilter/nft_compat.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/nft_compat.ko net/netfilter/nft_compat.o net/netfilter/nft_compat.mod.o ;  true