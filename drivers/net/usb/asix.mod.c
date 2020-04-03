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
	{ 0xfb8949de, "netdev_info" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x4a224f02, "mii_ethtool_gset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbd824fea, "phy_disconnect" },
	{ 0x18719b8d, "usbnet_resume" },
	{ 0xeac03f35, "phy_stop" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x70b0e1bc, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xce453b61, "usbnet_link_change" },
	{ 0x997855cf, "__mdiobus_register" },
	{ 0x7272d31e, "phy_ethtool_nway_reset" },
	{ 0x77881920, "usbnet_disconnect" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa048fe15, "generic_mii_ioctl" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x20897998, "usbnet_stop" },
	{ 0xb412c64d, "usbnet_update_max_qlen" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xda45ab5c, "mdiobus_unregister" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x90b9daba, "phy_print_status" },
	{ 0xfae40a45, "usbnet_nway_reset" },
	{ 0xdaa28a7d, "usbnet_set_link_ksettings" },
	{ 0x5f754e5a, "memset" },
	{ 0x1d895f7d, "phy_start" },
	{ 0xd3faa271, "mii_nway_restart" },
	{ 0x7275a863, "usbnet_get_stats64" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x902a5944, "eth_platform_get_mac_address" },
	{ 0xc50d6744, "mdiobus_free" },
	{ 0x837e5317, "usbnet_get_endpoints" },
	{ 0xaea7f82a, "usbnet_get_link_ksettings" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xde0c7db5, "usbnet_get_drvinfo" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x4b0e6f07, "usbnet_read_cmd_nopm" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x122170da, "crc32_le" },
	{ 0x59b19ece, "usbnet_start_xmit" },
	{ 0x5a102492, "usbnet_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8fb2f887, "usbnet_get_link" },
	{ 0xe88ea4ea, "usbnet_write_cmd_nopm" },
	{ 0x746adeee, "phy_ethtool_get_link_ksettings" },
	{ 0xb6255798, "skb_copy_expand" },
	{ 0x2eb5b630, "usbnet_read_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf70ed1a6, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x767234, "genphy_resume" },
	{ 0xba323184, "usbnet_skb_return" },
	{ 0xe2da03da, "usbnet_open" },
	{ 0xd5fb4420, "mii_check_media" },
	{ 0xca2d3647, "usbnet_get_msglevel" },
	{ 0xc30abd6, "netdev_err" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x829dddab, "netdev_warn" },
	{ 0x8cd8fe47, "usbnet_unlink_rx_urbs" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x9470b80e, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x54d9ba37, "usbnet_write_cmd_async" },
	{ 0xa6d94d80, "usbnet_change_mtu" },
	{ 0x4c0fc450, "phy_connect" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x64c30247, "phy_mii_ioctl" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8e9f6274, "mii_link_ok" },
	{ 0x99bb8806, "memmove" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0x10521572, "usbnet_write_cmd" },
	{ 0xc86858c3, "usbnet_set_msglevel" },
	{ 0xad200ff5, "mdiobus_alloc_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B345E9BD2BD027AA18007C7");
