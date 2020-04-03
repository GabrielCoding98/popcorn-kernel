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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xb79eaee0, "i2c_smbus_write_word_data" },
	{ 0x221d2a57, "power_supply_register" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xd192e6f0, "power_supply_get_drvdata" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x86b9933d, "i2c_smbus_read_word_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x55957a3a, "power_supply_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmaxim,max17040");
MODULE_ALIAS("of:N*T*Cmaxim,max17040C*");
MODULE_ALIAS("of:N*T*Cmaxim,max77836-battery");
MODULE_ALIAS("of:N*T*Cmaxim,max77836-batteryC*");
MODULE_ALIAS("i2c:max17040");
MODULE_ALIAS("i2c:max77836-battery");

MODULE_INFO(srcversion, "675C1452DF3E5CCA85CDF3C");
