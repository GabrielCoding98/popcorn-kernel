cmd_net/netfilter/nft_objref.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/nft_objref.ko net/netfilter/nft_objref.o net/netfilter/nft_objref.mod.o ;  true