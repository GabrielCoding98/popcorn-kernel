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
	{ 0x8818a492, "asoc_simple_card_canonicalize_dailink" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3e6db69, "asoc_simple_card_canonicalize_cpu" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0x982e569a, "asoc_simple_card_clean_reference" },
	{ 0x9e13c930, "snd_soc_pm_ops" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x76a0724, "asoc_simple_card_clk_enable" },
	{ 0x89390b9b, "asoc_simple_card_init_jack" },
	{ 0xa3ce9f67, "of_device_is_available" },
	{ 0xe8b99712, "asoc_simple_card_clk_disable" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x990b367, "asoc_simple_card_of_parse_widgets" },
	{ 0xa533b93f, "asoc_simple_card_set_dailink_name" },
	{ 0xdbdc63d3, "asoc_simple_card_of_parse_routing" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x3ff924c9, "of_get_child_by_name" },
	{ 0xf805077f, "asoc_simple_card_init_dai" },
	{ 0xbf113603, "asoc_simple_card_parse_clk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3833742, "asoc_simple_card_parse_daifmt" },
	{ 0x37bbe493, "of_get_next_child" },
	{ 0xb3c73542, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x680a46de, "asoc_simple_card_parse_card_name" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xabc0b745, "snd_soc_of_parse_tdm_slot" },
	{ 0xe9b4ea2e, "asoc_simple_card_parse_dai" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-simple-card-utils";

MODULE_ALIAS("of:N*T*Csimple-audio-card");
MODULE_ALIAS("of:N*T*Csimple-audio-cardC*");

MODULE_INFO(srcversion, "92FCB1E8D35ED20EA0BC2AD");