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
	{ 0xb7700415, "param_ops_int" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x5f754e5a, "memset" },
	{ 0x97255bdf, "strlen" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdfb0dd0, "platform_device_add" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x148ea913, "platform_device_put" },
	{ 0xe7a7c01f, "platform_device_add_data" },
	{ 0x21618bec, "platform_device_alloc" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xcf44e6ed, "v4l2_ctrl_cluster" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0x78f31eb5, "v4l2_ctrl_new_custom" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8837458d, "v4l2_i2c_subdev_init" },
	{ 0x6bc148ea, "devm_regulator_get_optional" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x328a05f1, "strncpy" },
	{ 0xe6c12171, "complete" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x366f068, "regulator_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x350f065d, "v4l2_device_unregister_subdev" },
	{ 0x793b43cb, "platform_device_unregister" },
	{ 0x242978bc, "regulator_disable" },
	{ 0xd1a1d33a, "gpiod_set_value" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("of:N*T*Csilabs,si4713");
MODULE_ALIAS("of:N*T*Csilabs,si4713C*");
MODULE_ALIAS("i2c:si4713");

MODULE_INFO(srcversion, "15BB3BBDE12838D4F6E3621");
