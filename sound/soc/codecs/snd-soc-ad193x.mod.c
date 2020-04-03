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
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xab95dc15, "snd_soc_dapm_new_controls" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0xe0681843, "snd_soc_dapm_add_routes" },
	{ 0xbc41ccc7, "snd_soc_add_component_controls" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x75b6da5e, "snd_soc_get_enum_double" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x9dfc74a7, "snd_soc_put_enum_double" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x23f2e361, "regmap_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "0FC544DFF3E779151F95CF2");
