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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x53afc954, "devm_snd_dmaengine_pcm_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x111b5a08, "devm_ioremap_resource" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x1327a3a7, "__devm_regmap_init_mmio_clk" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x6af01fe2, "platform_get_resource" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xb729b456, "of_get_address" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x23f2e361, "regmap_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2s");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2sC*");

MODULE_INFO(srcversion, "994137C751057114DDB74A6");
