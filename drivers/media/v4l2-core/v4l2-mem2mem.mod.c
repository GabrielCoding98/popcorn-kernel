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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x86c21343, "media_device_unregister_entity" },
	{ 0xbbfda5f8, "vb2_mmap" },
	{ 0xb216ab37, "media_devnode_create" },
	{ 0xb305f90a, "vb2_create_bufs" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xd9a416e2, "media_remove_intf_links" },
	{ 0xb2ff0902, "vb2_prepare_buf" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x109e978f, "media_entity_pads_init" },
	{ 0x9c7f329, "v4l2_event_pending" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc3459069, "vb2_qbuf" },
	{ 0xc217bc0a, "vb2_querybuf" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb7863334, "media_device_register_entity" },
	{ 0xf6ed50a3, "vb2_streamon" },
	{ 0xf0ede9c1, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3a2e7343, "vb2_expbuf" },
	{ 0x1000e51, "schedule" },
	{ 0x36d2700a, "media_create_pad_link" },
	{ 0x78b0d37d, "vb2_reqbufs" },
	{ 0x56b1a970, "media_entity_remove_links" },
	{ 0x74789fca, "media_create_intf_link" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x563de691, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x56bcf5b1, "vb2_queue_release" },
	{ 0xffca5afc, "vb2_streamoff" },
	{ 0x72bcd42f, "media_devnode_remove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=media,videobuf2-common,videobuf2-v4l2,videodev";


MODULE_INFO(srcversion, "9FEFE209520CF58DA4DFD27");
