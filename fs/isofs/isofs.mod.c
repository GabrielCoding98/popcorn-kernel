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
	{ 0xf79cff2, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xd9654491, "unload_nls" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0xc2451da0, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x442a0fee, "iget5_locked" },
	{ 0x220039cb, "from_kuid_munged" },
	{ 0x491483ea, "seq_puts" },
	{ 0x87324752, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x775773e3, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe4265320, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x81bdc212, "page_symlink_inode_operations" },
	{ 0x88420fef, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x1947fec4, "__getblk_gfp" },
	{ 0x91715312, "sprintf" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf95233b3, "from_kgid_munged" },
	{ 0xf843245d, "make_kgid" },
	{ 0x41eacf6a, "mpage_readpages" },
	{ 0x5f754e5a, "memset" },
	{ 0xf5495b8c, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0xbe75e45, "__bread_gfp" },
	{ 0x7c32d0f0, "printk" },
	{ 0x646cf275, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe24e7589, "set_nlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8ddcd6ae, "__wait_on_buffer" },
	{ 0xdd27fa87, "memchr" },
	{ 0xc082d1fa, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0xe8f35534, "unlock_page" },
	{ 0xfa39ce94, "inode_nohighmem" },
	{ 0x6332f31f, "__brelse" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x29726fd3, "inode_init_once" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0x16589dfe, "make_kuid" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xbf465d2b, "load_nls" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0xb08cb609, "unlock_new_inode" },
	{ 0x62090b6f, "kill_block_super" },
	{ 0x800fb92b, "full_name_hash" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x6304ee38, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc54c0b9c, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x66092e19, "load_nls_default" },
	{ 0x45b360f0, "d_splice_alias" },
	{ 0x88ea5428, "sync_filesystem" },
	{ 0x491d02d0, "sb_set_blocksize" },
	{ 0x207ed668, "d_make_root" },
	{ 0x5edfc180, "ioctl_by_bdev" },
	{ 0xd211717d, "unregister_filesystem" },
	{ 0x6a1231ef, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc84776fe, "flush_dcache_page" },
	{ 0x135b5680, "__put_page" },
	{ 0x3bebefd7, "generic_block_bmap" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "86D376AD7DA2A50D6B0B5A5");
