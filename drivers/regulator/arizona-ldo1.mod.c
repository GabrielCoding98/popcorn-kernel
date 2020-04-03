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
	{ 0xd7742fc9, "regulator_get_bypass_regmap" },
	{ 0xc94130c0, "regulator_set_bypass_regmap" },
	{ 0xfb3e383e, "regulator_get_voltage_sel_regmap" },
	{ 0x6f337003, "regulator_set_voltage_sel_regmap" },
	{ 0xb61610d, "regulator_map_voltage_linear" },
	{ 0xda22591e, "regulator_list_voltage_linear" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x94535911, "of_get_regulator_init_data" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0x3ff924c9, "of_get_child_by_name" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0x2de93156, "devm_regulator_register" },
	{ 0x89ee91d9, "gpiod_get_optional" },
	{ 0x5f754e5a, "memset" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0xa92bec66, "rdev_get_drvdata" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa6ab47b4, "gpiod_put" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "043060B987F311B9CA31B69");
