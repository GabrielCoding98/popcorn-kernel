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
	{ 0xf9a482f9, "msleep" },
	{ 0x8a86f83b, "dvb_module_probe" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x98c70377, "regmap_exit" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x8759bc86, "regmap_bulk_read" },
	{ 0xd5147972, "dvb_usbv2_resume" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfc440a95, "regmap_bulk_write" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x1a83cf9e, "usb_string" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x89a3d2ca, "dvb_usbv2_generic_rw_locked" },
	{ 0xb06d6694, "__regmap_init" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x1aa4a4b4, "dvb_usbv2_probe" },
	{ 0xdf678f0c, "rc_keydown" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x8d09738f, "dvb_usbv2_disconnect" },
	{ 0xa93f679a, "dvb_module_release" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9a3dbb1, "dvb_usbv2_suspend" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3907679f, "rc_repeat" },
	{ 0x23f2e361, "regmap_write" },
	{ 0xdcd72a00, "dvb_usbv2_reset_resume" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,dvb_usb_v2";

MODULE_ALIAS("usb:v15A4p9015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p9016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p022Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE399d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pC160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p0381d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1462p8801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p8000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1462p8807d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE396d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE39Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE395d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p901Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp850Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA805d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE397d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pC810d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p4012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pC161d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE39Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6A04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE383d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE39Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp815Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp850Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp9016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE401d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E72FA4F3ED40F7E435638BC");
