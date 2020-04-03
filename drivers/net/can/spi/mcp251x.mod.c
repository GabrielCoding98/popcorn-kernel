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
	{ 0xad4ca99b, "can_change_mtu" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x3de211b7, "open_candev" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc6890e81, "close_candev" },
	{ 0x22977aed, "unregister_candev" },
	{ 0xfb8949de, "netdev_info" },
	{ 0x61439ff9, "register_candev" },
	{ 0xad51ab3c, "dmam_alloc_coherent" },
	{ 0x242978bc, "regulator_disable" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x366f068, "regulator_enable" },
	{ 0x6bc148ea, "devm_regulator_get_optional" },
	{ 0xbcb90aa3, "spi_get_device_id" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe379d7db, "spi_setup" },
	{ 0x815588a6, "clk_enable" },
	{ 0x3402f74d, "free_candev" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xa1df6cb7, "alloc_candev_mqs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0x5920f98d, "of_match_device" },
	{ 0x57f4ba3c, "can_get_echo_skb" },
	{ 0x82a3d0c6, "can_bus_off" },
	{ 0x8053339c, "can_put_echo_skb" },
	{ 0x4f92fbf6, "netif_device_attach" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x1000e51, "schedule" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d669763, "memcpy" },
	{ 0x92013acb, "alloc_can_skb" },
	{ 0xc30abd6, "netdev_err" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0xdb5735d6, "alloc_can_err_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7682438a, "can_free_echo_skb" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("spi:mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625C*");

MODULE_INFO(srcversion, "F3FC76E4137CB804B3C9781");
