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
	{ 0xf9e73082, "scnprintf" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x34a2f2a3, "bitmap_zalloc" },
	{ 0x17add8cd, "fwnode_property_read_string" },
	{ 0x124e1e49, "irq_of_parse_and_map" },
	{ 0x1a72659f, "fwnode_property_present" },
	{ 0x9d8c35bb, "fwnode_property_read_u32_array" },
	{ 0xcfbd2b37, "of_fwnode_ops" },
	{ 0xb12ee814, "device_property_read_string" },
	{ 0x59cd1807, "device_property_present" },
	{ 0xe3b046d1, "device_get_child_node_count" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x7a974a72, "devm_device_add_group" },
	{ 0xc0dbbd01, "gpiod_set_debounce" },
	{ 0xf8b6597a, "gpiod_to_irq" },
	{ 0x989a95b1, "fwnode_handle_put" },
	{ 0x680270c1, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0x737d7453, "device_get_next_child_node" },
	{ 0x72b91c49, "devm_request_any_context_irq" },
	{ 0x7c35d0aa, "devm_add_action" },
	{ 0x9be9faa1, "input_set_capability" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdbeff0db, "gpiod_is_active_low" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0xadb7cfd4, "devm_gpio_request_one" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe7f8a6ba, "devm_input_allocate_device" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x4a6b7d00, "gpiod_get_value_cansleep" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "06F5A4302CFCAB3BE669A6B");
