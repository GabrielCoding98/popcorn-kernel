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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1cf5954a, "drm_dev_register" },
	{ 0xe0c8b7e9, "drm_dev_alloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc1cf0cd3, "drm_mode_config_cleanup" },
	{ 0x4c68a6a9, "drm_atomic_helper_connector_reset" },
	{ 0x3fc04be4, "drm_helper_probe_single_connector_modes" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9e8d134e, "drm_dev_unref" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xfe17eb25, "drm_connector_cleanup" },
	{ 0x733cfa33, "drm_simple_display_pipe_init" },
	{ 0x63636e66, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xf6c052dc, "dma_buf_vunmap" },
	{ 0xd711ebdf, "drm_fbdev_generic_setup" },
	{ 0x6559a45d, "drm_gem_fb_create_with_funcs" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x4c83a865, "drm_mode_copy" },
	{ 0xbc5bece1, "drm_dev_unregister" },
	{ 0x96a4677c, "drm_mode_set_name" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x604d1f65, "drm_mode_duplicate" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x1dd71f7a, "drm_err" },
	{ 0xb3b1679c, "drm_connector_init" },
	{ 0xf4e36330, "drm_modeset_unlock" },
	{ 0x446c77bb, "drm_modeset_lock" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x7c35d0aa, "devm_add_action" },
	{ 0xe5b74984, "drm_atomic_helper_connector_destroy_state" },
	{ 0xc2acc033, "hex_dump_to_buffer" },
	{ 0x1134a113, "drm_atomic_helper_check" },
	{ 0x486dcd1d, "drm_atomic_helper_commit" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x62713bee, "drm_crtc_send_vblank_event" },
	{ 0xd14f4ea7, "drm_format_plane_cpp" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5ff3a84b, "drm_gem_cma_prime_import_sg_table" },
	{ 0xe44f88a2, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x59044d04, "drm_atomic_helper_shutdown" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb3f19de, "drm_mode_probed_add" },
	{ 0x99516c6d, "drm_gem_cma_free_object" },
	{ 0x3b07763a, "dma_buf_vmap" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x29a676f, "drm_dev_enter" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper";


MODULE_INFO(srcversion, "4996CF4CB4AB6B00040C28A");
