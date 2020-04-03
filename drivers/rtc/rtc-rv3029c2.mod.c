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
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xa5644abf, "__devm_regmap_init_spi" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x8bdf4c25, "devm_rtc_device_register" },
	{ 0xb1710a73, "devm_hwmon_device_register_with_groups" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x91715312, "sprintf" },
	{ 0x12a38747, "usleep_range" },
	{ 0x59aa5df9, "rtc_update_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfc440a95, "regmap_bulk_write" },
	{ 0x8759bc86, "regmap_bulk_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3029");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3029C*");
MODULE_ALIAS("of:N*T*Crv3029");
MODULE_ALIAS("of:N*T*Crv3029C*");
MODULE_ALIAS("of:N*T*Crv3029c2");
MODULE_ALIAS("of:N*T*Crv3029c2C*");
MODULE_ALIAS("of:N*T*Cmc,rv3029c2");
MODULE_ALIAS("of:N*T*Cmc,rv3029c2C*");
MODULE_ALIAS("i2c:rv3029");
MODULE_ALIAS("i2c:rv3029c2");

MODULE_INFO(srcversion, "82B660B94CE5E4F8DCEE6C3");
