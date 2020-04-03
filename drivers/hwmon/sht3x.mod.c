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
	{ 0xb1710a73, "devm_hwmon_device_register_with_groups" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x91715312, "sprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x373db350, "kstrtoint" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x5a742e56, "crc8" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x12a38747, "usleep_range" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon,crc8";

MODULE_ALIAS("i2c:sht3x");
MODULE_ALIAS("i2c:sts3x");

MODULE_INFO(srcversion, "5B32386917D79DAF609A115");