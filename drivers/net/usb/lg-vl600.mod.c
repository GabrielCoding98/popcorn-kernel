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
	{ 0x70b0e1bc, "usbnet_probe" },
	{ 0x85f5013c, "usbnet_cdc_status" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x395018d6, "usbnet_cdc_bind" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x1bdc8374, "usbnet_cdc_unbind" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xc30abd6, "netdev_err" },
	{ 0xba323184, "usbnet_skb_return" },
	{ 0xff71b834, "skb_trim" },
	{ 0x8d334730, "skb_clone" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x9d669763, "memcpy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x99bb8806, "memmove" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xb6255798, "skb_copy_expand" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc_ether";

MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "6D2157630CEC598BDB23EEC");
