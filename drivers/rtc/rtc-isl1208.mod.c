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
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x49086c51, "of_irq_get_byname" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xf9721b52, "__rtc_register_device" },
	{ 0xa821ed26, "rtc_add_group" },
	{ 0x8e10f129, "devm_rtc_allocate_device" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xe8ff1363, "sysfs_notify" },
	{ 0x59aa5df9, "rtc_update_irq" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x91715312, "sprintf" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x84239571, "i2c_transfer" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe6abbc5c, "i2c_smbus_write_byte_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc565bdd5, "i2c_smbus_read_byte_data" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cisil,isl1208");
MODULE_ALIAS("of:N*T*Cisil,isl1208C*");
MODULE_ALIAS("of:N*T*Cisil,isl1218");
MODULE_ALIAS("of:N*T*Cisil,isl1218C*");
MODULE_ALIAS("of:N*T*Cisil,isl1219");
MODULE_ALIAS("of:N*T*Cisil,isl1219C*");
MODULE_ALIAS("i2c:isl1208");
MODULE_ALIAS("i2c:isl1218");
MODULE_ALIAS("i2c:isl1219");

MODULE_INFO(srcversion, "D857B15E3B97E817D8909B0");
