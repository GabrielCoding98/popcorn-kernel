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
	{ 0xec4a004, "iget_failed" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x83a489a8, "drop_nlink" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xb93dcd53, "mark_buffer_dirty_inode" },
	{ 0x64ac2467, "up_read" },
	{ 0xd9654491, "unload_nls" },
	{ 0x53537d10, "make_bad_inode" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0x736a9528, "__mark_inode_dirty" },
	{ 0xc2451da0, "mem_map" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2d7cbced, "inode_permission" },
	{ 0x33614347, "generic_write_checks" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa2048e95, "crc_itu_t" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xdb6f3e4d, "__generic_file_write_iter" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x5eac53fa, "block_write_begin" },
	{ 0x491483ea, "seq_puts" },
	{ 0x89895426, "is_bad_inode" },
	{ 0x87324752, "pagecache_get_page" },
	{ 0x8dd91483, "generic_file_open" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x73a87a0b, "__lock_page" },
	{ 0x775773e3, "ll_rw_block" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x1a6fb2ad, "__lock_buffer" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0xf7a70f1a, "inc_nlink" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe4265320, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9a7c0d99, "d_instantiate_new" },
	{ 0x88420fef, "generic_read_dir" },
	{ 0x1947fec4, "__getblk_gfp" },
	{ 0x6200e9f4, "unlock_buffer" },
	{ 0x2dd45999, "set_page_dirty" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5650a8c1, "truncate_setsize" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf843245d, "make_kgid" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x41eacf6a, "mpage_readpages" },
	{ 0x5f754e5a, "memset" },
	{ 0x515dce3e, "from_kuid" },
	{ 0xf5495b8c, "mpage_readpage" },
	{ 0x75c6f047, "inode_add_bytes" },
	{ 0xbe75e45, "__bread_gfp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x646cf275, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x8bcf937, "mpage_writepages" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x8d4384ab, "from_kgid" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe24e7589, "set_nlink" },
	{ 0x8ddcd6ae, "__wait_on_buffer" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0xa7d17c3b, "setattr_copy" },
	{ 0x5fa80f78, "insert_inode_locked" },
	{ 0xfc318ea9, "sync_dirty_buffer" },
	{ 0xa86ef131, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0xe8f35534, "unlock_page" },
	{ 0x6b2a1083, "generic_file_read_iter" },
	{ 0x25c777e3, "up_write" },
	{ 0x76e18a1a, "down_write" },
	{ 0xfa39ce94, "inode_nohighmem" },
	{ 0x6332f31f, "__brelse" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0x29726fd3, "inode_init_once" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2a58bcbd, "invalidate_inode_buffers" },
	{ 0x7171121c, "overflowgid" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd332be36, "generic_file_mmap" },
	{ 0xbda1b2ad, "block_write_full_page" },
	{ 0x9d2e7921, "inode_sub_bytes" },
	{ 0xd1555ac8, "truncate_inode_pages_final" },
	{ 0x16589dfe, "make_kuid" },
	{ 0xbf465d2b, "load_nls" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd29a5ffa, "generic_write_end" },
	{ 0xb08cb609, "unlock_new_inode" },
	{ 0x62090b6f, "kill_block_super" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0xac42f5e2, "d_tmpfile" },
	{ 0x6304ee38, "register_filesystem" },
	{ 0xc54c0b9c, "iput" },
	{ 0x4a45c97c, "read_cache_page" },
	{ 0xb94ad6, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfdd3b25, "page_get_link" },
	{ 0x60e55011, "ihold" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x45f3747b, "current_time" },
	{ 0x66092e19, "load_nls_default" },
	{ 0x45b360f0, "d_splice_alias" },
	{ 0x88ea5428, "sync_filesystem" },
	{ 0x9cb06c42, "block_truncate_page" },
	{ 0x491d02d0, "sb_set_blocksize" },
	{ 0x207ed668, "d_make_root" },
	{ 0xabe798b9, "__blockdev_direct_IO" },
	{ 0x8b618d08, "overflowuid" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9b575dd7, "mark_buffer_dirty" },
	{ 0x2875a315, "utf32_to_utf8" },
	{ 0x5edfc180, "ioctl_by_bdev" },
	{ 0xd211717d, "unregister_filesystem" },
	{ 0x6a1231ef, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x96e47a4e, "new_inode" },
	{ 0x99bb8806, "memmove" },
	{ 0x337d5947, "generic_file_splice_read" },
	{ 0xde85cb9c, "discard_new_inode" },
	{ 0x8d73278e, "hex_asc_upper" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xad6bf0f1, "grab_cache_page_write_begin" },
	{ 0x4a33a82c, "clear_inode" },
	{ 0x249871f7, "d_instantiate" },
	{ 0x31379608, "__init_rwsem" },
	{ 0xc84776fe, "flush_dcache_page" },
	{ 0x135b5680, "__put_page" },
	{ 0x3bebefd7, "generic_block_bmap" },
	{ 0x762e6b80, "clear_nlink" },
	{ 0xd64cb93a, "iget_locked" },
	{ 0x4dec6038, "memscan" },
	{ 0xedc4f8ab, "vfs_fsync_range" },
	{ 0xe7197403, "setattr_prepare" },
	{ 0x751b8a79, "generic_fillattr" },
	{ 0x6a39009d, "inode_init_owner" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F8F3E2A557D1EF8CF077A91");
