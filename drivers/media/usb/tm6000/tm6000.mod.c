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
	{ 0x54f6445d, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8dd94de1, "videobuf_mmap_mapper" },
	{ 0x8e34d884, "v4l2_i2c_new_subdev" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x4e3da87a, "videobuf_queue_vmalloc_init" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x1968ceaa, "usb_reset_configuration" },
	{ 0xdf84b98b, "videobuf_streamon" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xfcc2f1b3, "videobuf_iolock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0xc96d3cbd, "rc_allocate_device" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x5f754e5a, "memset" },
	{ 0x235c2927, "rc_free_device" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xcd63c91c, "videobuf_qbuf" },
	{ 0x71c90087, "memcmp" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xa0b430b8, "v4l2_fh_init" },
	{ 0x9c7f329, "v4l2_event_pending" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0xdf678f0c, "rc_keydown" },
	{ 0x7d18403d, "videobuf_querybuf" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xfb0ec729, "rc_register_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xaeca41f2, "videobuf_read_stream" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x5881879b, "videobuf_vmalloc_free" },
	{ 0x73deb095, "videobuf_to_vmalloc" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xd71da085, "videobuf_dqbuf" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x878fef3e, "videobuf_reqbufs" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x7db6f1d9, "v4l2_fh_add" },
	{ 0x99c7805c, "v4l2_fh_del" },
	{ 0xb79a0c96, "v4l2_ctrl_add_handler" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x1c483a9, "v4l2_get_timestamp" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0xb8a1612a, "v4l2_ctrl_poll" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa0fa5a1b, "v4l2_fh_exit" },
	{ 0xe064c362, "videobuf_streamoff" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videodev,v4l2-common,videobuf-vmalloc";

MODULE_ALIAS("usb:v6000p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pF332d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pB339d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0086d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3264d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "166F4C14EB216D952FBBC1E");
