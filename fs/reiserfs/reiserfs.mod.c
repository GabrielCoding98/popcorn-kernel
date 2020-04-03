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
	{ 0xd7213f64, "get_acl" },
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0xf6d8e65a, "page_zero_new_buffers" },
	{ 0xd5c1c4ea, "dquot_alloc" },
	{ 0x91c00aec, "dquot_destroy" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x83a489a8, "drop_nlink" },
	{ 0xe569f4be, "__bdevname" },
	{ 0x64ac2467, "up_read" },
	{ 0x53537d10, "make_bad_inode" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0x736a9528, "__mark_inode_dirty" },
	{ 0xc2451da0, "mem_map" },
	{ 0x98e44e86, "dquot_writeback_dquots" },
	{ 0x2507d457, "__set_page_dirty_nobuffers" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x499628ad, "dquot_acquire" },
	{ 0x5eb012f7, "d_set_d_op" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x442a0fee, "iget5_locked" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x64999478, "congestion_wait" },
	{ 0x1403717f, "bdev_read_only" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xd2cd4fd6, "seq_escape" },
	{ 0x5fb27a1b, "dquot_file_open" },
	{ 0x5b0cae9c, "dquot_get_next_id" },
	{ 0x625d49c5, "dquot_mark_dquot_dirty" },
	{ 0x491483ea, "seq_puts" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x89895426, "is_bad_inode" },
	{ 0x268d514b, "blkdev_issue_flush" },
	{ 0x87324752, "pagecache_get_page" },
	{ 0xff2d2445, "dquot_quota_on_mount" },
	{ 0xf7f5e85b, "posix_acl_access_xattr_handler" },
	{ 0x1d7cd2a5, "posix_acl_update_mode" },
	{ 0x73a87a0b, "__lock_page" },
	{ 0x775773e3, "ll_rw_block" },
	{ 0x1a6fb2ad, "__lock_buffer" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0x4bf8b484, "dput" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x1d7c7abc, "dquot_quota_off" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xf7a70f1a, "inc_nlink" },
	{ 0xcc63c811, "block_read_full_page" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe4265320, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc43ffdca, "__dquot_free_space" },
	{ 0x9a7c0d99, "d_instantiate_new" },
	{ 0x88420fef, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x1947fec4, "__getblk_gfp" },
	{ 0x79b45d56, "igrab" },
	{ 0x6200e9f4, "unlock_buffer" },
	{ 0xeea0399, "strscpy" },
	{ 0xe7a36287, "__dquot_alloc_space" },
	{ 0x5f380d70, "redirty_page_for_writepage" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x42d4b4ba, "dquot_get_dqblk" },
	{ 0x81ce3fd4, "insert_inode_locked4" },
	{ 0x5650a8c1, "truncate_setsize" },
	{ 0xa95f25ca, "try_to_release_page" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf1c2ed95, "down_read" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc9107ffc, "end_page_writeback" },
	{ 0x71f478e1, "d_delete" },
	{ 0xf843245d, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x85c282ba, "inode_owner_or_capable" },
	{ 0x41eacf6a, "mpage_readpages" },
	{ 0x5f754e5a, "memset" },
	{ 0x515dce3e, "from_kuid" },
	{ 0x6625efdd, "dquot_alloc_inode" },
	{ 0xbe75e45, "__bread_gfp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x62e4013f, "posix_acl_chmod" },
	{ 0x646cf275, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0x7c1372e8, "panic" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x8311ed65, "__sync_dirty_buffer" },
	{ 0x8d4384ab, "from_kgid" },
	{ 0x1bfa805d, "blkdev_get_by_path" },
	{ 0x5a503b0b, "seq_putc" },
	{ 0x84b183ae, "strncmp" },
	{ 0x33c84fc9, "posix_acl_alloc" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe24e7589, "set_nlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8ddcd6ae, "__wait_on_buffer" },
	{ 0x122170da, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa7d17c3b, "setattr_copy" },
	{ 0x456ce17c, "dquot_resume" },
	{ 0xa681fe88, "generate_random_uuid" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xfc318ea9, "sync_dirty_buffer" },
	{ 0x599f1a0c, "blkdev_get_by_dev" },
	{ 0xc8cdd3eb, "set_cached_acl" },
	{ 0xe8f35534, "unlock_page" },
	{ 0x6b2a1083, "generic_file_read_iter" },
	{ 0x25c777e3, "up_write" },
	{ 0xad05f6ae, "shrink_dcache_sb" },
	{ 0x76e18a1a, "down_write" },
	{ 0xfa39ce94, "inode_nohighmem" },
	{ 0x9a4392b7, "posix_acl_create" },
	{ 0x6332f31f, "__brelse" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8e004c50, "dquot_set_dqblk" },
	{ 0xf0a033c7, "mark_buffer_async_write" },
	{ 0xb0f1f191, "file_write_and_wait_range" },
	{ 0x29726fd3, "inode_init_once" },
	{ 0x159355a, "mnt_drop_write_file" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf5b666ef, "__cond_resched_lock" },
	{ 0xaa01c9e5, "xattr_full_name" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0x881838c, "blkdev_put" },
	{ 0x7b69ad6f, "dquot_quota_on" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x41485947, "dquot_initialize" },
	{ 0xfccf0c9f, "sync_mapping_buffers" },
	{ 0xd332be36, "generic_file_mmap" },
	{ 0xd1555ac8, "truncate_inode_pages_final" },
	{ 0x226919b5, "create_empty_buffers" },
	{ 0x128add25, "try_to_free_buffers" },
	{ 0x16589dfe, "make_kuid" },
	{ 0x19d8ab1c, "generic_cont_expand_simple" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x72f439b4, "dquot_quota_sync" },
	{ 0xb08cb609, "unlock_new_inode" },
	{ 0x41567b01, "mnt_want_write_file" },
	{ 0x62090b6f, "kill_block_super" },
	{ 0x8c4e48f7, "inode_newsize_ok" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x516cc64a, "inode_set_bytes" },
	{ 0xc634b57c, "inode_get_bytes" },
	{ 0xce5d15a2, "submit_bh" },
	{ 0x73c9d953, "down_read_trylock" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xea7de966, "dquot_drop" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0xbb9cf395, "dquot_transfer" },
	{ 0x6304ee38, "register_filesystem" },
	{ 0x321cadc9, "generic_file_write_iter" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xafb10bba, "__test_set_page_writeback" },
	{ 0x6a829013, "iter_file_splice_write" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xc54c0b9c, "iput" },
	{ 0x4a45c97c, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x2fb68a13, "generic_permission" },
	{ 0xaafb528c, "inode_dio_wait" },
	{ 0xdfdd3b25, "page_get_link" },
	{ 0x60e55011, "ihold" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x45f3747b, "current_time" },
	{ 0x45b360f0, "d_splice_alias" },
	{ 0x88ea5428, "sync_filesystem" },
	{ 0x462c0cc3, "write_dirty_buffer" },
	{ 0xd031af01, "__set_page_dirty_buffers" },
	{ 0x491d02d0, "sb_set_blocksize" },
	{ 0x96651cd9, "__bforget" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x207ed668, "d_make_root" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xabe798b9, "__blockdev_direct_IO" },
	{ 0x49970de8, "finish_wait" },
	{ 0xaf225e14, "inode_set_flags" },
	{ 0x7d3a0cb1, "__block_write_begin" },
	{ 0xe351519f, "__find_get_block" },
	{ 0x6711552, "posix_acl_default_xattr_handler" },
	{ 0x9b575dd7, "mark_buffer_dirty" },
	{ 0xd211717d, "unregister_filesystem" },
	{ 0x6a1231ef, "init_special_inode" },
	{ 0x3f0163de, "dquot_get_state" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x96e47a4e, "new_inode" },
	{ 0x99bb8806, "memmove" },
	{ 0x337d5947, "generic_file_splice_read" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x261f2064, "lookup_one_len" },
	{ 0x7a4f588c, "set_blocksize" },
	{ 0xc228de9d, "dquot_free_inode" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x36d8ed65, "dquot_release" },
	{ 0x4286faf9, "dquot_disable" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xad6bf0f1, "grab_cache_page_write_begin" },
	{ 0xe3b3fb87, "dquot_commit_info" },
	{ 0xed2e7225, "dquot_set_dqinfo" },
	{ 0x4a33a82c, "clear_inode" },
	{ 0x249871f7, "d_instantiate" },
	{ 0x31379608, "__init_rwsem" },
	{ 0xc84776fe, "flush_dcache_page" },
	{ 0x135b5680, "__put_page" },
	{ 0x3bebefd7, "generic_block_bmap" },
	{ 0x762e6b80, "clear_nlink" },
	{ 0x760a0f4f, "yield" },
	{ 0x8b578a8a, "vscnprintf" },
	{ 0xe7197403, "setattr_prepare" },
	{ 0x6a39009d, "inode_init_owner" },
	{ 0x8a71d5a4, "truncate_inode_pages" },
	{ 0xb2be9e, "dquot_commit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D84D4EF3C10229E11543EF0");
