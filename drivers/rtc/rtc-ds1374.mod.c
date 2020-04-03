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
	{ 0x919f98dd, "i2c_smbus_write_i2c_block_data" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x8bdf4c25, "devm_rtc_device_register" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x59aa5df9, "rtc_update_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6136ff8e, "i2c_smbus_read_i2c_block_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6abbc5c, "i2c_smbus_write_byte_data" },
	{ 0xc565bdd5, "i2c_smbus_read_byte_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2dc9c197, "devm_free_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cdallas,ds1374");
MODULE_ALIAS("of:N*T*Cdallas,ds1374C*");
MODULE_ALIAS("i2c:ds1374");

MODULE_INFO(srcversion, "D2579312091AABCF13989F2");
