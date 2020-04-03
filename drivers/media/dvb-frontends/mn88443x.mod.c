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
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x815588a6, "clk_enable" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x9d669763, "memcpy" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc7ae1587, "i2c_new_dummy" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0x87bcbcef, "of_device_get_match_data" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x8733236, "intlog10" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xeb9637f6, "i2c_unregister_device" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";

MODULE_ALIAS("i2c:mn884433");
MODULE_ALIAS("i2c:mn884434-0");
MODULE_ALIAS("i2c:mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884433");
MODULE_ALIAS("of:N*T*Csocionext,mn884433C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1C*");

MODULE_INFO(srcversion, "F3A71418D7D8875F13EF273");
