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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa28cae56, "devm_kfree" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xd2d641f8, "spi_bitbang_start" },
	{ 0x19a6139a, "spi_bitbang_setup_transfer" },
	{ 0x71a1d70a, "devm_gpiod_get_index" },
	{ 0xe8a03332, "devm_gpiod_get" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x589284bc, "__spi_alloc_controller" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x5920f98d, "of_match_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbe52c915, "spi_bitbang_setup" },
	{ 0xc754336f, "spi_bitbang_cleanup" },
	{ 0x5aa6c2e9, "gpiod_direction_output" },
	{ 0x487e1db, "gpiod_direction_input" },
	{ 0x4a6b7d00, "gpiod_get_value_cansleep" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5a163a5, "put_device" },
	{ 0x6dfaf19b, "spi_bitbang_stop" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=spi-bitbang";

MODULE_ALIAS("of:N*T*Cspi-gpio");
MODULE_ALIAS("of:N*T*Cspi-gpioC*");

MODULE_INFO(srcversion, "293DAE770803054DE6D540C");
