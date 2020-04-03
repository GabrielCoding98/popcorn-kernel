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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x9617b845, "devm_nvmem_register" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0x978e037a, "device_property_read_u32_array" },
	{ 0x59cd1807, "device_property_present" },
	{ 0x87bcbcef, "of_device_get_match_data" },
	{ 0x5920f98d, "of_match_device" },
	{ 0x2ca11a8d, "i2c_match_id" },
	{ 0xc7ae1587, "i2c_new_dummy" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x95aafef9, "__pm_runtime_set_status" },
	{ 0x82030b4e, "__pm_runtime_disable" },
	{ 0xeb9637f6, "i2c_unregister_device" },
	{ 0x8759bc86, "regmap_bulk_read" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x454e5b22, "__pm_runtime_idle" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfc440a95, "regmap_bulk_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:INT3499:*");
MODULE_ALIAS("of:N*T*Catmel,24c00");
MODULE_ALIAS("of:N*T*Catmel,24c00C*");
MODULE_ALIAS("of:N*T*Catmel,24c01");
MODULE_ALIAS("of:N*T*Catmel,24c01C*");
MODULE_ALIAS("of:N*T*Catmel,24cs01");
MODULE_ALIAS("of:N*T*Catmel,24cs01C*");
MODULE_ALIAS("of:N*T*Catmel,24c02");
MODULE_ALIAS("of:N*T*Catmel,24c02C*");
MODULE_ALIAS("of:N*T*Catmel,24cs02");
MODULE_ALIAS("of:N*T*Catmel,24cs02C*");
MODULE_ALIAS("of:N*T*Catmel,24mac402");
MODULE_ALIAS("of:N*T*Catmel,24mac402C*");
MODULE_ALIAS("of:N*T*Catmel,24mac602");
MODULE_ALIAS("of:N*T*Catmel,24mac602C*");
MODULE_ALIAS("of:N*T*Catmel,spd");
MODULE_ALIAS("of:N*T*Catmel,spdC*");
MODULE_ALIAS("of:N*T*Catmel,24c04");
MODULE_ALIAS("of:N*T*Catmel,24c04C*");
MODULE_ALIAS("of:N*T*Catmel,24cs04");
MODULE_ALIAS("of:N*T*Catmel,24cs04C*");
MODULE_ALIAS("of:N*T*Catmel,24c08");
MODULE_ALIAS("of:N*T*Catmel,24c08C*");
MODULE_ALIAS("of:N*T*Catmel,24cs08");
MODULE_ALIAS("of:N*T*Catmel,24cs08C*");
MODULE_ALIAS("of:N*T*Catmel,24c16");
MODULE_ALIAS("of:N*T*Catmel,24c16C*");
MODULE_ALIAS("of:N*T*Catmel,24cs16");
MODULE_ALIAS("of:N*T*Catmel,24cs16C*");
MODULE_ALIAS("of:N*T*Catmel,24c32");
MODULE_ALIAS("of:N*T*Catmel,24c32C*");
MODULE_ALIAS("of:N*T*Catmel,24cs32");
MODULE_ALIAS("of:N*T*Catmel,24cs32C*");
MODULE_ALIAS("of:N*T*Catmel,24c64");
MODULE_ALIAS("of:N*T*Catmel,24c64C*");
MODULE_ALIAS("of:N*T*Catmel,24cs64");
MODULE_ALIAS("of:N*T*Catmel,24cs64C*");
MODULE_ALIAS("of:N*T*Catmel,24c128");
MODULE_ALIAS("of:N*T*Catmel,24c128C*");
MODULE_ALIAS("of:N*T*Catmel,24c256");
MODULE_ALIAS("of:N*T*Catmel,24c256C*");
MODULE_ALIAS("of:N*T*Catmel,24c512");
MODULE_ALIAS("of:N*T*Catmel,24c512C*");
MODULE_ALIAS("of:N*T*Catmel,24c1024");
MODULE_ALIAS("of:N*T*Catmel,24c1024C*");
MODULE_ALIAS("of:N*T*Catmel,24c2048");
MODULE_ALIAS("of:N*T*Catmel,24c2048C*");
MODULE_ALIAS("i2c:24c00");
MODULE_ALIAS("i2c:24c01");
MODULE_ALIAS("i2c:24cs01");
MODULE_ALIAS("i2c:24c02");
MODULE_ALIAS("i2c:24cs02");
MODULE_ALIAS("i2c:24mac402");
MODULE_ALIAS("i2c:24mac602");
MODULE_ALIAS("i2c:spd");
MODULE_ALIAS("i2c:24c04");
MODULE_ALIAS("i2c:24cs04");
MODULE_ALIAS("i2c:24c08");
MODULE_ALIAS("i2c:24cs08");
MODULE_ALIAS("i2c:24c16");
MODULE_ALIAS("i2c:24cs16");
MODULE_ALIAS("i2c:24c32");
MODULE_ALIAS("i2c:24cs32");
MODULE_ALIAS("i2c:24c64");
MODULE_ALIAS("i2c:24cs64");
MODULE_ALIAS("i2c:24c128");
MODULE_ALIAS("i2c:24c256");
MODULE_ALIAS("i2c:24c512");
MODULE_ALIAS("i2c:24c1024");
MODULE_ALIAS("i2c:24c2048");
MODULE_ALIAS("i2c:at24");

MODULE_INFO(srcversion, "CF8005C9D18D570747BC98A");
