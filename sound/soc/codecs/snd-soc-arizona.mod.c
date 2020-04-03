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
	{ 0x840bd4d, "arizona_request_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6a55c9da, "regulator_set_voltage" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x204bb719, "snd_soc_dapm_del_routes" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xaf995b95, "regmap_raw_write" },
	{ 0xea124bd1, "gcd" },
	{ 0x4b1d56ac, "__pm_runtime_suspend" },
	{ 0x3607517e, "snd_soc_dapm_get_volsw" },
	{ 0xa6e68b0d, "regmap_multi_reg_write" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x6747a736, "_dev_crit" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xef9336a1, "snd_soc_component_disable_pin" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xab95dc15, "snd_soc_dapm_new_controls" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0xc89fc654, "snd_soc_component_update_bits" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x911ee79e, "of_prop_next_u32" },
	{ 0xbb7f34d9, "snd_soc_component_enable_pin" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0xe0681843, "snd_soc_dapm_add_routes" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x9648e562, "snd_pcm_hw_constraint_list" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf36b611a, "of_find_property" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf7cef4fd, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xacd1f01b, "arizona_free_irq" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x75b6da5e, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe6135cf9, "snd_soc_dapm_sync" },
	{ 0x3558b728, "snd_soc_component_write" },
	{ 0x9dfc74a7, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0xf87561d3, "snd_soc_bytes_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x132d57dd, "snd_soc_component_read32" },
	{ 0x7f8a8fbf, "regmap_get_val_bytes" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x31379608, "__init_rwsem" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "B916B24F75A5264736A0C77");
