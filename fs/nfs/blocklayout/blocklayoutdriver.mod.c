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
	{ 0x9536e07c, "pnfs_unregister_layoutdriver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x44c8fd11, "pnfs_generic_pg_init_write" },
	{ 0xad6be22d, "fs_bio_set" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x13906b2, "bio_alloc_bioset" },
	{ 0xe5a090f6, "page_cache_next_hole" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xaaa14361, "nfs_dreq_bytes_left" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x13099e5c, "rpc_unlink" },
	{ 0x842384d3, "pnfs_ld_write_done" },
	{ 0xec59fc10, "pnfs_error_mark_layout_for_return" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4bf8b484, "dput" },
	{ 0xf34e54c9, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x1ea33461, "nfs4_mark_deviceid_unavailable" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xc57810c5, "rpc_mkpipe_data" },
	{ 0x3b00a92d, "rpc_mkpipe_dentry" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x101d5850, "pnfs_generic_pg_test" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0x93bde946, "rpc_get_sb_net" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe8f3bea0, "pnfs_generic_pg_cleanup" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe00481e0, "pnfs_generic_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x66119726, "xdr_init_decode_pages" },
	{ 0x3077d021, "rpc_queue_upcall" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xffeb8534, "bio_add_page" },
	{ 0xfa53061e, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x1bfa805d, "blkdev_get_by_path" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xa9229db9, "nfs_pageio_reset_write_mds" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe4d54766, "rpc_d_lookup_sb" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x599f1a0c, "blkdev_get_by_dev" },
	{ 0x96234732, "bio_put" },
	{ 0x920fc37d, "nfs4_put_deviceid_node" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x77c59098, "module_put" },
	{ 0x9811c040, "rpc_pipe_generic_upcall" },
	{ 0x9015eb85, "submit_bio" },
	{ 0xbd9074b1, "blk_finish_plug" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0xa5b4a071, "rpc_destroy_pipe_data" },
	{ 0x881838c, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x776ac636, "rpc_put_sb_net" },
	{ 0xc962e8b4, "pnfs_generic_pg_readpages" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x8b28bd68, "pnfs_generic_pg_writepages" },
	{ 0xadcf68e2, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x64ef3ac1, "pnfs_generic_pg_init_read" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xbd0bd337, "xdr_inline_decode" },
	{ 0x962498e4, "vmalloc_to_page" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x1f2b04d5, "nfs_pageio_reset_read_mds" },
	{ 0x7b5d6871, "nfs4_init_deviceid_node" },
	{ 0x823dd08e, "pnfs_set_lo_fail" },
	{ 0x7d705738, "blk_start_plug" },
	{ 0x58e70b7c, "xdr_set_scratch_buffer" },
	{ 0xc84776fe, "flush_dcache_page" },
	{ 0x837ca076, "pnfs_ld_read_done" },
	{ 0x135b5680, "__put_page" },
	{ 0xca0304ef, "try_module_get" },
	{ 0x8b81f256, "pnfs_register_layoutdriver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9ADA48D3B685AB01850F449");
