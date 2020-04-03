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
	{ 0x37788505, "device_remove_file" },
	{ 0x6a06d63b, "usb_function_deactivate" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7c3cf3c0, "v4l2_event_unsubscribe" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x527a46c6, "usb_ep_autoconfig_ss" },
	{ 0x72a32592, "usb_gstrings_attach" },
	{ 0x4c438863, "usb_free_all_descriptors" },
	{ 0x23da0b34, "video_device_release_empty" },
	{ 0x887ec63d, "usb_ep_disable" },
	{ 0x5a9fff9e, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8d81a26a, "v4l2_event_queue" },
	{ 0xbbfda5f8, "vb2_mmap" },
	{ 0x367f38d9, "usb_ep_queue" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8178afc0, "config_item_put" },
	{ 0x365c104a, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x12bae986, "__video_register_device" },
	{ 0x1f02a56b, "config_item_init_type_name" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x945d354d, "usb_ep_set_halt" },
	{ 0x3204e6a1, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0x4dac9ca5, "usb_function_unregister" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0xebb96821, "usb_function_activate" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4437c8, "vb2_vmalloc_memops" },
	{ 0x51d050a, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x9c0abc0d, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x32f05388, "video_unregister_device" },
	{ 0xe8d55f0f, "usb_ep_autoconfig" },
	{ 0xa0b430b8, "v4l2_fh_init" },
	{ 0x6ab3edc4, "vb2_plane_vaddr" },
	{ 0x3f03f588, "vb2_buffer_done" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc3459069, "vb2_qbuf" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0x310917fe, "sort" },
	{ 0xc217bc0a, "vb2_querybuf" },
	{ 0x31b5ed77, "usb_function_register" },
	{ 0xa49c7013, "usb_composite_setup_continue" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x6468ba35, "usb_ep_dequeue" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xf6ed50a3, "vb2_streamon" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x8191d049, "config_ep_by_speed" },
	{ 0x86ccf98c, "hex2bin" },
	{ 0x78b0d37d, "vb2_reqbufs" },
	{ 0xcd2b3b73, "usb_ep_free_request" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x563de691, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0xa3219f77, "vb2_ops_wait_finish" },
	{ 0x7db6f1d9, "v4l2_fh_add" },
	{ 0xce548b86, "usb_interface_id" },
	{ 0x99c7805c, "v4l2_fh_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdffb7682, "vb2_poll" },
	{ 0x56bcf5b1, "vb2_queue_release" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x96c25614, "config_group_find_item" },
	{ 0xffca5afc, "vb2_streamoff" },
	{ 0x46c5b78e, "video_ioctl2" },
	{ 0xa0fa5a1b, "v4l2_fh_exit" },
	{ 0x48837184, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,videodev,udc-core,videobuf2-common,videobuf2-v4l2,videobuf2-vmalloc";


MODULE_INFO(srcversion, "E1119B03A76A3336870A86E");
