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
	{ 0x92b57248, "flush_work" },
	{ 0x68a9ed0b, "videobuf_mmap_free" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7c3cf3c0, "v4l2_event_unsubscribe" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xab4ccadf, "i2c_mux_add_adapter" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8dd94de1, "videobuf_mmap_mapper" },
	{ 0x8e34d884, "v4l2_i2c_new_subdev" },
	{ 0xb58ea1cc, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xbaf269a6, "i2c_mux_del_adapters" },
	{ 0x4648dcc4, "usb_reset_endpoint" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0x84239571, "i2c_transfer" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x23fea89e, "__media_device_usb_init" },
	{ 0x92dd0bbd, "cx2341x_handler_set_50hz" },
	{ 0x258fdd05, "cx2341x_handler_init" },
	{ 0x4e3da87a, "videobuf_queue_vmalloc_init" },
	{ 0x297e0fea, "v4l2_mc_create_media_graph" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xdf84b98b, "videobuf_streamon" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x12bae986, "__video_register_device" },
	{ 0xfcc2f1b3, "videobuf_iolock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x1db41bc6, "media_entity_setup_link" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0xc96d3cbd, "rc_allocate_device" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x4248e6e, "i2c_mux_alloc" },
	{ 0xafa08984, "v4l2_s_ctrl" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xcd63c91c, "videobuf_qbuf" },
	{ 0x71c90087, "memcmp" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0x109e978f, "media_entity_pads_init" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xa0b430b8, "v4l2_fh_init" },
	{ 0x9c7f329, "v4l2_event_pending" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0x7d18403d, "videobuf_querybuf" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xaeca41f2, "videobuf_read_stream" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0xeb9637f6, "i2c_unregister_device" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x36c6c2e5, "media_device_cleanup" },
	{ 0xb7863334, "media_device_register_entity" },
	{ 0x1e205ed9, "videobuf_stop" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xafd9380f, "cx2341x_handler_setup" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0x5881879b, "videobuf_vmalloc_free" },
	{ 0x73deb095, "videobuf_to_vmalloc" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xd71da085, "videobuf_dqbuf" },
	{ 0x11f69c5f, "videobuf_queue_is_busy" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0xfc16ec35, "__media_device_register" },
	{ 0x3dd14b50, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x878fef3e, "videobuf_reqbufs" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xecb30410, "request_firmware" },
	{ 0x7db6f1d9, "v4l2_fh_add" },
	{ 0x99c7805c, "v4l2_fh_del" },
	{ 0xb79a0c96, "v4l2_ctrl_add_handler" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0xf143ff7f, "v4l2_ctrl_radio_filter" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xf4f9f0ed, "videobuf_read_stop" },
	{ 0x64f88cff, "i2c_new_device" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x35409474, "media_device_unregister" },
	{ 0x1c483a9, "v4l2_get_timestamp" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0x3ce8d437, "videobuf_poll_stream" },
	{ 0xb8a1612a, "v4l2_ctrl_poll" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa0fa5a1b, "v4l2_fh_exit" },
	{ 0xe064c362, "videobuf_streamoff" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videodev,i2c-mux,v4l2-common,tveeprom,media,cx2341x,videobuf-vmalloc";

MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApC039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v199Ep8002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "833BB907F41CA6C8626D853");
