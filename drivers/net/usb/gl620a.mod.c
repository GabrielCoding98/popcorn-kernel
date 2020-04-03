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
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xba323184, "usbnet_skb_return" },
	{ 0x9d669763, "memcpy" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x99bb8806, "memmove" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xb6255798, "skb_copy_expand" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05E3p0502d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B76F79848D69325771BADDC");
