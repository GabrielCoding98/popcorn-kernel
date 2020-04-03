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
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xf9721b52, "__rtc_register_device" },
	{ 0x8e10f129, "devm_rtc_allocate_device" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8759bc86, "regmap_bulk_read" },
	{ 0x23f2e361, "regmap_write" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfc440a95, "regmap_bulk_write" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cepson,rx8581");
MODULE_ALIAS("of:N*T*Cepson,rx8581C*");
MODULE_ALIAS("i2c:rx8581");

MODULE_INFO(srcversion, "B1B9F9D033577C6308CA9A7");
