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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc60f5cb1, "of_property_read_string" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x37bbe493, "of_get_next_child" },
	{ 0xc121b314, "devm_of_led_classdev_register" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc565bdd5, "i2c_smbus_read_byte_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe6abbc5c, "i2c_smbus_write_byte_data" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,pca9550");
MODULE_ALIAS("of:N*T*Cnxp,pca9550C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9551");
MODULE_ALIAS("of:N*T*Cnxp,pca9551C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9552");
MODULE_ALIAS("of:N*T*Cnxp,pca9552C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9553");
MODULE_ALIAS("of:N*T*Cnxp,pca9553C*");
MODULE_ALIAS("acpi*:PCA9550:*");
MODULE_ALIAS("acpi*:PCA9551:*");
MODULE_ALIAS("acpi*:PCA9552:*");
MODULE_ALIAS("acpi*:PCA9553:*");
MODULE_ALIAS("i2c:pca9550");
MODULE_ALIAS("i2c:pca9551");
MODULE_ALIAS("i2c:pca9552");
MODULE_ALIAS("i2c:pca9553");

MODULE_INFO(srcversion, "C1A5F1338770866071946F5");
