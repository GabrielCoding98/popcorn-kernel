cmd_drivers/net/ppp/ppp_mppe.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/net/ppp/ppp_mppe.ko drivers/net/ppp/ppp_mppe.o drivers/net/ppp/ppp_mppe.mod.o ;  true