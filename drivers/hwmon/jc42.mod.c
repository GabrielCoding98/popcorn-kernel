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
	{ 0xbdd64d38, "devm_hwmon_device_register_with_info" },
	{ 0x59cd1807, "device_property_present" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb79eaee0, "i2c_smbus_write_word_data" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x86b9933d, "i2c_smbus_read_word_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cjedec,jc-42.4-temp");
MODULE_ALIAS("of:N*T*Cjedec,jc-42.4-tempC*");
MODULE_ALIAS("i2c:jc42");

MODULE_INFO(srcversion, "8266BE52238B9D1A36BECF3");
