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
	{ 0x42c4d283, "bme680_core_probe" },
	{ 0x2e3432f1, "__devm_regmap_init" },
	{ 0x586d7cb9, "bme680_regmap_config" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xe379d7db, "spi_setup" },
	{ 0xbcb90aa3, "spi_get_device_id" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x212ec5a7, "spi_write_then_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bme680_core";

MODULE_ALIAS("acpi*:BME0680:*");
MODULE_ALIAS("spi:bme680");

MODULE_INFO(srcversion, "C35F30F19E670A623FCFAB5");
