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
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x8bdf4c25, "devm_rtc_device_register" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x91715312, "sprintf" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x373db350, "kstrtoint" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0x9d669763, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x84239571, "i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x37788505, "device_remove_file" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,bq32000");
MODULE_ALIAS("of:N*T*Cti,bq32000C*");
MODULE_ALIAS("i2c:bq32000");

MODULE_INFO(srcversion, "0BAB81E6C7129B64BF7DE6D");
