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
	{ 0x5e68e436, "rtc_nvmem_register" },
	{ 0xf9721b52, "__rtc_register_device" },
	{ 0xa821ed26, "rtc_add_group" },
	{ 0x978e037a, "device_property_read_u32_array" },
	{ 0xb5b1e406, "device_property_read_u8_array" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x8e10f129, "devm_rtc_allocate_device" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x5f754e5a, "memset" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x59aa5df9, "rtc_update_irq" },
	{ 0xe8ff1363, "sysfs_notify" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x23f2e361, "regmap_write" },
	{ 0xfc440a95, "regmap_bulk_write" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8759bc86, "regmap_bulk_read" },
	{ 0x91715312, "sprintf" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028C*");

MODULE_INFO(srcversion, "658210B31A7B065D46962C8");
