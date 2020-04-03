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
	{ 0xdfbba290, "rc_map_dibusb_table" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x655438ab, "dvb_usb_device_exit" },
	{ 0xdb6e7c88, "dvb_usb_device_init" },
	{ 0x39aa8bad, "dibusb_rc_query" },
	{ 0x84239571, "i2c_transfer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3b593b98, "dibusb_pid_filter" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8d20113b, "dibusb2_0_power_ctrl" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x129ff39d, "dibusb_power_ctrl" },
	{ 0x510c576, "dibusb_streaming_ctrl" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xbeda090b, "dibusb2_0_streaming_ctrl" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x958deb44, "dibusb_i2c_algo" },
	{ 0x4ecbe55b, "dibusb_pid_filter_ctrl" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dvb-usb";

MODULE_ALIAS("usb:v14AAp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185BpD000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185BpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v145Fp010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BB8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BB9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap17DEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap17DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0FA0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0FA1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BB8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BB9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1025p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1025p005Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1822p3201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1822p3202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pA333d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pA334d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p701Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p701Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB2Ap17DEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BF29D8699FCE86FE39A805B");
