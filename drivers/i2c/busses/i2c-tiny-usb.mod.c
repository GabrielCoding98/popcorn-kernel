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
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0xb81960ca, "snprintf" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x9d669763, "memcpy" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0403pC631d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C40p0534d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "12598AB9D990D907DFFAD7D");
