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
	{ 0x2c63826b, "simple_open" },
	{ 0x1e9707b6, "simple_attr_release" },
	{ 0xf2a96c90, "simple_attr_write" },
	{ 0x7872f29e, "simple_attr_read" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xb81960ca, "snprintf" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x8715b5f8, "debugfs_create_u16" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0x1152edb0, "dev_driver_string" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x7a974a72, "devm_device_add_group" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x9e4c5dd2, "irq_get_irq_data" },
	{ 0xd21575c5, "input_mt_init_slots" },
	{ 0xbf5719ef, "touchscreen_parse_properties" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0x978e037a, "device_property_read_u32_array" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x349cba85, "strchr" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe7f8a6ba, "devm_input_allocate_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x87bcbcef, "of_device_get_match_data" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xf8e6d2df, "simple_attr_open" },
	{ 0x9caf2314, "input_mt_report_pointer_emulation" },
	{ 0xb8ff090f, "touchscreen_report_pos" },
	{ 0x625b3305, "input_mt_report_slot_state" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x5f754e5a, "memset" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x84239571, "i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ft6236");

MODULE_INFO(srcversion, "110D469286010C2144D841C");
