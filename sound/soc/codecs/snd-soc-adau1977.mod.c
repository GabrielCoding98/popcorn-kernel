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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x242978bc, "regulator_disable" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x7fa87db6, "regcache_cache_bypass" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xab95dc15, "snd_soc_dapm_new_controls" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0x3799601a, "snd_pcm_hw_constraint_mask64" },
	{ 0x9648e562, "snd_pcm_hw_constraint_list" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0xaf1df355, "devm_regulator_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x6bc148ea, "devm_regulator_get_optional" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0xb61ae07f, "regcache_mark_dirty" },
	{ 0xa3f21666, "snd_pcm_hw_constraint_minmax" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x7be336b9, "regcache_sync" },
	{ 0x2b0cfa5f, "regcache_cache_only" },
	{ 0x366f068, "regulator_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "8DFC2D0BAE8720EE83062C7");
