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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xde88e1cf, "v4l2_ctrl_g_ctrl" },
	{ 0xf457358b, "vb2_fop_poll" },
	{ 0xcccf7cee, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x365c104a, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0x66c97ba0, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xee2afff0, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4437c8, "vb2_vmalloc_memops" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x621c2633, "vb2_fop_mmap" },
	{ 0x46972fa6, "vb2_ioctl_qbuf" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0x6ab3edc4, "vb2_plane_vaddr" },
	{ 0x3f03f588, "vb2_buffer_done" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8ee639ee, "vb2_ioctl_create_bufs" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x1ac9903e, "vb2_ioctl_dqbuf" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x9f8c16c3, "__v4l2_ctrl_s_ctrl" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xf932b84f, "vb2_fop_release" },
	{ 0x78ad49cb, "vb2_queue_error" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0x489d494f, "input_free_device" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xeb06bceb, "v4l2_fh_open" },
	{ 0x45bb3cef, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0xa3219f77, "vb2_ops_wait_finish" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4a02305a, "usb_ifnum_to_if" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3f9faef8, "vb2_ioctl_expbuf" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x54d8fb9f, "vb2_ioctl_streamoff" },
	{ 0xbdb42f86, "v4l2_device_put" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x6df65bc1, "input_allocate_device" },
	{ 0x48837184, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common";


MODULE_INFO(srcversion, "95B9F6CB22B7D9A85528EB6");
