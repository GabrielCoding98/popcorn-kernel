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
	{ 0xf4713f06, "drm_mode_get_hv_timing" },
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x712e21d, "drm_edid_get_monitor_name" },
	{ 0x9a8a57a4, "drm_atomic_get_connector_state" },
	{ 0xff0c294e, "drm_bridge_mode_valid" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd60df2, "drm_get_connector_status_name" },
	{ 0x3db2087a, "drm_calc_timestamping_constants" },
	{ 0x10264a08, "drm_get_edid" },
	{ 0x91fec1cc, "drm_rect_calc_vscale" },
	{ 0xded290fb, "try_wait_for_completion" },
	{ 0xca1bc089, "drm_atomic_nonblocking_commit" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x63837d2b, "drm_mode_validate_ycbcr420" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xbfade8d0, "drm_bridge_disable" },
	{ 0x1b548b02, "drm_mode_create_from_cmdline_mode" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xc2f1e17, "framebuffer_release" },
	{ 0x31443b46, "drm_modeset_drop_locks" },
	{ 0x863dc23d, "drm_atomic_set_fence_for_plane" },
	{ 0x14c4be2c, "drm_bridge_pre_enable" },
	{ 0x48e7fdf6, "unlink_framebuffer" },
	{ 0x2df63988, "drm_property_create_blob" },
	{ 0x3f69b3da, "drm_mode_config_reset" },
	{ 0x112b1576, "drm_atomic_state_clear" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x9da882a7, "drm_bridge_attach" },
	{ 0xb3a4abe, "drm_mode_destroy" },
	{ 0xe765a87c, "drm_property_blob_put" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x491483ea, "seq_puts" },
	{ 0x8ef5d0eb, "drm_property_blob_get" },
	{ 0x4d974b9c, "register_sysrq_key" },
	{ 0x7a0af5b5, "drm_connector_set_tile_property" },
	{ 0x84239571, "i2c_transfer" },
	{ 0x1b077fe0, "drm_atomic_get_plane_state" },
	{ 0x380b5fbb, "__drm_get_edid_firmware_path" },
	{ 0x8819dbc4, "fb_sys_read" },
	{ 0xf1421d13, "drm_mode_sort" },
	{ 0x88128fba, "drm_modeset_backoff" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x6fd2cc24, "cfb_fillrect" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x9709dbc5, "current_work" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x42cbce0b, "drm_plane_force_disable" },
	{ 0x999e8297, "vfree" },
	{ 0x5adfd950, "drm_encoder_init" },
	{ 0xaaefff9b, "drm_modeset_acquire_fini" },
	{ 0xf965cf8e, "drm_object_property_set_value" },
	{ 0xd3b63d51, "drm_connector_list_iter_next" },
	{ 0xecff2dc3, "sys_copyarea" },
	{ 0xa68613dd, "get_jiffies_64" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xa8d3417e, "devres_alloc_node" },
	{ 0x66551bc7, "drm_detect_monitor_audio" },
	{ 0x4e50cf33, "drm_universal_plane_init" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0xd534d3f4, "drm_get_format_info" },
	{ 0xfe17eb25, "drm_connector_cleanup" },
	{ 0x6e9006be, "drm_atomic_set_mode_prop_for_crtc" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xae277372, "__drm_crtc_commit_free" },
	{ 0x3cdad3ec, "drm_client_release" },
	{ 0xb7b9f674, "drm_atomic_set_mode_for_crtc" },
	{ 0x754f348a, "complete_all" },
	{ 0xe670cb6b, "fb_set_suspend" },
	{ 0xc631580a, "console_unlock" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xcb2340b8, "drm_rect_debug_print" },
	{ 0x31b8a5e3, "__drm_set_edid_firmware_path" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0x4a56103b, "drm_bridge_post_disable" },
	{ 0xda91260c, "drm_connector_update_edid_property" },
	{ 0x5f754e5a, "memset" },
	{ 0xdd24bac1, "drm_atomic_state_alloc" },
	{ 0x4c83a865, "drm_mode_copy" },
	{ 0xb946613f, "drm_atomic_commit" },
	{ 0x481b37e9, "drm_mode_find_dmt" },
	{ 0x713c09d1, "drm_client_add" },
	{ 0x82270cc3, "cfb_imageblit" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe4e929ad, "drm_crtc_vblank_put" },
	{ 0xd40fb291, "drm_bridge_enable" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x604d1f65, "drm_mode_duplicate" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x6e1a43ba, "drm_crtc_init_with_planes" },
	{ 0x71c90087, "memcmp" },
	{ 0x6e30ba8e, "drm_rect_rotate_inv" },
	{ 0x7778cb43, "drm_atomic_set_crtc_for_connector" },
	{ 0xf76af6f7, "drm_gem_handle_create" },
	{ 0xff40f789, "drm_gem_object_put_unlocked" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0x7d620d00, "register_framebuffer" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xedfb229f, "drm_panel_attach" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf967bdf4, "drm_atomic_set_fb_for_plane" },
	{ 0xca251d82, "drm_modeset_lock_all_ctx" },
	{ 0xa28cae56, "devm_kfree" },
	{ 0x1dd71f7a, "drm_err" },
	{ 0xb3b1679c, "drm_connector_init" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x745c6d71, "drm_property_replace_blob" },
	{ 0xf4e36330, "drm_modeset_unlock" },
	{ 0x446c77bb, "drm_modeset_lock" },
	{ 0x27673ce, "drm_mode_validate_size" },
	{ 0xf39902, "drm_crtc_wait_one_vblank" },
	{ 0xbb89671, "drm_client_init" },
	{ 0xe8cdea47, "drm_atomic_get_crtc_state" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x77c59098, "module_put" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0xbd8f34ee, "drm_dev_printk" },
	{ 0x6e6454e6, "drm_framebuffer_remove" },
	{ 0x566f3d2b, "drm_mode_set_crtcinfo" },
	{ 0xf351fffd, "drm_plane_cleanup" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x5f4f1d03, "drm_client_dev_hotplug" },
	{ 0xf985b850, "drm_mode_prune_invalid" },
	{ 0x40c0cbfb, "drm_atomic_set_crtc_for_plane" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xf194eecd, "drm_connector_list_iter_end" },
	{ 0x12a38747, "usleep_range" },
	{ 0xec126abe, "sys_fillrect" },
	{ 0x3129a3e9, "drm_mode_match" },
	{ 0x3955cc04, "drm_atomic_private_obj_fini" },
	{ 0x40d04664, "console_trylock" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xcde24ddb, "sys_imageblit" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xb053adda, "drm_rect_rotate" },
	{ 0xb2f340c0, "drm_sysfs_hotplug_event" },
	{ 0xc96bdf98, "drm_atomic_normalize_zpos" },
	{ 0xe46e0085, "fb_sys_write" },
	{ 0xd76bd05d, "drm_mode_debug_printmodeline" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0x6dd6d391, "drm_bridge_mode_fixup" },
	{ 0xf793d112, "drm_connector_attach_encoder" },
	{ 0x62713bee, "drm_crtc_send_vblank_event" },
	{ 0x4a2c6b86, "drm_gem_object_lookup" },
	{ 0x4a9ca3ad, "drm_crtc_vblank_get" },
	{ 0xabb8a1ec, "drm_mode_object_put" },
	{ 0xe164d5a9, "drm_bridge_remove" },
	{ 0xfc0e4b90, "drm_add_modes_noedid" },
	{ 0xd14f4ea7, "drm_format_plane_cpp" },
	{ 0xab9a29dd, "dma_fence_wait_timeout" },
	{ 0xf436e6e0, "devres_add" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x83812349, "drm_warn_on_modeset_not_all_locked" },
	{ 0xb63217a9, "drm_modeset_acquire_init" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa15f07ae, "drm_encoder_cleanup" },
	{ 0x6723b181, "framebuffer_alloc" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x58b04d8b, "fb_deferred_io_cleanup" },
	{ 0x7a40e7dd, "drm_mode_set_config_internal" },
	{ 0xcd020b29, "fb_deferred_io_init" },
	{ 0x1044e94f, "drm_connector_list_iter_begin" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x8cf1b70e, "drm_crtc_cleanup" },
	{ 0x47f985aa, "drm_edid_duplicate" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x182bd834, "drm_mode_object_get" },
	{ 0x99fd20aa, "drm_rect_clip_scaled" },
	{ 0x7f4f708, "drm_panel_detach" },
	{ 0x5185c98f, "drm_client_framebuffer_create" },
	{ 0xd63fafc2, "div64_u64_rem" },
	{ 0xbb833c09, "drm_mode_equal" },
	{ 0xca3ce63e, "drm_client_framebuffer_delete" },
	{ 0x7ed3fb4f, "drm_atomic_private_obj_init" },
	{ 0x93c751dc, "drm_modeset_lock_all" },
	{ 0x49970de8, "finish_wait" },
	{ 0xcc391b46, "drm_crtc_vblank_count" },
	{ 0x2d50570f, "drm_rect_calc_hscale" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0x6f3f8b59, "cfb_copyarea" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x34510743, "drm_atomic_add_affected_connectors" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb3f19de, "drm_mode_probed_add" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x925d6969, "drm_modeset_unlock_all" },
	{ 0x7877f7f5, "drm_bridge_mode_set" },
	{ 0x5f718965, "drm_atomic_get_private_obj_state" },
	{ 0x7954490b, "drm_mode_plane_set_obj_prop" },
	{ 0x9e5464f4, "drm_atomic_add_affected_planes" },
	{ 0x187d953, "drm_dev_dbg" },
	{ 0xddeedd4, "drm_mode_validate_driver" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x9672f532, "drm_framebuffer_init" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x1a2331d3, "drm_add_override_edid_modes" },
	{ 0xcbc9557f, "unregister_sysrq_key" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0x1718c50c, "drm_bridge_add" },
	{ 0xa6904789, "drm_mode_object_find" },
	{ 0x2d43eaae, "drm_connector_list_update" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xb859f38b, "krealloc" },
	{ 0xc185ccd7, "drm_mode_vrefresh" },
	{ 0x12e7d898, "drm_framebuffer_cleanup" },
	{ 0x500d5ec6, "unregister_framebuffer" },
	{ 0x7a0daeeb, "drm_crtc_add_crc_entry" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,fb_sys_fops,syscopyarea,sysfillrect,sysimgblt";


MODULE_INFO(srcversion, "E553C145A14AA332E1FE99E");
