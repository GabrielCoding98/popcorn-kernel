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
	{ 0x50dfe490, "iio_read_const_attr" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xb6a6cf5f, "__iio_device_register" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x43fe12b0, "regmap_field_update_bits_base" },
	{ 0xaf82da14, "devm_regmap_field_alloc" },
	{ 0x55aac369, "__pm_runtime_use_autosuspend" },
	{ 0xd2bd253d, "pm_runtime_set_autosuspend_delay" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0xff49db9e, "iio_device_attach_buffer" },
	{ 0xa83e05ec, "devm_iio_kfifo_allocate" },
	{ 0xee0193d, "devm_iio_device_alloc" },
	{ 0x4b1d56ac, "__pm_runtime_suspend" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0xfc440a95, "regmap_bulk_write" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeb06e6d9, "iio_push_to_buffers" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x23f2e361, "regmap_write" },
	{ 0xf7e9504c, "iio_push_event" },
	{ 0x5d4f218f, "iio_get_time_ns" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8759bc86, "regmap_bulk_read" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x95aafef9, "__pm_runtime_set_status" },
	{ 0x82030b4e, "__pm_runtime_disable" },
	{ 0x2aec9181, "iio_device_unregister" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,kfifo_buf";

MODULE_ALIAS("of:N*T*Cavago,apds9960");
MODULE_ALIAS("of:N*T*Cavago,apds9960C*");
MODULE_ALIAS("i2c:apds9960");

MODULE_INFO(srcversion, "584E5C1C74ADC9B322F3CDC");
