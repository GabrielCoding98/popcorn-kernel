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
	{ 0xe6c5ed5, "vfs_create" },
	{ 0xdb35394c, "svcauth_gss_flavor" },
	{ 0x52334185, "d_path" },
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0x1b3721a9, "auth_domain_put" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x116a4d0b, "rpc_destroy_wait_queue" },
	{ 0x50490645, "set_groups" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x621db590, "locks_free_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xba5f335a, "xdr_truncate_encode" },
	{ 0x3eacdfe7, "sunrpc_cache_update" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x7cd51e18, "vfs_setlease" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2241ec, "crypto_alloc_shash" },
	{ 0x3134916f, "__mnt_is_readonly" },
	{ 0x642f5e73, "lease_get_mtime" },
	{ 0x226c9b6d, "single_open" },
	{ 0x3b56a9e7, "mntget" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2d7cbced, "inode_permission" },
	{ 0xe853171f, "refcount_dec_and_lock" },
	{ 0x5ec84287, "locks_start_grace" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x97255bdf, "strlen" },
	{ 0x2d654d33, "cache_destroy_net" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x72874e77, "rpc_call_async" },
	{ 0x2f332f23, "write_bytes_to_xdr_buf" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x31d6ebe1, "dget_parent" },
	{ 0x7bec6a38, "seq_open" },
	{ 0x685e31ca, "groups_sort" },
	{ 0xb1b09e24, "svc_pool_stats_open" },
	{ 0xbe4e0533, "vfs_link" },
	{ 0xe327abc2, "svc_print_addr" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xd2cd4fd6, "seq_escape" },
	{ 0x759f7158, "single_release" },
	{ 0x491483ea, "seq_puts" },
	{ 0x13099e5c, "rpc_unlink" },
	{ 0x12b19f97, "vfs_llseek" },
	{ 0xc7b2eb11, "svc_fill_write_vector" },
	{ 0x8e87ce26, "gss_mech_get" },
	{ 0xb0929fb0, "lookup_one_len_unlocked" },
	{ 0x5579bbc2, "svc_addsock" },
	{ 0x1b31a324, "vfs_clone_file_range" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x94b32dbd, "put_rpccred" },
	{ 0xcfae68c4, "touch_atime" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x483adcaf, "gss_mech_put" },
	{ 0xdc61e043, "rpc_init_wait_queue" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0x4bf8b484, "dput" },
	{ 0xaad47c59, "svc_proc_unregister" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xa674186, "svc_find_xprt" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x77d022bf, "filp_close" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xc0923a03, "dentry_open" },
	{ 0xcb44fd29, "rpc_restart_call" },
	{ 0x72a261ad, "nlmsvc_ops" },
	{ 0xcfd1516f, "rpc_uaddr2sockaddr" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0x45d2c367, "cache_register_net" },
	{ 0x83009f11, "vfs_mknod" },
	{ 0x643d9ba1, "groups_free" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x71fa908a, "cache_flush" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc95269f0, "vfs_fsync" },
	{ 0x8ad6266b, "svc_seq_show" },
	{ 0xa66f7710, "trace_event_buffer_reserve" },
	{ 0x54a59fea, "vfs_symlink" },
	{ 0xc57810c5, "rpc_mkpipe_data" },
	{ 0x6f565751, "path_get" },
	{ 0x3b00a92d, "rpc_mkpipe_dentry" },
	{ 0x91715312, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x66decfd5, "ns_to_timespec" },
	{ 0x62bd84dd, "__put_net" },
	{ 0x8e3afba1, "seq_read" },
	{ 0x6c2e8f9c, "override_creds" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xe61837eb, "mnt_drop_write" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa12c8f26, "xdr_reserve_space" },
	{ 0xdf4655f4, "rpc_wake_up_next" },
	{ 0xe7bd6bcc, "svc_set_client" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0x61ef9a52, "vfs_rmdir" },
	{ 0x7b55a08f, "unlock_rename" },
	{ 0x8ae137ee, "param_ops_string" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0x8a98a6a8, "gss_pseudoflavor_to_service" },
	{ 0xa7337819, "splice_direct_to_actor" },
	{ 0xf843245d, "make_kgid" },
	{ 0xa73ee62b, "_atomic_dec_and_lock" },
	{ 0x93bde946, "rpc_get_sb_net" },
	{ 0x4878f55, "svc_xprt_names" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8d541b0c, "hashlen_string" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x40c2f79, "rpc_delay" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xeb172061, "vfs_iter_write" },
	{ 0x41092f84, "cache_check" },
	{ 0xe778d361, "trace_define_field" },
	{ 0xdded909, "vfs_lock_file" },
	{ 0xd7985424, "kern_path" },
	{ 0x5f754e5a, "memset" },
	{ 0x3077d021, "rpc_queue_upcall" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x515dce3e, "from_kuid" },
	{ 0x67cebeb, "proc_mkdir" },
	{ 0x74037534, "locks_alloc_lock" },
	{ 0x265529b8, "kill_litter_super" },
	{ 0x7905d834, "default_llseek" },
	{ 0x149ca4cb, "svcauth_unix_purge" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0xccadb3a7, "bpf_trace_run1" },
	{ 0xb07abe2, "unshare_fs_struct" },
	{ 0x11089ac7, "_ctype" },
	{ 0x2f127654, "rpc_call_start" },
	{ 0xb21d8554, "cache_seq_stop" },
	{ 0xcf4d8e39, "svc_destroy" },
	{ 0x44feb52a, "idr_alloc_cyclic" },
	{ 0xc03413c4, "rpc_create" },
	{ 0x80c6577, "set_posix_acl" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x30f8e8ef, "sunrpc_cache_lookup" },
	{ 0x6e143e3d, "xdr_restrict_buflen" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xe31d34bf, "simple_transaction_read" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xc48572ea, "svc_alien_sock" },
	{ 0x3f9a2b0b, "rpcauth_get_gssinfo" },
	{ 0xd04deb9c, "iov_iter_kvec" },
	{ 0xfded13a6, "vfs_getxattr" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x76ddb787, "crypto_shash_digest" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xf3825143, "trace_event_reg" },
	{ 0x8d4384ab, "from_kgid" },
	{ 0x5a503b0b, "seq_putc" },
	{ 0x33c84fc9, "posix_acl_alloc" },
	{ 0xba62cc77, "mount_ns" },
	{ 0xd45e3124, "svc_fill_symlink_pathname" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe07215f4, "lock_rename" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x122170da, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3ab9a5f5, "svc_create_pooled" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0x940dbffc, "rpc_lookup_machine_cred" },
	{ 0xe4d54766, "rpc_d_lookup_sb" },
	{ 0xe97f4ce5, "qword_get" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xc8e96dea, "qword_addhex" },
	{ 0x89bad261, "__splice_from_pipe" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x577a29dd, "unix_domain_find" },
	{ 0x7dc603bd, "svc_process" },
	{ 0x108dc6eb, "svc_rpcb_cleanup" },
	{ 0x98421a00, "svc_set_num_threads" },
	{ 0xca5b2d8f, "cache_seq_next" },
	{ 0x1870202e, "exportfs_encode_fh" },
	{ 0x25c777e3, "up_write" },
	{ 0xec2404f1, "init_net" },
	{ 0x76e18a1a, "down_write" },
	{ 0x90745321, "fput" },
	{ 0xebb8de7, "perf_trace_run_bpf_submit" },
	{ 0x4bff4918, "vfs_get_link" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x9aef421e, "svc_age_temp_xprts_now" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xcfcc42a7, "lease_modify" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8f3fabc3, "prepare_creds" },
	{ 0x55723bb6, "nfsacl_encode" },
	{ 0xedcf6be4, "qword_add" },
	{ 0x61275678, "idr_remove" },
	{ 0xfccc3942, "flush_signals" },
	{ 0xd316dee1, "cache_unregister_net" },
	{ 0x48fa6e5a, "__fsnotify_parent" },
	{ 0x11aec218, "svc_xprt_put" },
	{ 0xaa1e714f, "simple_transaction_release" },
	{ 0x97d94b99, "svc_create_xprt" },
	{ 0x77c59098, "module_put" },
	{ 0x9811c040, "rpc_pipe_generic_upcall" },
	{ 0x159355a, "mnt_drop_write_file" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0xa5b4a071, "rpc_destroy_pipe_data" },
	{ 0x6d7c1cd0, "unregister_shrinker" },
	{ 0x341c7a79, "locks_init_lock" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x365d0a01, "mnt_want_write" },
	{ 0x7c15aa3e, "locks_release_private" },
	{ 0x16589dfe, "make_kuid" },
	{ 0xdfc02c51, "trace_event_ignore_this_pid" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x9ea27c9d, "vfs_fallocate" },
	{ 0xf3ca2d8, "vfs_iter_read" },
	{ 0x41567b01, "mnt_want_write_file" },
	{ 0xbfd9462b, "exportfs_decode_fh" },
	{ 0xb328ca94, "cache_purge" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0x75db2c1e, "vfs_statfs" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xfca8c91e, "trace_event_buffer_commit" },
	{ 0xa9b9b6d2, "__module_put_and_exit" },
	{ 0xd4502981, "svc_proc_register" },
	{ 0xe9ad395, "vfs_mkdir" },
	{ 0xc9978394, "locks_in_grace" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0xe2055ad9, "__put_cred" },
	{ 0x776ac636, "rpc_put_sb_net" },
	{ 0x800fb92b, "full_name_hash" },
	{ 0x9645af5d, "vfs_copy_file_range" },
	{ 0xceb5e3fc, "rpc_sleep_on" },
	{ 0xe3a8db05, "path_put" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x8c6d9a45, "posix_acl_from_mode" },
	{ 0xace23ea7, "nfsacl_decode" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xe1504493, "simple_transaction_set" },
	{ 0x31e8667b, "sync_inode_metadata" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xf332e663, "vfs_unlink" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x6304ee38, "register_filesystem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x4cefdb5b, "event_triggers_call" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x9b43cdd5, "rpc_restart_call_prepare" },
	{ 0xe4bca5de, "svc_shutdown_net" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x72de6b24, "bpf_trace_run2" },
	{ 0x2f8ebbe0, "rpc_ntop" },
	{ 0xdc27b0f3, "rpc_wake_up_queued_task" },
	{ 0x3e2b0ba6, "groups_alloc" },
	{ 0xc51df1d7, "rpc_pton" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x491aae16, "follow_down" },
	{ 0x890a5456, "posix_unblock_lock" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0xae6c1f5, "xdr_commit_encode" },
	{ 0xbfe0ed9d, "svc_exit_thread" },
	{ 0x3619b80, "vfs_test_lock" },
	{ 0x14ac8c16, "svc_max_payload" },
	{ 0x37a0cba, "kfree" },
	{ 0x7246653d, "simple_transaction_get" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x7cd73cc2, "follow_up" },
	{ 0x9d669763, "memcpy" },
	{ 0x4d831bfa, "trace_event_raw_init" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x547f202a, "fsnotify" },
	{ 0xbef0cb8b, "register_shrinker" },
	{ 0x73c3980a, "svc_reserve" },
	{ 0x38658476, "svc_xprt_do_enqueue" },
	{ 0x23fa3f65, "simple_fill_super" },
	{ 0x5a115b54, "abort_creds" },
	{ 0x74422742, "lockd_up" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xc71945b9, "lockd_down" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x49970de8, "finish_wait" },
	{ 0x5ed51e30, "read_bytes_from_xdr_buf" },
	{ 0x6a3b9f82, "iterate_dir" },
	{ 0x1fe1e1ad, "locks_end_grace" },
	{ 0xd211717d, "unregister_filesystem" },
	{ 0x39ea395a, "nlmsvc_unlock_all_by_sb" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x75614dbd, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x44a83c7c, "cache_create_net" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xbd0bd337, "xdr_inline_decode" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x2078bd0d, "seq_release" },
	{ 0x5cf083c5, "svc_recv" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0xb9a0aa12, "__break_lease" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5dbac387, "auth_domain_find" },
	{ 0x261f2064, "lookup_one_len" },
	{ 0xcee3b8ce, "proc_create" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x59a0f14f, "svc_bind" },
	{ 0x14583415, "vfs_rename" },
	{ 0x3f88a756, "rpc_shutdown_client" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5e5a3cf2, "vfs_getattr" },
	{ 0xaf38e081, "idr_find" },
	{ 0x2919b156, "xdr_decode_string_inplace" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0x25133dc6, "bpf_trace_run4" },
	{ 0x99726e74, "notify_change" },
	{ 0xd28b6125, "opens_in_grace" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xef61947a, "svc_close_xprt" },
	{ 0x41e4ce18, "revert_creds" },
	{ 0x99efee9d, "cache_seq_start" },
	{ 0x135b5680, "__put_page" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xe7197403, "setattr_prepare" },
	{ 0xedc4f8ab, "vfs_fsync_range" },
	{ 0xb859f38b, "krealloc" },
	{ 0xe2b5b41c, "seq_path" },
	{ 0x77e35ccc, "nlmsvc_unlock_all_by_ip" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb89f7de9, "locks_mandatory_area" },
	{ 0x2149a8c0, "filp_open" },
	{ 0xef464c28, "getboottime64" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F4C0EB8C1FCF14A5F3EAA8F");