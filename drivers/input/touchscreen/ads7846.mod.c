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
	{ 0x38916bc8, "driver_unregister" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0xa28cae56, "devm_kfree" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x187823d9, "of_get_named_gpio_flags" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xf36b611a, "of_find_property" },
	{ 0xd916b2c8, "of_property_read_variable_u16_array" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x5920f98d, "of_match_device" },
	{ 0xc0dbbd01, "gpiod_set_debounce" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xb4f6c919, "hwmon_device_register_with_groups" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8d63bce, "regulator_get" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0xb81960ca, "snprintf" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x489d494f, "input_free_device" },
	{ 0x6df65bc1, "input_allocate_device" },
	{ 0xe379d7db, "spi_setup" },
	{ 0x366f068, "regulator_enable" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5f754e5a, "memset" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x33d3aabc, "regulator_put" },
	{ 0xf2d865b0, "hwmon_device_unregister" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x242978bc, "regulator_disable" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xcf5c862d, "gpiod_get_raw_value" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0x91715312, "sprintf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cti,tsc2046");
MODULE_ALIAS("of:N*T*Cti,tsc2046C*");
MODULE_ALIAS("of:N*T*Cti,ads7843");
MODULE_ALIAS("of:N*T*Cti,ads7843C*");
MODULE_ALIAS("of:N*T*Cti,ads7845");
MODULE_ALIAS("of:N*T*Cti,ads7845C*");
MODULE_ALIAS("of:N*T*Cti,ads7846");
MODULE_ALIAS("of:N*T*Cti,ads7846C*");
MODULE_ALIAS("of:N*T*Cti,ads7873");
MODULE_ALIAS("of:N*T*Cti,ads7873C*");

MODULE_INFO(srcversion, "A3A9510F78B981FC598BA2A");
