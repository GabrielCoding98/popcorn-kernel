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
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xa9c6eab1, "power_supply_changed" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x221d2a57, "power_supply_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x87bcbcef, "of_device_get_match_data" },
	{ 0xa6a99d80, "of_node_get" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xd192e6f0, "power_supply_get_drvdata" },
	{ 0x55957a3a, "power_supply_unregister" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x919f98dd, "i2c_smbus_write_i2c_block_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x84239571, "i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Clltc,ltc2941");
MODULE_ALIAS("of:N*T*Clltc,ltc2941C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2942");
MODULE_ALIAS("of:N*T*Clltc,ltc2942C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2943");
MODULE_ALIAS("of:N*T*Clltc,ltc2943C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2944");
MODULE_ALIAS("of:N*T*Clltc,ltc2944C*");
MODULE_ALIAS("i2c:ltc2941");
MODULE_ALIAS("i2c:ltc2942");
MODULE_ALIAS("i2c:ltc2943");
MODULE_ALIAS("i2c:ltc2944");

MODULE_INFO(srcversion, "5C02E526E038E7D6297D75D");
