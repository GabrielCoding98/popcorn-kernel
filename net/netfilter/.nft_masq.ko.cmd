cmd_net/netfilter/nft_masq.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/nft_masq.ko net/netfilter/nft_masq.o net/netfilter/nft_masq.mod.o ;  true
