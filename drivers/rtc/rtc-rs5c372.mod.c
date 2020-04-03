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
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x919f98dd, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x8bdf4c25, "devm_rtc_device_register" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x87bcbcef, "of_device_get_match_data" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xe6abbc5c, "i2c_smbus_write_byte_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x84239571, "i2c_transfer" },
	{ 0x6136ff8e, "i2c_smbus_read_i2c_block_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x91715312, "sprintf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x37788505, "device_remove_file" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cricoh,r2025sd");
MODULE_ALIAS("of:N*T*Cricoh,r2025sdC*");
MODULE_ALIAS("of:N*T*Cricoh,r2221tl");
MODULE_ALIAS("of:N*T*Cricoh,r2221tlC*");
MODULE_ALIAS("of:N*T*Cricoh,rs5c372a");
MODULE_ALIAS("of:N*T*Cricoh,rs5c372aC*");
MODULE_ALIAS("of:N*T*Cricoh,rs5c372b");
MODULE_ALIAS("of:N*T*Cricoh,rs5c372bC*");
MODULE_ALIAS("of:N*T*Cricoh,rv5c386");
MODULE_ALIAS("of:N*T*Cricoh,rv5c386C*");
MODULE_ALIAS("of:N*T*Cricoh,rv5c387a");
MODULE_ALIAS("of:N*T*Cricoh,rv5c387aC*");
MODULE_ALIAS("i2c:r2025sd");
MODULE_ALIAS("i2c:r2221tl");
MODULE_ALIAS("i2c:rs5c372a");
MODULE_ALIAS("i2c:rs5c372b");
MODULE_ALIAS("i2c:rv5c386");
MODULE_ALIAS("i2c:rv5c387a");

MODULE_INFO(srcversion, "F4067D7BD95304B2B835C94");
