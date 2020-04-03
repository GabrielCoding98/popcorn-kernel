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
	{ 0xbcb90aa3, "spi_get_device_id" },
	{ 0xa5644abf, "__devm_regmap_init_spi" },
	{ 0x2e3432f1, "__devm_regmap_init" },
	{ 0x5e68e436, "rtc_nvmem_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x8bdf4c25, "devm_rtc_device_register" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8759bc86, "regmap_bulk_read" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfc440a95, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129C*");

MODULE_INFO(srcversion, "0262C3A1FC19494BD25C063");
