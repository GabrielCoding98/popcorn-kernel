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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc235d3d8, "snd_soc_put_volsw" },
	{ 0x3503cebf, "snd_soc_get_volsw" },
	{ 0xfd99fecc, "devm_regulator_bulk_get" },
	{ 0xf1cd9f03, "regulator_bulk_enable" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7bbc7fcb, "gpiod_direction_output_raw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x5920f98d, "of_match_device" },
	{ 0xc0a54718, "snd_ctl_boolean_mono_info" },
	{ 0x27673299, "snd_soc_info_volsw" },
	{ 0xebe2679, "regulator_bulk_disable" },
	{ 0x6c38282e, "devm_snd_soc_register_component" },
	{ 0x187823d9, "of_get_named_gpio_flags" },
	{ 0x9a3f3efa, "of_get_property" },
	{ 0xb61ae07f, "regcache_mark_dirty" },
	{ 0x1b331cc0, "gpiod_set_raw_value" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xd4e6655f, "devm_gpio_request" },
	{ 0x7be336b9, "regcache_sync" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd";

MODULE_ALIAS("of:N*T*Ccirrus,cs4271");
MODULE_ALIAS("of:N*T*Ccirrus,cs4271C*");

MODULE_INFO(srcversion, "A2D7947203CDF134D71B327");
