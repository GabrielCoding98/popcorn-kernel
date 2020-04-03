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
	{ 0x21fc232a, "drm_release" },
	{ 0xd0d0a279, "drm_prime_gem_destroy" },
	{ 0xe9617992, "drm_fb_helper_set_par" },
	{ 0x653da474, "drm_fb_helper_ioctl" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x68b84f5d, "drm_crtc_helper_set_config" },
	{ 0x1cf5954a, "drm_dev_register" },
	{ 0x8b4df0f6, "drm_gem_put_pages" },
	{ 0x8e76814c, "drm_fb_helper_initial_config" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x25ac2101, "drm_gem_dmabuf_release" },
	{ 0xc1cf0cd3, "drm_mode_config_cleanup" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0x9aff674f, "drm_fb_helper_unlink_fbi" },
	{ 0x5a3ecf1e, "dma_buf_detach" },
	{ 0x40c2750e, "drm_fb_helper_debug_leave" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3fc04be4, "drm_helper_probe_single_connector_modes" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xfffa3100, "sg_next" },
	{ 0x680d4387, "drm_gem_free_mmap_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5adfd950, "drm_encoder_init" },
	{ 0xebffe6f0, "drm_dev_fini" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xf76b0a59, "read_current_timer" },
	{ 0xfe17eb25, "drm_connector_cleanup" },
	{ 0x8e0f8194, "drm_fb_helper_unregister_fbi" },
	{ 0xf6c052dc, "dma_buf_vunmap" },
	{ 0x521d9f34, "usb_get_descriptor" },
	{ 0xeb36d901, "drm_fb_helper_pan_display" },
	{ 0xda91260c, "drm_connector_update_edid_property" },
	{ 0x32722d3f, "drm_helper_connector_dpms" },
	{ 0x55bf28ec, "drm_dev_put" },
	{ 0x5f754e5a, "memset" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x36712373, "drm_prime_pages_to_sg" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x1901caf6, "drm_helper_mode_fill_fb_struct" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf76af6f7, "drm_gem_handle_create" },
	{ 0x4fd0308d, "vmap" },
	{ 0xff40f789, "drm_gem_object_put_unlocked" },
	{ 0x6aafcf33, "dma_buf_put" },
	{ 0x57e509b5, "drm_fb_helper_fill_var" },
	{ 0x7cdeeb4d, "pgprot_user" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdbfedbaa, "drm_gem_object_release" },
	{ 0xf0ef52e8, "down" },
	{ 0xfbba21bf, "drm_read" },
	{ 0x988694e4, "noop_llseek" },
	{ 0xd295c2a1, "drm_add_edid_modes" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x370a2982, "dma_buf_unmap_attachment" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x1dd71f7a, "drm_err" },
	{ 0xb3b1679c, "drm_connector_init" },
	{ 0x9a41d935, "drm_kms_helper_poll_enable" },
	{ 0x1a34b1bf, "drm_dev_unplug" },
	{ 0xe3f6dfdf, "drm_fb_helper_prepare" },
	{ 0x8a049098, "drm_gem_vm_open" },
	{ 0x2a6d2868, "vm_insert_page" },
	{ 0x5d29111a, "drm_gem_vm_close" },
	{ 0x1700a495, "sg_alloc_table" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xec38f1e, "drm_gem_prime_fd_to_handle" },
	{ 0x3a2b5793, "dma_buf_begin_cpu_access" },
	{ 0xa39e7c3d, "drm_ioctl" },
	{ 0x8a12bd6, "drm_fb_helper_sys_imageblit" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xb12b9073, "drm_gem_mmap" },
	{ 0x34f85168, "dma_buf_map_attachment" },
	{ 0xc7382923, "drm_gem_dmabuf_export" },
	{ 0x79eb01f6, "drm_framebuffer_unregister_private" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20dbd96d, "drm_fb_helper_check_var" },
	{ 0x26b37de, "drm_fb_helper_blank" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x801c3669, "drm_dev_init" },
	{ 0xf793d112, "drm_connector_attach_encoder" },
	{ 0x62713bee, "drm_crtc_send_vblank_event" },
	{ 0x4a2c6b86, "drm_gem_object_lookup" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x126bdef9, "drm_fb_helper_alloc_fbi" },
	{ 0x52be1f97, "drm_crtc_init" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xded75b3b, "dma_buf_attach" },
	{ 0xe7f919cb, "drm_gem_prime_handle_to_fd" },
	{ 0x47d7efde, "get_device" },
	{ 0x369a5b77, "drm_connector_unregister" },
	{ 0x3c5202a5, "drm_gem_object_init" },
	{ 0xa15f07ae, "drm_encoder_cleanup" },
	{ 0x58b04d8b, "fb_deferred_io_cleanup" },
	{ 0xcd020b29, "fb_deferred_io_init" },
	{ 0x7c2b5da0, "drm_gem_create_mmap_offset" },
	{ 0x8cf1b70e, "drm_crtc_cleanup" },
	{ 0xe44f88a2, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x7dc644ce, "remap_pfn_range" },
	{ 0x9d669763, "memcpy" },
	{ 0xfd3f75fd, "drm_fb_helper_deferred_io" },
	{ 0x581cde4e, "up" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xa410ddd3, "drm_fb_helper_fini" },
	{ 0x93c751dc, "drm_modeset_lock_all" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0xba5f3cda, "sg_free_table" },
	{ 0xb0f8a1fb, "vm_get_page_prot" },
	{ 0x7dae849e, "drm_prime_sg_to_page_addr_arrays" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe70e4aee, "drm_fb_helper_sys_fillrect" },
	{ 0x925d6969, "drm_modeset_unlock_all" },
	{ 0x50856d05, "drm_helper_disable_unused_functions" },
	{ 0x127307ee, "dma_buf_end_cpu_access" },
	{ 0xd38a3d70, "drm_fb_helper_setcmap" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x9672f532, "drm_framebuffer_init" },
	{ 0x68f4e99, "drm_kms_helper_poll_init" },
	{ 0x3b07763a, "dma_buf_vmap" },
	{ 0x4c4d61ca, "drm_fb_helper_sys_copyarea" },
	{ 0x8bf2c21f, "drm_gem_get_pages" },
	{ 0x3f62d000, "drm_fb_helper_fill_fix" },
	{ 0x7a1f1bf8, "drm_connector_register" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x9cf41a78, "down_timeout" },
	{ 0xd543f66c, "drm_kms_helper_poll_disable" },
	{ 0xa6904789, "drm_mode_object_find" },
	{ 0x29a676f, "drm_dev_enter" },
	{ 0x962505b9, "drm_fb_helper_debug_enter" },
	{ 0x9bf56829, "drm_poll" },
	{ 0x24704494, "drm_fb_helper_init" },
	{ 0x4352f6c, "drm_fb_helper_single_add_all_connectors" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x91a73f38, "drm_open" },
	{ 0x37756fef, "drm_kms_helper_poll_fini" },
	{ 0x12e7d898, "drm_framebuffer_cleanup" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper";

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "E4CDEF97ECE5EDFF100EDEB");