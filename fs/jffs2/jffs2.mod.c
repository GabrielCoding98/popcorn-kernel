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
	{ 0x4d3c153f, "sigprocmask" },
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0xec4a004, "iget_failed" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x83a489a8, "drop_nlink" },
	{ 0x3b917bbf, "complete_and_exit" },
	{ 0xa5883776, "mtd_point" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x64ac2467, "up_read" },
	{ 0x56377fea, "mtd_block_isbad" },
	{ 0x53537d10, "make_bad_inode" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0x12739337, "dequeue_signal" },
	{ 0x71b65cdd, "d_invalidate" },
	{ 0xc2451da0, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3f498953, "send_sig" },
	{ 0xfa7062db, "generic_fh_to_parent" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x89895426, "is_bad_inode" },
	{ 0x8dd91483, "generic_file_open" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x44e9a829, "match_token" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xf7a70f1a, "inc_nlink" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9a7c0d99, "d_instantiate_new" },
	{ 0x88420fef, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x1afb6ac1, "mtd_write" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0x5650a8c1, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf1c2ed95, "down_read" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xf3932602, "mtd_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xf843245d, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0x515dce3e, "from_kuid" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x24868151, "freezing_slow_path" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x62e4013f, "posix_acl_chmod" },
	{ 0xc2cdb164, "mtd_read" },
	{ 0x646cf275, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8d4384ab, "from_kgid" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe24e7589, "set_nlink" },
	{ 0x122170da, "crc32_le" },
	{ 0x248fa852, "mtd_write_oob" },
	{ 0x5fa80f78, "insert_inode_locked" },
	{ 0x4e3567f7, "match_int" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0xe8f35534, "unlock_page" },
	{ 0x6b2a1083, "generic_file_read_iter" },
	{ 0x25c777e3, "up_write" },
	{ 0x76e18a1a, "down_write" },
	{ 0xa5ba6fc7, "mtd_block_markbad" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xb0f1f191, "file_write_and_wait_range" },
	{ 0x29726fd3, "inode_init_once" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0x9fda6510, "ilookup" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xd1555ac8, "truncate_inode_pages_final" },
	{ 0x16589dfe, "make_kuid" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x389e7bbe, "kill_mtd_super" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xb08cb609, "unlock_new_inode" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0xb7120f86, "simple_get_link" },
	{ 0x800fb92b, "full_name_hash" },
	{ 0xb58e7111, "mount_mtd" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x6304ee38, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0x321cadc9, "generic_file_write_iter" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3809fb69, "generic_file_readonly_mmap" },
	{ 0x30460078, "mtd_unpoint" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xc54c0b9c, "iput" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x4a45c97c, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x60e55011, "ihold" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x45f3747b, "current_time" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x45b360f0, "d_splice_alias" },
	{ 0x88ea5428, "sync_filesystem" },
	{ 0xee768af3, "set_user_nice" },
	{ 0x207ed668, "d_make_root" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0xca9360b5, "rb_next" },
	{ 0xd211717d, "unregister_filesystem" },
	{ 0xf3b83eea, "mtd_kmalloc_up_to" },
	{ 0x6a1231ef, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0x721ef07, "mtd_writev" },
	{ 0x96e47a4e, "new_inode" },
	{ 0x99bb8806, "memmove" },
	{ 0x337d5947, "generic_file_splice_read" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5a161ae2, "generic_fh_to_dentry" },
	{ 0xad6bf0f1, "grab_cache_page_write_begin" },
	{ 0xbdda4795, "mtd_read_oob" },
	{ 0x4a33a82c, "clear_inode" },
	{ 0x249871f7, "d_instantiate" },
	{ 0x31379608, "__init_rwsem" },
	{ 0xc84776fe, "flush_dcache_page" },
	{ 0x135b5680, "__put_page" },
	{ 0x762e6b80, "clear_nlink" },
	{ 0xd64cb93a, "iget_locked" },
	{ 0xe7197403, "setattr_prepare" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd,zlib_deflate";


MODULE_INFO(srcversion, "6DE0BEA54CE8DEAA557A021");
