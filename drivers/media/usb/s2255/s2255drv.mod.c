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
	{ 0xb7700415, "param_ops_int" },
	{ 0x7c3cf3c0, "v4l2_event_unsubscribe" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0xb58ea1cc, "v4l2_ctrl_log_status" },
	{ 0x54d8fb9f, "vb2_ioctl_streamoff" },
	{ 0xcccf7cee, "vb2_ioctl_streamon" },
	{ 0x1ac9903e, "vb2_ioctl_dqbuf" },
	{ 0x46972fa6, "vb2_ioctl_qbuf" },
	{ 0x45bb3cef, "vb2_ioctl_querybuf" },
	{ 0xecab663, "vb2_ioctl_reqbufs" },
	{ 0xf932b84f, "vb2_fop_release" },
	{ 0x621c2633, "vb2_fop_mmap" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0xf457358b, "vb2_fop_poll" },
	{ 0x66c97ba0, "vb2_fop_read" },
	{ 0xa3219f77, "vb2_ops_wait_finish" },
	{ 0x365c104a, "vb2_ops_wait_prepare" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xeb06bceb, "v4l2_fh_open" },
	{ 0x78f31eb5, "v4l2_ctrl_new_custom" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x48837184, "vb2_queue_init" },
	{ 0xf4437c8, "vb2_vmalloc_memops" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0xecb30410, "request_firmware" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0xee2afff0, "v4l2_device_disconnect" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0xb81960ca, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9f8c16c3, "__v4l2_ctrl_s_ctrl" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0x3f03f588, "vb2_buffer_done" },
	{ 0x6ab3edc4, "vb2_plane_vaddr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5f754e5a, "memset" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x9d669763, "memcpy" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x7c32d0f0, "printk" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,videobuf2-v4l2,videobuf2-vmalloc,videobuf2-common";

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3C76B0B1DA1755B93F1883E");
