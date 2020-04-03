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
	{ 0x12a9ba7d, "iio_triggered_buffer_setup" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xee0193d, "devm_iio_device_alloc" },
	{ 0x2a0e3ce, "iio_triggered_buffer_predisable" },
	{ 0x4aa71c4d, "iio_triggered_buffer_postenable" },
	{ 0xb79eaee0, "i2c_smbus_write_word_data" },
	{ 0x39c0203a, "iio_device_release_direct_mode" },
	{ 0x6380e796, "iio_device_claim_direct_mode" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x712520a4, "iio_trigger_notify_done" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeb06e6d9, "iio_push_to_buffers" },
	{ 0x5d4f218f, "iio_get_time_ns" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0x12a38747, "usleep_range" },
	{ 0x57019f83, "i2c_smbus_write_byte" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x688c7365, "iio_triggered_buffer_cleanup" },
	{ 0x2aec9181, "iio_device_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("of:N*T*Cti,hdc1000");
MODULE_ALIAS("of:N*T*Cti,hdc1000C*");
MODULE_ALIAS("of:N*T*Cti,hdc1008");
MODULE_ALIAS("of:N*T*Cti,hdc1008C*");
MODULE_ALIAS("of:N*T*Cti,hdc1010");
MODULE_ALIAS("of:N*T*Cti,hdc1010C*");
MODULE_ALIAS("of:N*T*Cti,hdc1050");
MODULE_ALIAS("of:N*T*Cti,hdc1050C*");
MODULE_ALIAS("of:N*T*Cti,hdc1080");
MODULE_ALIAS("of:N*T*Cti,hdc1080C*");
MODULE_ALIAS("i2c:hdc100x");
MODULE_ALIAS("i2c:hdc1000");
MODULE_ALIAS("i2c:hdc1008");
MODULE_ALIAS("i2c:hdc1010");
MODULE_ALIAS("i2c:hdc1050");
MODULE_ALIAS("i2c:hdc1080");

MODULE_INFO(srcversion, "8D900DFEF99406F913D78BC");
