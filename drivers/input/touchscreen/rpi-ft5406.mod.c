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
	{ 0x7c32d0f0, "printk" },
	{ 0xe97c4103, "ioremap" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xd21575c5, "input_mt_init_slots" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x588006d2, "rpi_firmware_property" },
	{ 0xf7ec2e9e, "dma_alloc_from_dev_coherent" },
	{ 0x6df65bc1, "input_allocate_device" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xd4412dd3, "rpi_firmware_get" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9caf2314, "input_mt_report_pointer_emulation" },
	{ 0x625b3305, "input_mt_report_slot_state" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x216d759a, "mmiocpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0x7435b5d9, "dma_release_from_dev_coherent" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crpi,rpi-ft5406");
MODULE_ALIAS("of:N*T*Crpi,rpi-ft5406C*");

MODULE_INFO(srcversion, "014696001B3FC0AFFBD0E67");
