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
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x9d669763, "memcpy" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe914e41e, "strcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x91715312, "sprintf" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0FC5p1227d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "51584C4E343A63F6099D58F");
