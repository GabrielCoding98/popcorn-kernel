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
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8d81a26a, "v4l2_event_queue" },
	{ 0xb58ea1cc, "v4l2_ctrl_log_status" },
	{ 0x88a65233, "snd_pcm_period_elapsed" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xde88e1cf, "v4l2_ctrl_g_ctrl" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf457358b, "vb2_fop_poll" },
	{ 0xcccf7cee, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x365c104a, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x93511241, "snd_card_disconnect" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0x66c97ba0, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4437c8, "vb2_vmalloc_memops" },
	{ 0xb12a7ed3, "snd_device_new" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x621c2633, "vb2_fop_mmap" },
	{ 0x46972fa6, "vb2_ioctl_qbuf" },
	{ 0x9c0abc0d, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x2371eede, "snd_pcm_set_ops" },
	{ 0xead2e9ef, "v4l2_ctrl_subscribe_event" },
	{ 0x6ab3edc4, "vb2_plane_vaddr" },
	{ 0x3f03f588, "vb2_buffer_done" },
	{ 0xbee78263, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x78f31eb5, "v4l2_ctrl_new_custom" },
	{ 0x5b0aeaf1, "snd_pcm_lib_ioctl" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x1ac9903e, "vb2_ioctl_dqbuf" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xcc8a4c98, "snd_card_new" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xf932b84f, "vb2_fop_release" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x843c5c75, "v4l2_ctrl_grab" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xeb06bceb, "v4l2_fh_open" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x45bb3cef, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xa3219f77, "vb2_ops_wait_finish" },
	{ 0xecb30410, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0xfbe59965, "snd_card_free" },
	{ 0x8e4b0c37, "v4l2_i2c_new_subdev_board" },
	{ 0x4c1734be, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xcaa6c808, "snd_pcm_new" },
	{ 0x99bb8806, "memmove" },
	{ 0x962498e4, "vmalloc_to_page" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x54d8fb9f, "vb2_ioctl_streamoff" },
	{ 0xbdb42f86, "v4l2_device_put" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0x48837184, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,snd-pcm,snd,videobuf2-vmalloc,videobuf2-common,v4l2-common";


MODULE_INFO(srcversion, "4A3A0E0B3AE18ABFFA669B1");
