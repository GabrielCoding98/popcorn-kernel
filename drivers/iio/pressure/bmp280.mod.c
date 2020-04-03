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
	{ 0x454e5b22, "__pm_runtime_idle" },
	{ 0x82030b4e, "__pm_runtime_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x55aac369, "__pm_runtime_use_autosuspend" },
	{ 0x4b1d56ac, "__pm_runtime_suspend" },
	{ 0x242978bc, "regulator_disable" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x8759bc86, "regmap_bulk_read" },
	{ 0xe8a03332, "devm_gpiod_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x1eb64646, "div64_s64" },
	{ 0x2aec9181, "iio_device_unregister" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xee0193d, "devm_iio_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb6a6cf5f, "__iio_device_register" },
	{ 0x9e4c5dd2, "irq_get_irq_data" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xaf1df355, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0x95aafef9, "__pm_runtime_set_status" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xd2bd253d, "pm_runtime_set_autosuspend_delay" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xd1a1d33a, "gpiod_set_value" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x366f068, "regulator_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";


MODULE_INFO(srcversion, "E5409A225D9B78987B411DD");
