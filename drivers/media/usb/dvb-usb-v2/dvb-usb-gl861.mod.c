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
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8a86f83b, "dvb_module_probe" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x84239571, "i2c_transfer" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xd5147972, "dvb_usbv2_resume" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0x1aa4a4b4, "dvb_usbv2_probe" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x8d09738f, "dvb_usbv2_disconnect" },
	{ 0xa93f679a, "dvb_module_release" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9a3dbb1, "dvb_usbv2_suspend" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdcd72a00, "dvb_usbv2_reset_resume" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,dvb_usb_v2";

MODULE_ALIAS("usb:v0DB0p5581d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3pF170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7A69p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B1C9227B05A21266B0C8A40");
