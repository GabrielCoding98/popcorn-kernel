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
	{ 0xf9a482f9, "msleep" },
	{ 0x4b69df80, "gspca_suspend" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x28e89e79, "gspca_dev_probe" },
	{ 0x22659bf4, "gspca_resume" },
	{ 0xde88e1cf, "v4l2_ctrl_g_ctrl" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x94c401c1, "gspca_disconnect" },
	{ 0x13479388, "gspca_coarse_grained_expo_autogain" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x954dad06, "v4l2_ctrl_auto_cluster" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xc376b491, "gspca_frame_add" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x5f60761a, "usb_register_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main,videodev";

MODULE_ALIAS("usb:v041Ep4028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2460d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2461d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2463d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2464d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2468d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2470d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2471d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2472d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2474d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2476d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v145Fp013Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001pF115d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6CDAB6E3C81B136BD32562A");
