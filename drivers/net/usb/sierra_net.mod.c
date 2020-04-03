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
	{ 0x18719b8d, "usbnet_resume" },
	{ 0x5a102492, "usbnet_suspend" },
	{ 0x77881920, "usbnet_disconnect" },
	{ 0xdaa28a7d, "usbnet_set_link_ksettings" },
	{ 0xaea7f82a, "usbnet_get_link_ksettings" },
	{ 0xfae40a45, "usbnet_nway_reset" },
	{ 0xc86858c3, "usbnet_set_msglevel" },
	{ 0xca2d3647, "usbnet_get_msglevel" },
	{ 0x7275a863, "usbnet_get_stats64" },
	{ 0xf70ed1a6, "usbnet_tx_timeout" },
	{ 0xa6d94d80, "usbnet_change_mtu" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0x59b19ece, "usbnet_start_xmit" },
	{ 0x20897998, "usbnet_stop" },
	{ 0xe2da03da, "usbnet_open" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x3f8d72ae, "usbnet_status_stop" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x131b4a60, "usbnet_status_start" },
	{ 0x70b0e1bc, "usbnet_probe" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xce453b61, "usbnet_link_change" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x24d273d1, "add_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x10521572, "usbnet_write_cmd" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2eb5b630, "usbnet_read_cmd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x837e5317, "usbnet_get_endpoints" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xde0c7db5, "usbnet_get_drvinfo" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xba323184, "usbnet_skb_return" },
	{ 0xff71b834, "skb_trim" },
	{ 0x8d334730, "skb_clone" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xc30abd6, "netdev_err" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "D6B1A5A3B538C96757273E6");
