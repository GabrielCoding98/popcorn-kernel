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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x7c41147c, "w1_unregister_family" },
	{ 0x5c345a68, "w1_register_family" },
	{ 0x2bcb1801, "_dev_notice" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x221d2a57, "power_supply_register" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xf36b611a, "of_find_property" },
	{ 0xb81960ca, "snprintf" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x2a24f930, "power_supply_am_i_supplied" },
	{ 0xa9c6eab1, "power_supply_changed" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0xd192e6f0, "power_supply_get_drvdata" },
	{ 0x55957a3a, "power_supply_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x38ca34dc, "w1_write_block" },
	{ 0x635c2f6a, "w1_read_block" },
	{ 0x8d512d93, "w1_write_8" },
	{ 0xbc5d61ca, "w1_reset_select_slave" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "CEBED0968B0BEB73D67F4D8");
