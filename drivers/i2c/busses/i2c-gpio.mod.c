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
	{ 0x7c32d0f0, "printk" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb81960ca, "snprintf" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xa4d3c4f7, "desc_to_gpio" },
	{ 0x290e947c, "i2c_bit_add_numbered_bus" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x2046a9cf, "gpiod_cansleep" },
	{ 0xe8a03332, "devm_gpiod_get" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x71a1d70a, "devm_gpiod_get_index" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0x4a6b7d00, "gpiod_get_value_cansleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-algo-bit";

MODULE_ALIAS("of:N*T*Ci2c-gpio");
MODULE_ALIAS("of:N*T*Ci2c-gpioC*");

MODULE_INFO(srcversion, "BE0B0D5F140CF445109BE23");