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
	{ 0x4a692631, "tinydrm_swab16" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x226c9b6d, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x753748af, "tinydrm_xrgb8888_to_rgb565" },
	{ 0x3f69b3da, "drm_mode_config_reset" },
	{ 0x242978bc, "regulator_disable" },
	{ 0x78d9bae1, "drm_gem_fb_create_handle" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0x759f7158, "single_release" },
	{ 0x19da0438, "tinydrm_spi_max_transfer_size" },
	{ 0x491483ea, "seq_puts" },
	{ 0x5818d081, "devm_tinydrm_init" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xa5724742, "tinydrm_spi_transfer" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x8e3afba1, "seq_read" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x25f36d88, "tinydrm_merge_clips" },
	{ 0x3d98f034, "drm_fb_cma_get_gem_obj" },
	{ 0x71e8a69d, "tinydrm_spi_bpw_supported" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x1dd71f7a, "drm_err" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x3a2b5793, "dma_buf_begin_cpu_access" },
	{ 0xbd8f34ee, "drm_dev_printk" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8769a04c, "tinydrm_memcpy" },
	{ 0x1c4d213c, "tinydrm_display_pipe_init" },
	{ 0x4e095f11, "drm_get_format_name" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x127307ee, "dma_buf_end_cpu_access" },
	{ 0x1f372aa1, "tinydrm_fb_dirty" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x366f068, "regulator_enable" },
	{ 0xf4d67b31, "drm_gem_fb_destroy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tinydrm,drm,drm_kms_helper";


MODULE_INFO(srcversion, "8A8484F509E62BF370EA02E");
