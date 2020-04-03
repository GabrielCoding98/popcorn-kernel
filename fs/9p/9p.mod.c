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
	{ 0xf4e5e0ab, "kobject_put" },
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0xec4a004, "iget_failed" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x83a489a8, "drop_nlink" },
	{ 0x4a650d53, "set_anon_super" },
	{ 0xc67ecbcc, "p9_client_mknod_dotl" },
	{ 0x64ac2467, "up_read" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0x736a9528, "__mark_inode_dirty" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2507d457, "__set_page_dirty_nobuffers" },
	{ 0xf95feb9b, "filemap_fault" },
	{ 0x33614347, "generic_write_checks" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xfe9d2474, "p9_client_readdir" },
	{ 0x442a0fee, "iget5_locked" },
	{ 0x220039cb, "from_kuid_munged" },
	{ 0xdf5a196, "kill_anon_super" },
	{ 0xb8b043f2, "kfree_link" },
	{ 0x4fd47b46, "posix_acl_to_xattr" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x142923c2, "p9_client_getlock_dotl" },
	{ 0x1f94019c, "p9_client_begin_disconnect" },
	{ 0x491483ea, "seq_puts" },
	{ 0x8dd91483, "generic_file_open" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x1d7cd2a5, "posix_acl_update_mode" },
	{ 0x73a87a0b, "__lock_page" },
	{ 0xd17cc533, "filemap_write_and_wait" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc8bd3f8b, "deactivate_locked_super" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0x4bf8b484, "dput" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x5a6f3df1, "p9_client_stat" },
	{ 0x44e9a829, "match_token" },
	{ 0xf7a70f1a, "inc_nlink" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x4d5f121, "p9_client_link" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0x41eb7f27, "p9_client_statfs" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x88420fef, "generic_read_dir" },
	{ 0xc83f0fc3, "p9stat_read" },
	{ 0x71b5f842, "super_setup_bdi" },
	{ 0x9fffc1d, "p9_client_clunk" },
	{ 0x5f380d70, "redirty_page_for_writepage" },
	{ 0x91715312, "sprintf" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xb6ea876a, "p9_is_proto_dotl" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x2dd45999, "set_page_dirty" },
	{ 0x6fc83c2c, "p9_client_readlink" },
	{ 0x5650a8c1, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xa0b6c3dd, "kobject_create_and_add" },
	{ 0xc9107ffc, "end_page_writeback" },
	{ 0xf95233b3, "from_kgid_munged" },
	{ 0xf843245d, "make_kgid" },
	{ 0x6abd9d0c, "p9_client_symlink" },
	{ 0x1f381782, "p9dirent_read" },
	{ 0xc0d29ce5, "p9_client_fsync" },
	{ 0x85c282ba, "inode_owner_or_capable" },
	{ 0xe04bde51, "p9_client_read" },
	{ 0xbb881f8c, "iov_iter_bvec" },
	{ 0x7a9d6a6c, "p9_show_client_options" },
	{ 0x5f754e5a, "memset" },
	{ 0xb043914e, "p9_client_walk" },
	{ 0x75c6f047, "inode_add_bytes" },
	{ 0x283f00b6, "p9_client_write" },
	{ 0x41c4668b, "finish_no_open" },
	{ 0xc6a4916b, "sync_inode" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0xc2c1c65c, "p9_client_lock_dotl" },
	{ 0xba786e32, "p9_client_create_dotl" },
	{ 0x5d157ca1, "sget" },
	{ 0xd04deb9c, "iov_iter_kvec" },
	{ 0xd43ee120, "p9_client_xattrcreate" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1448a433, "d_move" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x6d3c2e1, "p9_client_mkdir_dotl" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0xe24e7589, "set_nlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f53ac8c, "file_update_time" },
	{ 0xd2567afd, "get_cached_acl" },
	{ 0xa7d17c3b, "setattr_copy" },
	{ 0x4aa9c899, "p9_client_unlinkat" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x31746c64, "p9_client_destroy" },
	{ 0xc8cdd3eb, "set_cached_acl" },
	{ 0x4e3567f7, "match_int" },
	{ 0xe8f35534, "unlock_page" },
	{ 0x6b2a1083, "generic_file_read_iter" },
	{ 0x25c777e3, "up_write" },
	{ 0x76e18a1a, "down_write" },
	{ 0x83c3a4ae, "p9_client_xattrwalk" },
	{ 0xeff1b984, "p9_client_setattr" },
	{ 0xb0f1f191, "file_write_and_wait_range" },
	{ 0x29726fd3, "inode_init_once" },
	{ 0xaa01c9e5, "xattr_full_name" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0xd332be36, "generic_file_mmap" },
	{ 0xa1ddbc7, "__filemap_set_wb_err" },
	{ 0x7920f1d7, "wait_for_stable_page" },
	{ 0xfadf5def, "fs_kobj" },
	{ 0xd1555ac8, "truncate_inode_pages_final" },
	{ 0x16589dfe, "make_kuid" },
	{ 0x487fc1a1, "posix_acl_valid" },
	{ 0x906dd1d8, "p9_client_create" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x96fe86be, "posix_acl_from_xattr" },
	{ 0xb08cb609, "unlock_new_inode" },
	{ 0xd384c683, "p9stat_free" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x575bbecf, "locks_lock_inode_wait" },
	{ 0x2c0ea252, "p9_client_attach" },
	{ 0x603f51f0, "clear_page_dirty_for_io" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x49240ac9, "p9_client_disconnect" },
	{ 0x6353cf86, "read_cache_pages" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x6304ee38, "register_filesystem" },
	{ 0x17fe7225, "p9_is_proto_dotu" },
	{ 0x321cadc9, "generic_file_write_iter" },
	{ 0x9fc9b8f8, "p9_client_fcreate" },
	{ 0xafb10bba, "__test_set_page_writeback" },
	{ 0x833f440, "I_BDEV" },
	{ 0xa1426d42, "blockdev_superblock" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x3809fb69, "generic_file_readonly_mmap" },
	{ 0xc54c0b9c, "iput" },
	{ 0xec67bab5, "finish_open" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x86475dea, "invalidate_inode_pages2_range" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd28d170, "p9_client_renameat" },
	{ 0x60e55011, "ihold" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x45f3747b, "current_time" },
	{ 0x45b360f0, "d_splice_alias" },
	{ 0x1a3db673, "p9_client_remove" },
	{ 0x99db8367, "always_delete_dentry" },
	{ 0xaf676c57, "invalidate_mapping_pages" },
	{ 0x8daae94d, "__posix_acl_chmod" },
	{ 0x207ed668, "d_make_root" },
	{ 0x7f31a1c1, "simple_statfs" },
	{ 0xd211717d, "unregister_filesystem" },
	{ 0x6a1231ef, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x51708249, "filemap_map_pages" },
	{ 0x96e47a4e, "new_inode" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xad6bf0f1, "grab_cache_page_write_begin" },
	{ 0x4a33a82c, "clear_inode" },
	{ 0x249871f7, "d_instantiate" },
	{ 0x31379608, "__init_rwsem" },
	{ 0xc84776fe, "flush_dcache_page" },
	{ 0x3e3a4192, "p9_client_rename" },
	{ 0x135b5680, "__put_page" },
	{ 0x762e6b80, "clear_nlink" },
	{ 0xb0c0a97f, "p9_client_open" },
	{ 0xe7197403, "setattr_prepare" },
	{ 0x85c4c437, "p9_client_wstat" },
	{ 0xa2df7f9c, "p9_client_getattr_dotl" },
	{ 0x751b8a79, "generic_fillattr" },
	{ 0xf3351a68, "filemap_fdatawrite" },
	{ 0x6a39009d, "inode_init_owner" },
	{ 0xc04665ab, "__posix_acl_create" },
	{ 0x9a79954e, "noop_backing_dev_info" },
	{ 0x7c26ea2, "posix_test_lock" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=9pnet";


MODULE_INFO(srcversion, "4F9217F9F2FA17E45BD56D6");