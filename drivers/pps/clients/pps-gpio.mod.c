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
	{ 0x9a3f3efa, "of_get_property" },
	{ 0x187823d9, "of_get_named_gpio_flags" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xe2c1adb1, "pps_register_source" },
	{ 0xb81960ca, "snprintf" },
	{ 0xf8b6597a, "gpiod_to_irq" },
	{ 0x487e1db, "gpiod_direction_input" },
	{ 0xd4e6655f, "devm_gpio_request" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x104319e3, "pps_event" },
	{ 0xcf5c862d, "gpiod_get_raw_value" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdafcdc3a, "ktime_get_snapshot" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xfe272662, "pps_unregister_source" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pps_core";

MODULE_ALIAS("of:N*T*Cpps-gpio");
MODULE_ALIAS("of:N*T*Cpps-gpioC*");

MODULE_INFO(srcversion, "190C209D8C4CC24DC737555");
