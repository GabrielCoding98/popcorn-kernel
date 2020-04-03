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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xa0288fa4, "devm_snd_soc_register_card" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x69d9edc3, "snd_soc_dai_set_pll" },
	{ 0xc89fc654, "snd_soc_component_update_bits" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xbc41ccc7, "snd_soc_add_component_controls" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x202036e0, "snd_soc_get_pcm_runtime" },
	{ 0xc0d0da6d, "snd_soc_dai_set_bclk_ratio" },
	{ 0x75b6da5e, "snd_soc_get_enum_double" },
	{ 0x2c30183b, "snd_soc_dai_set_clkdiv" },
	{ 0xcb5e6a8d, "snd_ctl_remove" },
	{ 0xb3c73542, "snd_soc_dai_set_sysclk" },
	{ 0x9dfc74a7, "snd_soc_put_enum_double" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x900d94c8, "snd_soc_card_get_kcontrol" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";

MODULE_ALIAS("of:N*T*Crra,digidac1-soundcard");
MODULE_ALIAS("of:N*T*Crra,digidac1-soundcardC*");

MODULE_INFO(srcversion, "383A3970BFB4DFA527F1615");
