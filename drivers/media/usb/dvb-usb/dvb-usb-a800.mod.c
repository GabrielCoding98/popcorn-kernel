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
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x655438ab, "dvb_usb_device_exit" },
	{ 0xdb6e7c88, "dvb_usb_device_init" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3b593b98, "dibusb_pid_filter" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xdf678f0c, "rc_keydown" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xabacb223, "dibusb_dib3000mc_frontend_attach" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x8f1e9c29, "dibusb_dib3000mc_tuner_attach" },
	{ 0xbeda090b, "dibusb2_0_streaming_ctrl" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x958deb44, "dibusb_i2c_algo" },
	{ 0x4ecbe55b, "dibusb_pid_filter_ctrl" },
	{ 0x3907679f, "rc_repeat" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb,dvb-usb-dibusb-common,dvb-usb-dibusb-mc-common";

MODULE_ALIAS("usb:v07CApA800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA801d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "68F2879440828927B0FFD66");
