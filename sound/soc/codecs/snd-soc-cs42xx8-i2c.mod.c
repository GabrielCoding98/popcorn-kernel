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
	{ 0x454e5b22, "__pm_runtime_idle" },
	{ 0x82030b4e, "__pm_runtime_disable" },
	{ 0x3254b1b0, "cs42xx8_probe" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x66a49a37, "cs42xx8_pm" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x7cac7292, "cs42888_data" },
	{ 0xcd3794c9, "cs42448_data" },
	{ 0x6a693c2d, "cs42xx8_regmap_config" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-cs42xx8";

MODULE_ALIAS("i2c:cs42448");
MODULE_ALIAS("i2c:cs42888");
MODULE_ALIAS("of:N*T*Ccirrus,cs42448");
MODULE_ALIAS("of:N*T*Ccirrus,cs42448C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs42888");
MODULE_ALIAS("of:N*T*Ccirrus,cs42888C*");

MODULE_INFO(srcversion, "1ED4C16128706A02C0E84C1");
