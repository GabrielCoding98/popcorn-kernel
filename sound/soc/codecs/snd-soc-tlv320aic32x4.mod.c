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
	{ 0x5e223257, "clk_hw_register_clkdev" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2e83e9ec, "snd_soc_dapm_get_enum_double" },
	{ 0x3607517e, "snd_soc_dapm_get_volsw" },
	{ 0x9d173ed2, "clk_bulk_prepare" },
	{ 0x242978bc, "regulator_disable" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xc89fc654, "snd_soc_component_update_bits" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xbb9c71eb, "of_clk_get_parent_name" },
	{ 0xbedf82a5, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb8334a7, "devm_clk_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0xbc41ccc7, "snd_soc_add_component_controls" },
	{ 0x613d98e3, "dev_get_regmap" },
	{ 0xf7cef4fd, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xc0a54718, "snd_ctl_boolean_mono_info" },
	{ 0xadb7cfd4, "devm_gpio_request_one" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0x2614671, "clk_bulk_enable" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x75b6da5e, "snd_soc_get_enum_double" },
	{ 0xaf1df355, "devm_regulator_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0xe35df81c, "devm_clk_bulk_get" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x187823d9, "of_get_named_gpio_flags" },
	{ 0x3558b728, "snd_soc_component_write" },
	{ 0x6bc148ea, "devm_regulator_get_optional" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x9dfc74a7, "snd_soc_put_enum_double" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x1b331cc0, "gpiod_set_raw_value" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7a0ae149, "of_property_match_string" },
	{ 0x132d57dd, "snd_soc_component_read32" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x366f068, "regulator_enable" },
	{ 0x9548c287, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";


MODULE_INFO(srcversion, "B50FBCFAE17E7071B44B1C9");
