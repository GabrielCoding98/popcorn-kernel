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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb23d52db, "snd_soc_of_parse_card_name" },
	{ 0x632373e2, "snd_soc_of_parse_audio_simple_widgets" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd3649703, "of_graph_get_port_parent" },
	{ 0x212f150e, "snd_soc_of_get_dai_name" },
	{ 0x35c4b559, "of_graph_get_next_endpoint" },
	{ 0xf36b611a, "of_find_property" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x23b94308, "devm_get_clk_from_child" },
	{ 0xb364ead6, "of_graph_get_endpoint_count" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x187823d9, "of_get_named_gpio_flags" },
	{ 0xb3c73542, "snd_soc_dai_set_sysclk" },
	{ 0xb75e0234, "devm_kvasprintf" },
	{ 0xdab1165b, "snd_soc_of_parse_audio_routing" },
	{ 0xbe22b1e8, "snd_soc_card_jack_new" },
	{ 0x1e5dd050, "snd_soc_get_dai_id" },
	{ 0x3918a7ba, "snd_soc_get_dai_name" },
	{ 0xbe71ce6e, "snd_soc_jack_add_gpios" },
	{ 0xe2303f2a, "snd_soc_of_parse_daifmt" },
	{ 0x25499579, "of_parse_phandle_with_args" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x77f9b61f, "snd_soc_dai_set_tdm_slot" },
	{ 0xb81960ca, "snprintf" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xa3a5078a, "of_node_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";


MODULE_INFO(srcversion, "3F5D5474957FDF2B3222DCE");
