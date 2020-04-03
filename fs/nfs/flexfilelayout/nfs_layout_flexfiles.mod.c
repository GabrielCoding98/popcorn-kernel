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
	{ 0x853ab657, "nfs4_schedule_session_recovery" },
	{ 0x754b43a2, "pnfs_nfs_generic_sync" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6f99aeaa, "xdr_init_encode" },
	{ 0x2b0a972a, "nfs4_pnfs_ds_connect" },
	{ 0xc2451da0, "mem_map" },
	{ 0x5b5da241, "pnfs_generic_clear_request_commit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x51914ddb, "nfs4_setup_sequence" },
	{ 0x8667e2b4, "nfs_init_cinfo" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x3b917a1f, "nfs_initiate_commit" },
	{ 0xec59fc10, "pnfs_error_mark_layout_for_return" },
	{ 0xdaf523fe, "nfs4_pnfs_ds_put" },
	{ 0x94b32dbd, "put_rpccred" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x54bef45, "layoutstats_timer" },
	{ 0xf34e54c9, "nfs4_delete_deviceid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0x643d9ba1, "groups_free" },
	{ 0x53cda404, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0x968a46c3, "nfs4_decode_mp_ds_addr" },
	{ 0xe5a3ee21, "nfs_initiate_pgio" },
	{ 0xd8fad7cb, "pnfs_generic_commit_pagelist" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0x1e901807, "pnfs_generic_recover_commit_reqs" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x965ce385, "nfs4_sequence_done" },
	{ 0xa12c8f26, "xdr_reserve_space" },
	{ 0x101d5850, "pnfs_generic_pg_test" },
	{ 0xea49d2f0, "pnfs_update_layout" },
	{ 0xf843245d, "make_kgid" },
	{ 0x3f14490b, "rpc_exit" },
	{ 0xe8f3bea0, "pnfs_generic_pg_cleanup" },
	{ 0xacbdd1c4, "pnfs_generic_write_commit_done" },
	{ 0x40c2f79, "rpc_delay" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x22ce8a3b, "pnfs_generic_layout_insert_lseg" },
	{ 0x5f754e5a, "memset" },
	{ 0x66119726, "xdr_init_decode_pages" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x2f127654, "rpc_call_start" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xa5d093a7, "pnfs_read_resend_pnfs" },
	{ 0xfa53061e, "nfs4_find_get_deviceid" },
	{ 0xb0652663, "nfs4_find_or_create_ds_client" },
	{ 0xc4b531f6, "rpc_max_payload" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xa9229db9, "nfs_pageio_reset_write_mds" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x30f0c951, "pnfs_layout_mark_request_commit" },
	{ 0x6014ca6c, "pnfs_destroy_layout" },
	{ 0x7f2806a2, "nfs4_pnfs_ds_add" },
	{ 0x131d22ac, "pnfs_layoutcommit_inode" },
	{ 0x92f76d49, "pnfs_put_lseg" },
	{ 0x920fc37d, "nfs4_put_deviceid_node" },
	{ 0xac5a979b, "pnfs_set_layoutcommit" },
	{ 0xac5e7c27, "pnfs_generic_scan_commit_lists" },
	{ 0x69d3558d, "pnfs_generic_rw_release" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0x16589dfe, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x73cf6e2e, "nfs4_test_deviceid_unavailable" },
	{ 0xa02df320, "nfs_map_string_to_numeric" },
	{ 0xf999267e, "pnfs_generic_commit_release" },
	{ 0xc962e8b4, "pnfs_generic_pg_readpages" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0x80ac9f1, "pnfs_read_done_resend_to_mds" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x9b43cdd5, "rpc_restart_call_prepare" },
	{ 0x3e2b0ba6, "groups_alloc" },
	{ 0x8b28bd68, "pnfs_generic_pg_writepages" },
	{ 0xba1d253c, "pnfs_generic_prepare_to_resend_writes" },
	{ 0x37a0cba, "kfree" },
	{ 0x33664a1d, "pnfs_generic_pg_check_layout" },
	{ 0x9d669763, "memcpy" },
	{ 0x503fa0e1, "__tracepoint_nfs4_pnfs_read" },
	{ 0x6a9220e2, "pnfs_write_done_resend_to_mds" },
	{ 0x91d99a92, "rpc_wake_up" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x689c4497, "rpc_count_iostats_metrics" },
	{ 0xbd0bd337, "xdr_inline_decode" },
	{ 0xe8a0c8f5, "__tracepoint_nfs4_pnfs_write" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5e83fbd2, "rpc_lookup_generic_cred" },
	{ 0x1fe7ef37, "xdr_write_pages" },
	{ 0x1f2b04d5, "nfs_pageio_reset_read_mds" },
	{ 0x7b5d6871, "nfs4_init_deviceid_node" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x58e70b7c, "xdr_set_scratch_buffer" },
	{ 0xabcac466, "nfs_writeback_update_inode" },
	{ 0x135b5680, "__put_page" },
	{ 0x8b81f256, "pnfs_register_layoutdriver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4AA34EF5F8D267E359BAA3D");
