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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x454e5b22, "__pm_runtime_idle" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x82030b4e, "__pm_runtime_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xea124bd1, "gcd" },
	{ 0xb35bf2d8, "snd_pcm_hw_constraint_ratnums" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x503bd137, "snd_interval_ranges" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2be9c1, "regulator_register_notifier" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xfd99fecc, "devm_regulator_bulk_get" },
	{ 0xf1cd9f03, "regulator_bulk_enable" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9648e562, "snd_pcm_hw_constraint_list" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x294ab020, "snd_ctl_boolean_stereo_info" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xa292b3e3, "snd_pcm_hw_rule_add" },
	{ 0x75b6da5e, "snd_soc_get_enum_double" },
	{ 0xebe2679, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x95aafef9, "__pm_runtime_set_status" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xb61ae07f, "regcache_mark_dirty" },
	{ 0x9dfc74a7, "snd_soc_put_enum_double" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x7be336b9, "regcache_sync" },
	{ 0x2b0cfa5f, "regcache_cache_only" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";


MODULE_INFO(srcversion, "B97C15A6C10E79F6B6A335D");
