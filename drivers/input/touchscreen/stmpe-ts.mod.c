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
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x3d2f08d, "stmpe_reg_read" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x9d0efa8b, "stmpe_block_read" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0x9be9faa1, "input_set_capability" },
	{ 0xaaf80b19, "stmpe_reg_write" },
	{ 0x391e507e, "stmpe_enable" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xe7f8a6ba, "devm_input_allocate_device" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x6a3c0697, "platform_get_irq_byname" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x24d79559, "stmpe_set_bits" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf79f73fe, "stmpe_disable" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cst,stmpe-ts");
MODULE_ALIAS("of:N*T*Cst,stmpe-tsC*");

MODULE_INFO(srcversion, "62045FBA1F14567190BBC33");
