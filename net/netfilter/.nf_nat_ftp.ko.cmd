cmd_net/netfilter/nf_nat_ftp.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/nf_nat_ftp.ko net/netfilter/nf_nat_ftp.o net/netfilter/nf_nat_ftp.mod.o ;  true