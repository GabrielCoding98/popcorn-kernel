cmd_net/netfilter/nft_limit.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/nft_limit.ko net/netfilter/nft_limit.o net/netfilter/nft_limit.mod.o ;  true