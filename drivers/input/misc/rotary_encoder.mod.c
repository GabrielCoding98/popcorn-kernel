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
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xf8b6597a, "gpiod_to_irq" },
	{ 0x9be9faa1, "input_set_capability" },
	{ 0x85bc5ad, "device_property_match_string" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0xe7f8a6ba, "devm_input_allocate_device" },
	{ 0xd8e4fdcd, "devm_gpiod_get_array" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x59cd1807, "device_property_present" },
	{ 0x978e037a, "device_property_read_u32_array" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4a6b7d00, "gpiod_get_value_cansleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crotary-encoder");
MODULE_ALIAS("of:N*T*Crotary-encoderC*");

MODULE_INFO(srcversion, "D43A8096AA42A71F694B685");
