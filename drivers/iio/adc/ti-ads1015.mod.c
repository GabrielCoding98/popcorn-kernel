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
	{ 0x509f9dad, "iio_validate_scan_mask_onehot" },
	{ 0x2a0e3ce, "iio_triggered_buffer_predisable" },
	{ 0x4aa71c4d, "iio_triggered_buffer_postenable" },
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0xf7e9504c, "iio_push_event" },
	{ 0xb6a6cf5f, "__iio_device_register" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0x55aac369, "__pm_runtime_use_autosuspend" },
	{ 0xd2bd253d, "pm_runtime_set_autosuspend_delay" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x37bbe493, "of_get_next_child" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x9e4c5dd2, "irq_get_irq_data" },
	{ 0x92c4a1cd, "devm_iio_triggered_buffer_setup" },
	{ 0xbf93d2c1, "__devm_regmap_init_i2c" },
	{ 0x9d669763, "memcpy" },
	{ 0x87bcbcef, "of_device_get_match_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xee0193d, "devm_iio_device_alloc" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x39c0203a, "iio_device_release_direct_mode" },
	{ 0x6380e796, "iio_device_claim_direct_mode" },
	{ 0x712520a4, "iio_trigger_notify_done" },
	{ 0xeb06e6d9, "iio_push_to_buffers" },
	{ 0x5d4f218f, "iio_get_time_ns" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x23f2e361, "regmap_write" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x4b1d56ac, "__pm_runtime_suspend" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0x59a0e805, "regmap_get_device" },
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
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("of:N*T*Cti,ads1015");
MODULE_ALIAS("of:N*T*Cti,ads1015C*");
MODULE_ALIAS("of:N*T*Cti,ads1115");
MODULE_ALIAS("of:N*T*Cti,ads1115C*");
MODULE_ALIAS("i2c:ads1015");
MODULE_ALIAS("i2c:ads1115");

MODULE_INFO(srcversion, "E111AE36EB0F42C6AD3D840");
