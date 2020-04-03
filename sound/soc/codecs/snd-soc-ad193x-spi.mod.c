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
	{ 0xa5644abf, "__devm_regmap_init_spi" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x60837ec1, "ad193x_regmap_config" },
	{ 0xefb142cb, "ad193x_probe" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0xbcb90aa3, "spi_get_device_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-ad193x";

MODULE_ALIAS("spi:ad193x");
MODULE_ALIAS("spi:ad1933");
MODULE_ALIAS("spi:ad1934");
MODULE_ALIAS("spi:ad1938");
MODULE_ALIAS("spi:ad1939");
MODULE_ALIAS("spi:adau1328");

MODULE_INFO(srcversion, "5495BA05B078190B0FB1DB3");
