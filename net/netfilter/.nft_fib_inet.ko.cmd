cmd_net/netfilter/nft_fib_inet.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/nft_fib_inet.ko net/netfilter/nft_fib_inet.o net/netfilter/nft_fib_inet.mod.o ;  true