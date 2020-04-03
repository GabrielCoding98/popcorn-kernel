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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7c3cf3c0, "v4l2_event_unsubscribe" },
	{ 0xcf44e6ed, "v4l2_ctrl_cluster" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0x12c9d152, "usb_altnum_to_altsetting" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb58ea1cc, "v4l2_ctrl_log_status" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf457358b, "vb2_fop_poll" },
	{ 0xcccf7cee, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x365c104a, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0x66c97ba0, "vb2_fop_read" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xee2afff0, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4437c8, "vb2_vmalloc_memops" },
	{ 0x1a83cf9e, "usb_string" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x621c2633, "vb2_fop_mmap" },
	{ 0x46972fa6, "vb2_ioctl_qbuf" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0x6ab3edc4, "vb2_plane_vaddr" },
	{ 0x3f03f588, "vb2_buffer_done" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x78f31eb5, "v4l2_ctrl_new_custom" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x1ac9903e, "vb2_ioctl_dqbuf" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xf932b84f, "vb2_fop_release" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x489d494f, "input_free_device" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0x954dad06, "v4l2_ctrl_auto_cluster" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xeb06bceb, "v4l2_fh_open" },
	{ 0x45bb3cef, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xa3219f77, "vb2_ops_wait_finish" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4a02305a, "usb_ifnum_to_if" },
	{ 0xb81960ca, "snprintf" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x54d8fb9f, "vb2_ioctl_streamoff" },
	{ 0xbdb42f86, "v4l2_device_put" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6df65bc1, "input_allocate_device" },
	{ 0x48837184, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common";

MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "45044496615B03126E60D68");
