#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa738c28a, "module_layout" },
	{ 0xb7700415, "param_ops_int" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0xf754d24b, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x80fd477, "register_netdev" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xa43d3b8f, "of_get_mac_address" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x98fc2eaf, "alloc_etherdev_mqs" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x212ec5a7, "spi_write_then_read" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2ac79575, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60");
MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60C*");

MODULE_INFO(srcversion, "F389A0D8E9CCE15A43DFBA8");
