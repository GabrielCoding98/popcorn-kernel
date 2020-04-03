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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x77881920, "usbnet_disconnect" },
	{ 0x70b0e1bc, "usbnet_probe" },
	{ 0xdaa28a7d, "usbnet_set_link_ksettings" },
	{ 0xaea7f82a, "usbnet_get_link_ksettings" },
	{ 0x8fb2f887, "usbnet_get_link" },
	{ 0xfae40a45, "usbnet_nway_reset" },
	{ 0xc86858c3, "usbnet_set_msglevel" },
	{ 0xca2d3647, "usbnet_get_msglevel" },
	{ 0xde0c7db5, "usbnet_get_drvinfo" },
	{ 0x7275a863, "usbnet_get_stats64" },
	{ 0xf70ed1a6, "usbnet_tx_timeout" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0x59b19ece, "usbnet_start_xmit" },
	{ 0x20897998, "usbnet_stop" },
	{ 0xe2da03da, "usbnet_open" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa43d3b8f, "of_get_mac_address" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x837e5317, "usbnet_get_endpoints" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd3faa271, "mii_nway_restart" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbd6f3851, "usbnet_defer_kevent" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x18719b8d, "usbnet_resume" },
	{ 0xfb8949de, "netdev_info" },
	{ 0x5a102492, "usbnet_suspend" },
	{ 0xa6d94d80, "usbnet_change_mtu" },
	{ 0x4a224f02, "mii_ethtool_gset" },
	{ 0xd5fb4420, "mii_check_media" },
	{ 0x5f754e5a, "memset" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x4b0e6f07, "usbnet_read_cmd_nopm" },
	{ 0x2eb5b630, "usbnet_read_cmd" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe88ea4ea, "usbnet_write_cmd_nopm" },
	{ 0x10521572, "usbnet_write_cmd" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x829dddab, "netdev_warn" },
	{ 0xba323184, "usbnet_skb_return" },
	{ 0xff71b834, "skb_trim" },
	{ 0x8d334730, "skb_clone" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xf102732a, "crc16" },
	{ 0xa048fe15, "generic_mii_ioctl" },
	{ 0x37a0cba, "kfree" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x122170da, "crc32_le" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "928563C8E9668CE4C66A7E9");
