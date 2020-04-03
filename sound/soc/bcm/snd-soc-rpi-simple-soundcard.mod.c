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
	{ 0xa0288fa4, "devm_snd_soc_register_card" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa3f7cb9a, "of_match_node" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xc0d0da6d, "snd_soc_dai_set_bclk_ratio" },
	{ 0xee1fcb7e, "snd_soc_component_set_sysclk" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x77f9b61f, "snd_soc_dai_set_tdm_slot" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";

MODULE_ALIAS("of:N*T*Cadi,adau1977-adc");
MODULE_ALIAS("of:N*T*Cadi,adau1977-adcC*");
MODULE_ALIAS("of:N*T*Cgooglevoicehat,googlevoicehat-soundcard");
MODULE_ALIAS("of:N*T*Cgooglevoicehat,googlevoicehat-soundcardC*");
MODULE_ALIAS("of:N*T*Chifiberrydacplusdsp,hifiberrydacplusdsp-soundcard");
MODULE_ALIAS("of:N*T*Chifiberrydacplusdsp,hifiberrydacplusdsp-soundcardC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-amp");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-ampC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dac");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacC*");
MODULE_ALIAS("of:N*T*Crpi,rpi-dac");
MODULE_ALIAS("of:N*T*Crpi,rpi-dacC*");

MODULE_INFO(srcversion, "3996684DD006FDFA59E4FAA");