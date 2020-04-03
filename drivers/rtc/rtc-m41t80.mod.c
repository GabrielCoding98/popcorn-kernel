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
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x82c15070, "of_clk_add_provider" },
	{ 0x6698dc04, "of_clk_src_simple_get" },
	{ 0x61e490e8, "clk_register" },
	{ 0xc60f5cb1, "of_property_read_string" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xf9721b52, "__rtc_register_device" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x8e10f129, "devm_rtc_allocate_device" },
	{ 0x87bcbcef, "of_device_get_match_data" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x59aa5df9, "rtc_update_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x6136ff8e, "i2c_smbus_read_i2c_block_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x919f98dd, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe6abbc5c, "i2c_smbus_write_byte_data" },
	{ 0xc565bdd5, "i2c_smbus_read_byte_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cst,m41t62");
MODULE_ALIAS("of:N*T*Cst,m41t62C*");
MODULE_ALIAS("of:N*T*Cst,m41t65");
MODULE_ALIAS("of:N*T*Cst,m41t65C*");
MODULE_ALIAS("of:N*T*Cst,m41t80");
MODULE_ALIAS("of:N*T*Cst,m41t80C*");
MODULE_ALIAS("of:N*T*Cst,m41t81");
MODULE_ALIAS("of:N*T*Cst,m41t81C*");
MODULE_ALIAS("of:N*T*Cst,m41t81s");
MODULE_ALIAS("of:N*T*Cst,m41t81sC*");
MODULE_ALIAS("of:N*T*Cst,m41t82");
MODULE_ALIAS("of:N*T*Cst,m41t82C*");
MODULE_ALIAS("of:N*T*Cst,m41t83");
MODULE_ALIAS("of:N*T*Cst,m41t83C*");
MODULE_ALIAS("of:N*T*Cst,m41t84");
MODULE_ALIAS("of:N*T*Cst,m41t84C*");
MODULE_ALIAS("of:N*T*Cst,m41t85");
MODULE_ALIAS("of:N*T*Cst,m41t85C*");
MODULE_ALIAS("of:N*T*Cst,m41t87");
MODULE_ALIAS("of:N*T*Cst,m41t87C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv4162");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv4162C*");
MODULE_ALIAS("of:N*T*Cst,rv4162");
MODULE_ALIAS("of:N*T*Cst,rv4162C*");
MODULE_ALIAS("of:N*T*Crv4162");
MODULE_ALIAS("of:N*T*Crv4162C*");
MODULE_ALIAS("i2c:m41t62");
MODULE_ALIAS("i2c:m41t65");
MODULE_ALIAS("i2c:m41t80");
MODULE_ALIAS("i2c:m41t81");
MODULE_ALIAS("i2c:m41t81s");
MODULE_ALIAS("i2c:m41t82");
MODULE_ALIAS("i2c:m41t83");
MODULE_ALIAS("i2c:m41st84");
MODULE_ALIAS("i2c:m41st85");
MODULE_ALIAS("i2c:m41st87");
MODULE_ALIAS("i2c:rv4162");

MODULE_INFO(srcversion, "DFB64531D9B2A3D6F3AE9FA");
