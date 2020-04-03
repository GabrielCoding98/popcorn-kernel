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
	{ 0x5963c0bc, "em28xx_read_reg" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7c3cf3c0, "v4l2_event_unsubscribe" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x86c21343, "media_device_unregister_entity" },
	{ 0x8e34d884, "v4l2_i2c_new_subdev" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x2893b3bf, "em28xx_write_regs" },
	{ 0xcfb25f18, "v4l2_ctrl_notify" },
	{ 0x123d0d91, "em28xx_setup_xc3028" },
	{ 0x812d3483, "dev_printk" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf457358b, "vb2_fop_poll" },
	{ 0x297e0fea, "v4l2_mc_create_media_graph" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xcccf7cee, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x365c104a, "vb2_ops_wait_prepare" },
	{ 0x4d13cd8c, "em28xx_init_usb_xfer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5d5ffe3e, "em28xx_register_extension" },
	{ 0x1db41bc6, "media_entity_setup_link" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0x66c97ba0, "vb2_fop_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xee2afff0, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4437c8, "vb2_vmalloc_memops" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x621c2633, "vb2_fop_mmap" },
	{ 0x46972fa6, "vb2_ioctl_qbuf" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0x109e978f, "media_entity_pads_init" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0x6ab3edc4, "vb2_plane_vaddr" },
	{ 0x3f03f588, "vb2_buffer_done" },
	{ 0xe8253cbe, "em28xx_unregister_extension" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x31847ad9, "vb2_ioctl_prepare_buf" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x31acdf23, "em28xx_uninit_usb_xfer" },
	{ 0x8ee639ee, "vb2_ioctl_create_bufs" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x1ac9903e, "vb2_ioctl_dqbuf" },
	{ 0xb7863334, "media_device_register_entity" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x2f426a63, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf932b84f, "vb2_fop_release" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20d1a4d2, "em28xx_audio_setup" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0xe7a53342, "v4l2_i2c_subdev_addr" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xeb06bceb, "v4l2_fh_open" },
	{ 0x5644c828, "em28xx_set_mode" },
	{ 0x45bb3cef, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xa3219f77, "vb2_ops_wait_finish" },
	{ 0xca3634d, "em28xx_stop_urbs" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x5765f0d0, "em28xx_write_reg" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x6899820d, "em28xx_audio_analog_set" },
	{ 0x54d8fb9f, "vb2_ioctl_streamoff" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0x1d1b04a4, "em28xx_boards" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa3ddd155, "em28xx_init_camera" },
	{ 0x48837184, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,em28xx,videodev,media,v4l2-common,videobuf2-vmalloc,videobuf2-common";


MODULE_INFO(srcversion, "D3C49AE5B85C493509C4391");
