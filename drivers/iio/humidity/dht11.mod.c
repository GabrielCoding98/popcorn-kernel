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
	{ 0xe6c12171, "complete" },
	{ 0xcf5c862d, "gpiod_get_raw_value" },
	{ 0xe186359a, "__devm_iio_device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf8b6597a, "gpiod_to_irq" },
	{ 0xadb7cfd4, "devm_gpio_request_one" },
	{ 0x187823d9, "of_get_named_gpio_flags" },
	{ 0xee0193d, "devm_iio_device_alloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeb0b9bf9, "wait_for_completion_killable_timeout" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x487e1db, "gpiod_direction_input" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7bbc7fcb, "gpiod_direction_output_raw" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0xfe476039, "ktime_get_resolution_ns" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("of:N*T*Cdht11");
MODULE_ALIAS("of:N*T*Cdht11C*");

MODULE_INFO(srcversion, "013930115E2470E3813F5D1");