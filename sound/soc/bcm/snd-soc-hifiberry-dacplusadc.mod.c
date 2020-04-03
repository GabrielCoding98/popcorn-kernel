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
	{ 0xc89fc654, "snd_soc_component_update_bits" },
	{ 0xbdb93cb5, "platform_device_register_full" },
	{ 0xac437f7b, "snd_interval_ratnum" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x793b43cb, "platform_device_unregister" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xa28cae56, "devm_kfree" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xa0270f76, "snd_soc_component_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x77f9b61f, "snd_soc_dai_set_tdm_slot" },
	{ 0x87b98b96, "snd_soc_limit_volume" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x13f44354, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadc");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadcC*");

MODULE_INFO(srcversion, "5112C167BC583CCD689243C");
