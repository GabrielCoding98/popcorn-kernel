cmd_net/netfilter/nft_reject.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/nft_reject.ko net/netfilter/nft_reject.o net/netfilter/nft_reject.mod.o ;  true
