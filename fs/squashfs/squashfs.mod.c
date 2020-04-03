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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x53537d10, "make_bad_inode" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0xc2451da0, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x87324752, "pagecache_get_page" },
	{ 0x775773e3, "ll_rw_block" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe4265320, "mount_bdev" },
	{ 0x88420fef, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x1947fec4, "__getblk_gfp" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf843245d, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x45e6853b, "__insert_inode_hash" },
	{ 0x5f754e5a, "memset" },
	{ 0xbe75e45, "__bread_gfp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x646cf275, "d_obtain_alias" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe24e7589, "set_nlink" },
	{ 0x8ddcd6ae, "__wait_on_buffer" },
	{ 0x65dccf13, "xz_dec_end" },
	{ 0xc082d1fa, "generic_ro_fops" },
	{ 0xe8f35534, "unlock_page" },
	{ 0xfa39ce94, "inode_nohighmem" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x29726fd3, "inode_init_once" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb6b6284e, "xz_dec_run" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0x16589dfe, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0xb08cb609, "unlock_new_inode" },
	{ 0x62090b6f, "kill_block_super" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x6304ee38, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x52d717da, "xz_dec_init" },
	{ 0xc54c0b9c, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfdd3b25, "page_get_link" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x45b360f0, "d_splice_alias" },
	{ 0x88ea5428, "sync_filesystem" },
	{ 0x207ed668, "d_make_root" },
	{ 0xf30fda27, "lzo1x_decompress_safe" },
	{ 0x49970de8, "finish_wait" },
	{ 0x81db6ebb, "xz_dec_reset" },
	{ 0xd211717d, "unregister_filesystem" },
	{ 0x6a1231ef, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x96e47a4e, "new_inode" },
	{ 0xc84776fe, "flush_dcache_page" },
	{ 0x135b5680, "__put_page" },
	{ 0xd64cb93a, "iget_locked" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C28C0A040BEC0BD6D2EFBE4");
