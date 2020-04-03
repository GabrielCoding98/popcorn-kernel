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
	{ 0xecab663, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7c3cf3c0, "v4l2_event_unsubscribe" },
	{ 0x4be85a03, "memweight" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0xcd3c6735, "v4l2_event_queue_fh" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xbbfda5f8, "vb2_mmap" },
	{ 0x629fd8e6, "usb_debug_root" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0xb305f90a, "vb2_create_bufs" },
	{ 0xf457358b, "vb2_fop_poll" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xcccf7cee, "vb2_ioctl_streamon" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x365c104a, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0xada294a0, "usb_enable_autosuspend" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x1b5c0864, "v4l2_ctrl_merge" },
	{ 0xeea0399, "strscpy" },
	{ 0x91715312, "sprintf" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4437c8, "vb2_vmalloc_memops" },
	{ 0x1a83cf9e, "usb_string" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x621c2633, "vb2_fop_mmap" },
	{ 0x46972fa6, "vb2_ioctl_qbuf" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x9c0abc0d, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0x71c90087, "memcmp" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0x109e978f, "media_entity_pads_init" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xa0b430b8, "v4l2_fh_init" },
	{ 0x6ab3edc4, "vb2_plane_vaddr" },
	{ 0x3f03f588, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x65354236, "usb_driver_claim_interface" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc3459069, "vb2_qbuf" },
	{ 0x31847ad9, "vb2_ioctl_prepare_buf" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8ee639ee, "vb2_ioctl_create_bufs" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0xc217bc0a, "vb2_querybuf" },
	{ 0x1ac9903e, "vb2_ioctl_dqbuf" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x36c6c2e5, "media_device_cleanup" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x4b77c88d, "v4l2_ctrl_replace" },
	{ 0xf6ed50a3, "vb2_streamon" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xf932b84f, "vb2_fop_release" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3a2e7343, "vb2_expbuf" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0xbc034315, "usb_driver_release_interface" },
	{ 0x489d494f, "input_free_device" },
	{ 0x71083355, "v4l2_device_register_subdev" },
	{ 0x36d2700a, "media_create_pad_link" },
	{ 0x78b0d37d, "vb2_reqbufs" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x659ecfbe, "usb_get_intf" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xeb06bceb, "v4l2_fh_open" },
	{ 0x13ccf4aa, "v4l2_subdev_init" },
	{ 0x45bb3cef, "vb2_ioctl_querybuf" },
	{ 0xfc16ec35, "__media_device_register" },
	{ 0x563de691, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0xac4c4e2c, "usb_match_one_id" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xa3219f77, "vb2_ops_wait_finish" },
	{ 0x7db6f1d9, "v4l2_fh_add" },
	{ 0x99c7805c, "v4l2_fh_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x4a02305a, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xdffb7682, "vb2_poll" },
	{ 0xf8b3ee3a, "media_device_init" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x3ed9cdfc, "usb_get_current_frame_number" },
	{ 0x54d8fb9f, "vb2_ioctl_streamoff" },
	{ 0x56bcf5b1, "vb2_queue_release" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xffca5afc, "vb2_streamoff" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x35409474, "media_device_unregister" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xb279b001, "usb_put_intf" },
	{ 0xa0fa5a1b, "v4l2_fh_exit" },
	{ 0x6df65bc1, "input_allocate_device" },
	{ 0x48837184, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc,media";

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "E15BADF249ED4762D2DF7F5");
