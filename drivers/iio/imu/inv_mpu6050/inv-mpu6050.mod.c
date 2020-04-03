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
	{ 0xf9a482f9, "msleep" },
	{ 0x3d4024cb, "of_iio_read_mount_matrix" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x50dfe490, "iio_read_const_attr" },
	{ 0x712520a4, "iio_trigger_notify_done" },
	{ 0x8759bc86, "regmap_bulk_read" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfc440a95, "regmap_bulk_write" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe21b524e, "devm_iio_trigger_alloc" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xee0193d, "devm_iio_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe186359a, "__devm_iio_device_register" },
	{ 0xb48b45a5, "__devm_iio_trigger_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9e4c5dd2, "irq_get_irq_data" },
	{ 0x373db350, "kstrtoint" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x6380e796, "iio_device_claim_direct_mode" },
	{ 0xddb0e719, "iio_show_mount_matrix" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47d7efde, "get_device" },
	{ 0xf7350193, "__module_get" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x39c0203a, "iio_device_release_direct_mode" },
	{ 0x92c4a1cd, "devm_iio_triggered_buffer_setup" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xeb06e6d9, "iio_push_to_buffers" },
	{ 0x59a0e805, "regmap_get_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x23f2e361, "regmap_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-buffer";


MODULE_INFO(srcversion, "39548210797A7BF61D0EC41");
