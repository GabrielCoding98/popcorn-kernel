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
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xc60f5cb1, "of_property_read_string" },
	{ 0x37bbe493, "of_get_next_child" },
	{ 0x5920f98d, "of_match_device" },
	{ 0xbcd63380, "of_led_classdev_register" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xe7f8a6ba, "devm_input_allocate_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf999f91b, "led_classdev_unregister" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xc565bdd5, "i2c_smbus_read_byte_data" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe6abbc5c, "i2c_smbus_write_byte_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,pca9530");
MODULE_ALIAS("of:N*T*Cnxp,pca9530C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9531");
MODULE_ALIAS("of:N*T*Cnxp,pca9531C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9532");
MODULE_ALIAS("of:N*T*Cnxp,pca9532C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9533");
MODULE_ALIAS("of:N*T*Cnxp,pca9533C*");
MODULE_ALIAS("i2c:pca9530");
MODULE_ALIAS("i2c:pca9531");
MODULE_ALIAS("i2c:pca9532");
MODULE_ALIAS("i2c:pca9533");

MODULE_INFO(srcversion, "C2323D61B1975D448FB906B");
