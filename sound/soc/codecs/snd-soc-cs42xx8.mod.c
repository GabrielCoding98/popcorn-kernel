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
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xab95dc15, "snd_soc_dapm_new_controls" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xfd99fecc, "devm_regulator_bulk_get" },
	{ 0xf1cd9f03, "regulator_bulk_enable" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0xe0681843, "snd_soc_dapm_add_routes" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xbc41ccc7, "snd_soc_add_component_controls" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x5920f98d, "of_match_device" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x75b6da5e, "snd_soc_get_enum_double" },
	{ 0xebe2679, "regulator_bulk_disable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0xb61ae07f, "regcache_mark_dirty" },
	{ 0x9dfc74a7, "snd_soc_put_enum_double" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x7be336b9, "regcache_sync" },
	{ 0x2b0cfa5f, "regcache_cache_only" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";


MODULE_INFO(srcversion, "D34067ECFCC1DA5ACD9618C");
