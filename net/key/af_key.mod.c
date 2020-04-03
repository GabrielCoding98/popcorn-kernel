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
	{ 0x9f1ead19, "sock_no_sendpage" },
	{ 0x91625fc4, "sock_no_mmap" },
	{ 0x9a42e92f, "sock_no_getsockopt" },
	{ 0xe7afa015, "sock_no_setsockopt" },
	{ 0x6f67a396, "sock_no_shutdown" },
	{ 0x7fb630b3, "sock_no_listen" },
	{ 0x99757dae, "sock_no_ioctl" },
	{ 0x9074747d, "datagram_poll" },
	{ 0x3c5cbdce, "sock_no_getname" },
	{ 0xcaad4aa4, "sock_no_accept" },
	{ 0x8ef37932, "sock_no_socketpair" },
	{ 0x2f2dd7e5, "sock_no_connect" },
	{ 0xb7218171, "sock_no_bind" },
	{ 0x9634fa7e, "xfrm_register_km" },
	{ 0x512050d6, "sock_register" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x8a5e867d, "proto_register" },
	{ 0xbeb1684a, "proto_unregister" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x7cab5947, "xfrm_unregister_km" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0xc6d89afb, "xfrm_alloc_spi" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0x79e9d81c, "xfrm_find_acq" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0x1030645c, "xfrm_policy_byid" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0xad031802, "xfrm_state_add" },
	{ 0xbc742aef, "xfrm_state_update" },
	{ 0xe43c1a8b, "xfrm_init_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0xf74a3b96, "xfrm_state_alloc" },
	{ 0x7328c1f3, "xfrm_state_delete" },
	{ 0x902c3056, "xfrm_policy_insert" },
	{ 0xa997a9dd, "xfrm_policy_bysel_ctx" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x76c86bc0, "sock_i_ino" },
	{ 0x220039cb, "from_kuid_munged" },
	{ 0x4c755711, "sock_i_uid" },
	{ 0x847b8731, "proc_create_net_data" },
	{ 0xeadab5fe, "sk_free" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x6913facd, "sock_init_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xb58e5d6d, "sk_alloc" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0xe7e8e834, "xfrm_state_lookup" },
	{ 0xb72c6d97, "__xfrm_state_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb6078d3c, "xfrm_find_acq_byseq" },
	{ 0x2925780f, "km_state_notify" },
	{ 0xb3460d15, "xfrm_state_flush" },
	{ 0x5520cba, "xfrm_state_walk" },
	{ 0x2ca72b15, "xfrm_state_walk_done" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x638ca6b2, "skb_copy" },
	{ 0x276da1d8, "km_policy_notify" },
	{ 0x285f439, "xfrm_policy_flush" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x7a2fcc76, "__sock_recv_ts_and_drops" },
	{ 0xd6ac2994, "skb_free_datagram" },
	{ 0xe31e36c2, "skb_copy_datagram_iter" },
	{ 0x278ebdf3, "skb_recv_datagram" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7c32d0f0, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x5a3f76c0, "xfrm_policy_destroy" },
	{ 0x4120a813, "xfrm_policy_alloc" },
	{ 0xe2e3ce83, "xfrm_policy_walk_done" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xdda29784, "xfrm_policy_walk" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x2636c0f7, "sock_rfree" },
	{ 0x8d334730, "skb_clone" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "70ACE3B25A4A171C15583CB");
