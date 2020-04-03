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
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf79cff2, "sb_min_blocksize" },
	{ 0xd9654491, "unload_nls" },
	{ 0x53537d10, "make_bad_inode" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0x736a9528, "__mark_inode_dirty" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x442a0fee, "iget5_locked" },
	{ 0x220039cb, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0xd2cd4fd6, "seq_escape" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x1a6fb2ad, "__lock_buffer" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xcc63c811, "block_read_full_page" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe4265320, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x88420fef, "generic_read_dir" },
	{ 0x79b45d56, "igrab" },
	{ 0x6200e9f4, "unlock_buffer" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x2dd45999, "set_page_dirty" },
	{ 0x5650a8c1, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xf95233b3, "from_kgid_munged" },
	{ 0xf843245d, "make_kgid" },
	{ 0xa73ee62b, "_atomic_dec_and_lock" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x45e6853b, "__insert_inode_hash" },
	{ 0x5f754e5a, "memset" },
	{ 0x75c6f047, "inode_add_bytes" },
	{ 0xbe75e45, "__bread_gfp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x96bdaa32, "write_inode_now" },
	{ 0x7c1372e8, "panic" },
	{ 0x8bcf937, "mpage_writepages" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x5a503b0b, "seq_putc" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe24e7589, "set_nlink" },
	{ 0xa7d17c3b, "setattr_copy" },
	{ 0xfc318ea9, "sync_dirty_buffer" },
	{ 0xa86ef131, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0x6b2a1083, "generic_file_read_iter" },
	{ 0x25c777e3, "up_write" },
	{ 0x76e18a1a, "down_write" },
	{ 0x6332f31f, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xd80c430b, "mark_page_accessed" },
	{ 0xb0f1f191, "file_write_and_wait_range" },
	{ 0x29726fd3, "inode_init_once" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0xd332be36, "generic_file_mmap" },
	{ 0x40477658, "pagecache_write_end" },
	{ 0xbda1b2ad, "block_write_full_page" },
	{ 0xc0355ba5, "sync_blockdev" },
	{ 0xd1555ac8, "truncate_inode_pages_final" },
	{ 0x128add25, "try_to_free_buffers" },
	{ 0x16589dfe, "make_kuid" },
	{ 0xbf465d2b, "load_nls" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd29a5ffa, "generic_write_end" },
	{ 0xb08cb609, "unlock_new_inode" },
	{ 0x62090b6f, "kill_block_super" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x8c4e48f7, "inode_newsize_ok" },
	{ 0x516cc64a, "inode_set_bytes" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x6304ee38, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x321cadc9, "generic_file_write_iter" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xc54c0b9c, "iput" },
	{ 0xde109558, "cont_write_begin" },
	{ 0x4a45c97c, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0xaafb528c, "inode_dio_wait" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x45f3747b, "current_time" },
	{ 0x66092e19, "load_nls_default" },
	{ 0x45b360f0, "d_splice_alias" },
	{ 0x88ea5428, "sync_filesystem" },
	{ 0x491d02d0, "sb_set_blocksize" },
	{ 0x207ed668, "d_make_root" },
	{ 0xabe798b9, "__blockdev_direct_IO" },
	{ 0x49970de8, "finish_wait" },
	{ 0x9b575dd7, "mark_buffer_dirty" },
	{ 0x5edfc180, "ioctl_by_bdev" },
	{ 0xd211717d, "unregister_filesystem" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x96e47a4e, "new_inode" },
	{ 0x99bb8806, "memmove" },
	{ 0x337d5947, "generic_file_splice_read" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x4a33a82c, "clear_inode" },
	{ 0x249871f7, "d_instantiate" },
	{ 0x4138f718, "pagecache_write_begin" },
	{ 0x135b5680, "__put_page" },
	{ 0x3bebefd7, "generic_block_bmap" },
	{ 0x1b0fa424, "generic_listxattr" },
	{ 0x762e6b80, "clear_nlink" },
	{ 0xd64cb93a, "iget_locked" },
	{ 0xe7197403, "setattr_prepare" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7F4D47F7444885FE34F16C8");
