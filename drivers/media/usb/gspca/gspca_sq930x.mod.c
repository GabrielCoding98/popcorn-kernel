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
	{ 0xcf44e6ed, "v4l2_ctrl_cluster" },
	{ 0x4b69df80, "gspca_suspend" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x28e89e79, "gspca_dev_probe" },
	{ 0x22659bf4, "gspca_resume" },
	{ 0xde88e1cf, "v4l2_ctrl_g_ctrl" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x94c401c1, "gspca_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x9d669763, "memcpy" },
	{ 0xc376b491, "gspca_frame_add" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,gspca_main";

MODULE_ALIAS("usb:v041Ep4038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep403Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep403Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p930Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p930Cd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E094DC5C72D9B090616054D");