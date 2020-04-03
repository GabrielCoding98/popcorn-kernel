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
	{ 0xa0288fa4, "devm_snd_soc_register_card" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x93ec37a, "devm_gpiod_get_array_optional" },
	{ 0x9648e562, "snd_pcm_hw_constraint_list" },
	{ 0xf36b611a, "of_find_property" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xc0d0da6d, "snd_soc_dai_set_bclk_ratio" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb3c73542, "snd_soc_dai_set_sysclk" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x83177b6f, "gpiod_set_array_value_cansleep" },
	{ 0xaa7566fa, "snd_soc_dai_set_fmt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0xd1a1d33a, "gpiod_set_value" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";

MODULE_ALIAS("of:N*T*Cai,audioinjector-octo-soundcard");
MODULE_ALIAS("of:N*T*Cai,audioinjector-octo-soundcardC*");

MODULE_INFO(srcversion, "CE21EFAECA353651D58BCD2");
