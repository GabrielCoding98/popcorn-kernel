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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x8819dbc4, "fb_sys_read" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x949d7ffa, "backlight_device_register" },
	{ 0xb81960ca, "snprintf" },
	{ 0x242978bc, "regulator_disable" },
	{ 0x7d620d00, "register_framebuffer" },
	{ 0xad35bb33, "pwm_get" },
	{ 0x366f068, "regulator_enable" },
	{ 0xd1a1d33a, "gpiod_set_value" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xcd020b29, "fb_deferred_io_init" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x6bc148ea, "devm_regulator_get_optional" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x87bcbcef, "of_device_get_match_data" },
	{ 0x6723b181, "framebuffer_alloc" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xec126abe, "sys_fillrect" },
	{ 0xecff2dc3, "sys_copyarea" },
	{ 0xcde24ddb, "sys_imageblit" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4cae31, "pwm_apply_state" },
	{ 0xc2f1e17, "framebuffer_release" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0x58b04d8b, "fb_deferred_io_cleanup" },
	{ 0x86648479, "pwm_put" },
	{ 0x500d5ec6, "unregister_framebuffer" },
	{ 0x5ab9e4af, "backlight_device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,sysfillrect,syscopyarea,sysimgblt";

MODULE_ALIAS("i2c:ssd1305fb");
MODULE_ALIAS("i2c:ssd1306fb");
MODULE_ALIAS("i2c:ssd1307fb");
MODULE_ALIAS("i2c:ssd1309fb");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2cC*");

MODULE_INFO(srcversion, "5D22B60B6FB973A1FD58A41");
