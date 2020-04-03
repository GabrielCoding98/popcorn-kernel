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
	{ 0x6b568ade, "nonseekable_open" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0x759f7158, "single_release" },
	{ 0x8e3afba1, "seq_read" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0xd56ba424, "misc_deregister" },
	{ 0x5d28d988, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x67cebeb, "proc_mkdir" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0x8a0b551, "misc_register" },
	{ 0x58c9433d, "__class_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x4993f112, "bioset_init" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0x13906b2, "bio_alloc_bioset" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x44ec6118, "bd_set_size" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x99278263, "__blkdev_driver_ioctl" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0x96234732, "bio_put" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x24868151, "freezing_slow_path" },
	{ 0x9f52df86, "clear_wb_congested" },
	{ 0xece784c2, "rb_first" },
	{ 0x195f176c, "bio_list_copy_data" },
	{ 0x7bb82bb7, "generic_make_request" },
	{ 0x278606ec, "mempool_free" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xee768af3, "set_user_nice" },
	{ 0xca9360b5, "rb_next" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0x851dd2f, "device_create" },
	{ 0x24f0c6ce, "device_add_disk" },
	{ 0xe418e0c6, "proc_create_single_data" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0xbd101f33, "blk_queue_max_hw_sectors" },
	{ 0x94f54421, "blk_queue_logical_block_size" },
	{ 0x1ccae26b, "blk_queue_make_request" },
	{ 0x7a4f588c, "set_blocksize" },
	{ 0xf7350193, "__module_get" },
	{ 0xf9e91451, "blkdev_get" },
	{ 0xce1256c4, "bdget" },
	{ 0xa12e827e, "blk_alloc_queue" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa6d550a, "__alloc_disk_node" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x27ab8b8a, "mempool_init" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x77c59098, "module_put" },
	{ 0x7825541a, "mempool_exit" },
	{ 0x3e84150f, "put_disk" },
	{ 0x331e09fc, "blk_cleanup_queue" },
	{ 0xb15ec07c, "del_gendisk" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x881838c, "blkdev_put" },
	{ 0x16eee64a, "device_unregister" },
	{ 0x25897c6, "debugfs_remove" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x226c9b6d, "single_open" },
	{ 0xf4e5e0ab, "kobject_put" },
	{ 0xe18b6e3d, "kobject_uevent" },
	{ 0x134f1a4a, "kobject_init_and_add" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4924e2b6, "bio_devname" },
	{ 0x502e6409, "bio_endio" },
	{ 0x7c32d0f0, "printk" },
	{ 0x85623b96, "bio_clone_fast" },
	{ 0x64999478, "congestion_wait" },
	{ 0x342e216a, "set_wb_congested" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0xec230abf, "bio_chain" },
	{ 0x25b0f868, "bio_split" },
	{ 0x117d609c, "blk_queue_split" },
	{ 0xffeb8534, "bio_add_page" },
	{ 0x54dcc4f5, "bio_reset" },
	{ 0x5f754e5a, "memset" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x4e312f13, "bdevname" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbb24f607, "init_cdrom_command" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2620bd18, "blk_put_request" },
	{ 0x8e82d635, "blk_execute_rq" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x8b538f54, "blk_rq_map_kern" },
	{ 0x14cb758b, "blk_get_request" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "B54E102470A1133F9747062");
