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
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7c3cf3c0, "v4l2_event_unsubscribe" },
	{ 0x54f6445d, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xacbd9fc9, "__media_pipeline_start" },
	{ 0x378db8d4, "media_device_unregister_entity_notify" },
	{ 0xe50e9349, "_vb2_fop_release" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x6e63a909, "dvb_unregister_adapter" },
	{ 0x86c21343, "media_device_unregister_entity" },
	{ 0x8e34d884, "v4l2_i2c_new_subdev" },
	{ 0xb58ea1cc, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x9a2d6de1, "dvb_frontend_suspend" },
	{ 0x56eda186, "dvb_register_frontend" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xa11abe59, "dvb_frontend_resume" },
	{ 0x84239571, "i2c_transfer" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x23fea89e, "__media_device_usb_init" },
	{ 0xf457358b, "vb2_fop_poll" },
	{ 0x297e0fea, "v4l2_mc_create_media_graph" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcccf7cee, "vb2_ioctl_streamon" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x6059de90, "v4l_disable_media_source" },
	{ 0x365c104a, "vb2_ops_wait_prepare" },
	{ 0x727f0c6, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x12bae986, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1db41bc6, "media_entity_setup_link" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0xc96d3cbd, "rc_allocate_device" },
	{ 0x16cd7e29, "dvb_net_release" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0xa359ecb9, "dvb_frontend_detach" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0x66c97ba0, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xee2afff0, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4437c8, "vb2_vmalloc_memops" },
	{ 0x235c2927, "rc_free_device" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x621c2633, "vb2_fop_mmap" },
	{ 0x46972fa6, "vb2_ioctl_qbuf" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xd3e56d1, "dvb_dmxdev_release" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0x109e978f, "media_entity_pads_init" },
	{ 0x1e3a1833, "dvb_net_init" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0x6ab3edc4, "vb2_plane_vaddr" },
	{ 0x3f03f588, "vb2_buffer_done" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xfb0ec729, "rc_register_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x31847ad9, "vb2_ioctl_prepare_buf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xae90000f, "tveeprom_read" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8ee639ee, "vb2_ioctl_create_bufs" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x1ac9903e, "vb2_ioctl_dqbuf" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xb1c4a9e7, "v4l_enable_media_source" },
	{ 0x36c6c2e5, "media_device_cleanup" },
	{ 0xb7863334, "media_device_register_entity" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xd95fb58a, "media_device_register_entity_notify" },
	{ 0xdafc31c5, "dvb_dmx_swfilter_packets" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x831d766c, "__media_pipeline_stop" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x36d2700a, "media_create_pad_link" },
	{ 0x7ced4282, "dvb_register_adapter" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xeb06bceb, "v4l2_fh_open" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0x45bb3cef, "vb2_ioctl_querybuf" },
	{ 0xfc16ec35, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xc2503e50, "__media_entity_setup_link" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xa3219f77, "vb2_ops_wait_finish" },
	{ 0xbc7a2017, "ir_raw_event_store" },
	{ 0x8ea0e54c, "i2c_probe_func_quick_read" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4a02305a, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3f9faef8, "vb2_ioctl_expbuf" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x54d8fb9f, "vb2_ioctl_streamoff" },
	{ 0x56bcf5b1, "vb2_queue_release" },
	{ 0xbdb42f86, "v4l2_device_put" },
	{ 0xe5a35223, "ir_raw_event_handle" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x35409474, "media_device_unregister" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf505c45c, "dvb_dmxdev_init" },
	{ 0x48837184, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,media,dvb-core,v4l2-common,tveeprom,videobuf2-vmalloc,videobuf2-common";

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6E2D901B73099B0CBAEE480");
