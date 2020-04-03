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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2e83e9ec, "snd_soc_dapm_get_enum_double" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc89fc654, "snd_soc_component_update_bits" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0xf1cd9f03, "regulator_bulk_enable" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9c1c4726, "regulator_bulk_get" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xebe2679, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x404122ac, "regulator_get_optional" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x26f12ee5, "regulator_get_voltage" },
	{ 0x3558b728, "snd_soc_component_write" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0x33d3aabc, "regulator_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x60df4283, "regulator_bulk_free" },
	{ 0x132d57dd, "snd_soc_component_read32" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x7be336b9, "regcache_sync" },
	{ 0x2b0cfa5f, "regcache_cache_only" },
	{ 0x9548c287, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("i2c:sgtl5000");
MODULE_ALIAS("of:N*T*Cfsl,sgtl5000");
MODULE_ALIAS("of:N*T*Cfsl,sgtl5000C*");

MODULE_INFO(srcversion, "F269F176770B7F5A6BC42FA");
