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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x18719b8d, "usbnet_resume" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x70b0e1bc, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1bdc8374, "usbnet_cdc_unbind" },
	{ 0x77881920, "usbnet_disconnect" },
	{ 0x8d334730, "skb_clone" },
	{ 0x38c3cd1e, "usbnet_generic_cdc_bind" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x20897998, "usbnet_stop" },
	{ 0xff71b834, "skb_trim" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7275a863, "usbnet_get_stats64" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x59b19ece, "usbnet_start_xmit" },
	{ 0x5a102492, "usbnet_suspend" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xb6255798, "skb_copy_expand" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xf70ed1a6, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xba323184, "usbnet_skb_return" },
	{ 0xbc034315, "usb_driver_release_interface" },
	{ 0xe2da03da, "usbnet_open" },
	{ 0x32d4ccec, "usb_interrupt_msg" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc_ether";

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "19789E1651C22039A5433AC");
