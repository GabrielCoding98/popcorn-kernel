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
	{ 0x77881920, "usbnet_disconnect" },
	{ 0x70b0e1bc, "usbnet_probe" },
	{ 0x9577d577, "ethtool_op_get_link" },
	{ 0xfae40a45, "usbnet_nway_reset" },
	{ 0xc86858c3, "usbnet_set_msglevel" },
	{ 0xca2d3647, "usbnet_get_msglevel" },
	{ 0x7275a863, "usbnet_get_stats64" },
	{ 0xf70ed1a6, "usbnet_tx_timeout" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x59b19ece, "usbnet_start_xmit" },
	{ 0x20897998, "usbnet_stop" },
	{ 0xe2da03da, "usbnet_open" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x5a102492, "usbnet_suspend" },
	{ 0x837e5317, "usbnet_get_endpoints" },
	{ 0xd3faa271, "mii_nway_restart" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0x4a224f02, "mii_ethtool_gset" },
	{ 0x5f754e5a, "memset" },
	{ 0x54d9ba37, "usbnet_write_cmd_async" },
	{ 0x122170da, "crc32_le" },
	{ 0xfb8949de, "netdev_info" },
	{ 0x18719b8d, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xce453b61, "usbnet_link_change" },
	{ 0xb412c64d, "usbnet_update_max_qlen" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe88ea4ea, "usbnet_write_cmd_nopm" },
	{ 0x10521572, "usbnet_write_cmd" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x829dddab, "netdev_warn" },
	{ 0x4b0e6f07, "usbnet_read_cmd_nopm" },
	{ 0x2eb5b630, "usbnet_read_cmd" },
	{ 0xa048fe15, "generic_mii_ioctl" },
	{ 0x519a0b10, "mii_ethtool_get_link_ksettings" },
	{ 0x8d8b032c, "mii_ethtool_set_link_ksettings" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xba323184, "usbnet_skb_return" },
	{ 0x8d334730, "skb_clone" },
	{ 0xff71b834, "skb_trim" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "939AC35FBA15593ACF0DEC3");
