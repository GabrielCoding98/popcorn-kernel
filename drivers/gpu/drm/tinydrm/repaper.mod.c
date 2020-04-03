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
	{ 0x8a150d84, "drm_gem_cma_vm_ops" },
	{ 0x16935569, "drm_gem_cma_dumb_create" },
	{ 0xc71d1661, "drm_gem_cma_prime_mmap" },
	{ 0x9990f8cd, "drm_gem_cma_prime_vunmap" },
	{ 0xb1aac757, "drm_gem_cma_prime_vmap" },
	{ 0x1ae33339, "tinydrm_gem_cma_prime_import_sg_table" },
	{ 0x12b109a5, "drm_gem_cma_prime_get_sg_table" },
	{ 0x2b35fbf9, "drm_gem_prime_import" },
	{ 0x1e55ea05, "drm_gem_prime_export" },
	{ 0xec38f1e, "drm_gem_prime_fd_to_handle" },
	{ 0xe7f919cb, "drm_gem_prime_handle_to_fd" },
	{ 0xd3742b82, "drm_gem_cma_print_info" },
	{ 0xf8434934, "tinydrm_gem_cma_free_object" },
	{ 0x21fc232a, "drm_release" },
	{ 0x91a73f38, "drm_open" },
	{ 0x6cf48f21, "drm_gem_cma_mmap" },
	{ 0xa39e7c3d, "drm_ioctl" },
	{ 0x9bf56829, "drm_poll" },
	{ 0xfbba21bf, "drm_read" },
	{ 0x988694e4, "noop_llseek" },
	{ 0x7821d6e8, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0xb025a0cf, "tinydrm_display_pipe_update" },
	{ 0x1f372aa1, "tinydrm_fb_dirty" },
	{ 0x78d9bae1, "drm_gem_fb_create_handle" },
	{ 0xf4d67b31, "drm_gem_fb_destroy" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4a6b7d00, "gpiod_get_value_cansleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x127307ee, "dma_buf_end_cpu_access" },
	{ 0x174722f, "tinydrm_xrgb8888_to_gray8" },
	{ 0x3a2b5793, "dma_buf_begin_cpu_access" },
	{ 0x8d1da06, "thermal_zone_get_temp" },
	{ 0x3d98f034, "drm_fb_cma_get_gem_obj" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x6123290a, "devm_tinydrm_register" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0x3f69b3da, "drm_mode_config_reset" },
	{ 0x1c4d213c, "tinydrm_display_pipe_init" },
	{ 0xbcb90aa3, "spi_get_device_id" },
	{ 0x5818d081, "devm_tinydrm_init" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0xbd8f34ee, "drm_dev_printk" },
	{ 0x839de520, "thermal_zone_get_zone_by_name" },
	{ 0xb12ee814, "device_property_read_string" },
	{ 0xe8a03332, "devm_gpiod_get" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x5920f98d, "of_match_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x272039e0, "tinydrm_shutdown" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,tinydrm,drm_kms_helper";

MODULE_ALIAS("spi:e1144cs021");
MODULE_ALIAS("spi:e1190cs021");
MODULE_ALIAS("spi:e2200cs021");
MODULE_ALIAS("spi:e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021C*");

MODULE_INFO(srcversion, "8DB9B51A4313B2A4F95E4AB");
