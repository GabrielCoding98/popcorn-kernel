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
	{ 0xef918c3c, "arizona_pm_ops" },
	{ 0x3dc526a9, "arizona_of_match" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x7abe4b1b, "arizona_dev_init" },
	{ 0xa5644abf, "__devm_regmap_init_spi" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xe6c4bc85, "wm5102_spi_regmap" },
	{ 0x917ab1b8, "arizona_of_get_type" },
	{ 0xbcb90aa3, "spi_get_device_id" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x908f3219, "arizona_dev_exit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:wm5102");
MODULE_ALIAS("spi:wm5110");
MODULE_ALIAS("spi:wm8280");
MODULE_ALIAS("spi:wm1831");
MODULE_ALIAS("spi:cs47l24");

MODULE_INFO(srcversion, "8254B9613C99874B614FC85");
