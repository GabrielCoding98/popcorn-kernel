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
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0xb1b630, "snd_soc_dapm_info_pin_switch" },
	{ 0xa1357c69, "snd_soc_dapm_put_pin_switch" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x69d9edc3, "snd_soc_dai_set_pll" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xc60f5cb1, "of_property_read_string" },
	{ 0xb760ed36, "snd_soc_unregister_card" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x202036e0, "snd_soc_get_pcm_runtime" },
	{ 0xc0d0da6d, "snd_soc_dai_set_bclk_ratio" },
	{ 0x615914dc, "snd_soc_dapm_get_pin_switch" },
	{ 0xe6135cf9, "snd_soc_dapm_sync" },
	{ 0xb3c73542, "snd_soc_dai_set_sysclk" },
	{ 0x125e9538, "snd_soc_dapm_disable_pin" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0xf2255e37, "snd_soc_register_card" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-codec");
MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-codecC*");

MODULE_INFO(srcversion, "717893961AC2D4D9A522412");
