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
	{ 0xb7700415, "param_ops_int" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xb1710a73, "devm_hwmon_device_register_with_groups" },
	{ 0x57019f83, "i2c_smbus_write_byte" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xb79eaee0, "i2c_smbus_write_word_data" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0x91715312, "sprintf" },
	{ 0x86b9933d, "i2c_smbus_read_word_data" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe6abbc5c, "i2c_smbus_write_byte_data" },
	{ 0xc565bdd5, "i2c_smbus_read_byte_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("i2c:ds1621");
MODULE_ALIAS("i2c:ds1625");
MODULE_ALIAS("i2c:ds1631");
MODULE_ALIAS("i2c:ds1721");
MODULE_ALIAS("i2c:ds1731");

MODULE_INFO(srcversion, "F3E8AB394ACEDC6F9AEB392");
