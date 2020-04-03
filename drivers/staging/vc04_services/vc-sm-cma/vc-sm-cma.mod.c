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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa738c28a, "module_layout" },
	{ 0x32c3ca87, "v7_dma_flush_range" },
	{ 0x56253a11, "v7_dma_inv_range" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa7ab0408, "v7_dma_clean_range" },
	{ 0x7435b5d9, "dma_release_from_dev_coherent" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0x226c9b6d, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0x759f7158, "single_release" },
	{ 0x491483ea, "seq_puts" },
	{ 0x347e59c9, "vchi_initialise" },
	{ 0x5a3ecf1e, "dma_buf_detach" },
	{ 0x431f3c4b, "vchi_service_open" },
	{ 0xd0d9eeb6, "down_interruptible" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xfffa3100, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x45a172d0, "vchi_queue_kernel_message" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0x8e3afba1, "seq_read" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x4390690, "vchi_service_use" },
	{ 0x6216493d, "vchi_msg_peek" },
	{ 0xf7ec2e9e, "dma_alloc_from_dev_coherent" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8a0b551, "misc_register" },
	{ 0x75198ad6, "dma_common_get_sgtable" },
	{ 0x5f754e5a, "memset" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0xfc90ea41, "vchi_msg_remove" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x942af5b4, "dma_buf_fd" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0x6aafcf33, "dma_buf_put" },
	{ 0xb45f9c3e, "vchi_connect" },
	{ 0x9cb30027, "dma_buf_get" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x370a2982, "dma_buf_unmap_attachment" },
	{ 0xa22e9df3, "vchiq_add_connected_callback" },
	{ 0x4784c007, "vchi_service_close" },
	{ 0x61275678, "idr_remove" },
	{ 0x1700a495, "sg_alloc_table" },
	{ 0x34f85168, "dma_buf_map_attachment" },
	{ 0x3a07733, "dma_buf_export" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6ae198f8, "vchi_service_release" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xded75b3b, "dma_buf_attach" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x581cde4e, "up" },
	{ 0xee768af3, "set_user_nice" },
	{ 0x51cdec, "dma_common_mmap" },
	{ 0xba5f3cda, "sg_free_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xaf38e081, "idr_find" },
	{ 0xd56ba424, "misc_deregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C4DEB8E0D2AEB887B60C049");
