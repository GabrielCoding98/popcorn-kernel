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
	{ 0x59aa5df9, "rtc_update_irq" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xf9721b52, "__rtc_register_device" },
	{ 0x7c35d0aa, "devm_add_action" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x8e10f129, "devm_rtc_allocate_device" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc60f5cb1, "of_property_read_string" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x6136ff8e, "i2c_smbus_read_i2c_block_data" },
	{ 0x919f98dd, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84b183ae, "strncmp" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xe6abbc5c, "i2c_smbus_write_byte_data" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xc565bdd5, "i2c_smbus_read_byte_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:abx80x");
MODULE_ALIAS("i2c:ab0801");
MODULE_ALIAS("i2c:ab0803");
MODULE_ALIAS("i2c:ab0804");
MODULE_ALIAS("i2c:ab0805");
MODULE_ALIAS("i2c:ab1801");
MODULE_ALIAS("i2c:ab1803");
MODULE_ALIAS("i2c:ab1804");
MODULE_ALIAS("i2c:ab1805");
MODULE_ALIAS("i2c:rv1805");

MODULE_INFO(srcversion, "A6B03D24BC2EB1F9670CF75");
