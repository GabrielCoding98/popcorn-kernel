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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x31a5bcf6, "wm8804_probe" },
	{ 0xce31d195, "wm8804_regmap_config" },
	{ 0x50d5ab9d, "wm8804_remove" },
	{ 0x8baddb3, "wm8804_pm" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-wm8804";

MODULE_ALIAS("of:N*T*Cwlf,wm8804");
MODULE_ALIAS("of:N*T*Cwlf,wm8804C*");
MODULE_ALIAS("i2c:wm8804");

MODULE_INFO(srcversion, "A33869EAEB45AF30CBF34FA");
