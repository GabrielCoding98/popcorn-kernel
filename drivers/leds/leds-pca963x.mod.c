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
	{ 0xca7b87c7, "_dev_err" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x9a3f3efa, "of_get_property" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x37bbe493, "of_get_next_child" },
	{ 0xbcd63380, "of_led_classdev_register" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe6abbc5c, "i2c_smbus_write_byte_data" },
	{ 0xc565bdd5, "i2c_smbus_read_byte_data" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf999f91b, "led_classdev_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,pca9632");
MODULE_ALIAS("of:N*T*Cnxp,pca9632C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9633");
MODULE_ALIAS("of:N*T*Cnxp,pca9633C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9634");
MODULE_ALIAS("of:N*T*Cnxp,pca9634C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9635");
MODULE_ALIAS("of:N*T*Cnxp,pca9635C*");
MODULE_ALIAS("acpi*:PCA9632:*");
MODULE_ALIAS("acpi*:PCA9633:*");
MODULE_ALIAS("acpi*:PCA9634:*");
MODULE_ALIAS("acpi*:PCA9635:*");
MODULE_ALIAS("i2c:pca9632");
MODULE_ALIAS("i2c:pca9633");
MODULE_ALIAS("i2c:pca9634");
MODULE_ALIAS("i2c:pca9635");

MODULE_INFO(srcversion, "B48417881F5C8CE6942CCB2");
