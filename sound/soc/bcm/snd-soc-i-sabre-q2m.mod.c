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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xb760ed36, "snd_soc_unregister_card" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xc0d0da6d, "snd_soc_dai_set_bclk_ratio" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x132d57dd, "snd_soc_component_read32" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0xf2255e37, "snd_soc_register_card" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";

MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-q2m");
MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-q2mC*");

MODULE_INFO(srcversion, "A202E18EF06E8272CCCE74E");
