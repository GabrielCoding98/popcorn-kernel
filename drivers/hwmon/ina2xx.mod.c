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
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xf9a482f9, "msleep" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xb1710a73, "devm_hwmon_device_register_with_groups" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x87bcbcef, "of_device_get_match_data" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cti,ina219");
MODULE_ALIAS("of:N*T*Cti,ina219C*");
MODULE_ALIAS("of:N*T*Cti,ina220");
MODULE_ALIAS("of:N*T*Cti,ina220C*");
MODULE_ALIAS("of:N*T*Cti,ina226");
MODULE_ALIAS("of:N*T*Cti,ina226C*");
MODULE_ALIAS("of:N*T*Cti,ina230");
MODULE_ALIAS("of:N*T*Cti,ina230C*");
MODULE_ALIAS("of:N*T*Cti,ina231");
MODULE_ALIAS("of:N*T*Cti,ina231C*");
MODULE_ALIAS("i2c:ina219");
MODULE_ALIAS("i2c:ina220");
MODULE_ALIAS("i2c:ina226");
MODULE_ALIAS("i2c:ina230");
MODULE_ALIAS("i2c:ina231");

MODULE_INFO(srcversion, "8FAB5A28CEC911F27895223");
