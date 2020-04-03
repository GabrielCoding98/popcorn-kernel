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
	{ 0xa7bdfd77, "static_key_enable" },
	{ 0x85bf72bd, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x19acaa94, "nf_ct_tmpl_alloc" },
	{ 0xa28b9191, "__skb_vlan_pop" },
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x711b8a9b, "__crc32c_le_shift" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3bb1c61c, "net_rwsem" },
	{ 0x2f0cd42f, "nf_conntrack_in" },
	{ 0xc484571a, "register_pernet_device" },
	{ 0x64ac2467, "up_read" },
	{ 0xaf149172, "__skb_gso_segment" },
	{ 0x2e863ede, "pskb_trim_rcsum_slow" },
	{ 0x9f049024, "netlink_has_listeners" },
	{ 0x61ebe275, "nf_ct_tmpl_free" },
	{ 0x4ea0e40e, "genl_register_family" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x78263cf7, "dev_disable_lro" },
	{ 0x2f913dd, "genl_unregister_family" },
	{ 0xabb7bcef, "nf_ct_nat_ext_add" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8af64802, "ip_do_fragment" },
	{ 0x7d300b2c, "netdev_rx_handler_register" },
	{ 0xd23224d4, "nf_ct_get_tuplepr" },
	{ 0x991d5d00, "peernet2id_alloc" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xab88a9bb, "metadata_dst_alloc" },
	{ 0x8d334730, "skb_clone" },
	{ 0x9fcc0a84, "dev_get_by_name" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x42d9d86a, "netdev_master_upper_dev_get" },
	{ 0x3a2e65ab, "nf_conntrack_helper_try_module_get" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x9de1fb6, "skb_zerocopy" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x7b4a00a5, "nf_conncount_destroy" },
	{ 0x23cb39f3, "inet_proto_csum_replace4" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x51d8ec04, "__skb_checksum" },
	{ 0x4057f290, "skb_tx_error" },
	{ 0xb15b4109, "crc32c" },
	{ 0xdd220c50, "ipv6_find_hdr" },
	{ 0x77402f16, "nf_ct_deliver_cached_events" },
	{ 0x99f0359e, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xff71b834, "skb_trim" },
	{ 0xa9742874, "inet_proto_csum_replace16" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xe0f00779, "skb_zerocopy_headlen" },
	{ 0x724eabfd, "netdev_master_upper_dev_link" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x61ac380c, "netif_rx" },
	{ 0xb68b1911, "skb_vlan_push" },
	{ 0x504143c2, "nf_conncount_init" },
	{ 0x7fad8e5a, "nf_ct_delete" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x4922ae54, "nf_nat_icmpv6_reply_translation" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xbb9eafa9, "ip_defrag" },
	{ 0x5f754e5a, "memset" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4fded42, "__nf_conntrack_confirm" },
	{ 0x1149979d, "nf_nat_icmp_reply_translation" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9577d577, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0xc2744d2, "unregister_pernet_device" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xaaafaf39, "__skb_warn_lro_forwarding" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x38993e1a, "skb_ensure_writable" },
	{ 0x68183b3b, "nla_put" },
	{ 0xd8cc71a9, "netdev_upper_dev_unlink" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3fa44dc1, "dev_get_by_index_rcu" },
	{ 0x9e6e325e, "netlink_unicast" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xdd27fa87, "memchr" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x1fe24529, "__skb_get_hash" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0x91826c9c, "flex_array_get" },
	{ 0x9b6eb137, "ksize" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0x77c59098, "module_put" },
	{ 0xbb741141, "dst_init" },
	{ 0x9a4b6579, "__secpath_destroy" },
	{ 0x3d89a1d, "skb_vlan_pop" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0x1a4d0e9c, "__nf_ct_expect_find" },
	{ 0x92f432bc, "nf_nat_setup_info" },
	{ 0xcd42f123, "nf_ipv6_ops" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xdf112ffd, "nf_conncount_count" },
	{ 0xe302fa6b, "ipv6_skip_exthdr" },
	{ 0xc4a0ebb4, "netlink_broadcast" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x14072471, "netdev_rx_handler_unregister" },
	{ 0xe7ebb0c0, "nf_connlabels_get" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x679562ba, "nla_put_nohdr" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0x7f011322, "nf_connlabels_replace" },
	{ 0xdd406583, "skb_csum_hwoffload_help" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x912342a9, "ether_setup" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x2ac743ad, "skb_pull_rcsum" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0x23a33717, "nf_ct_seq_adjust" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x85f2363c, "netlink_set_err" },
	{ 0xb678c3cf, "flex_array_free" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4546e320, "nf_nat_packet" },
	{ 0x43faa93b, "nf_conntrack_helper_put" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xf577676c, "nf_ct_frag6_gather" },
	{ 0xa24ccf47, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xbe1c979, "___pskb_trim" },
	{ 0x19f6c533, "genlmsg_put" },
	{ 0xe5ff52ca, "nf_connlabels_put" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0x561e2541, "flex_array_alloc" },
	{ 0x984093a6, "rtnl_delete_link" },
	{ 0x39aefa1f, "nf_ct_helper_ext_add" },
	{ 0xff7df2b5, "__nf_ct_try_assign_helper" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xf9dcd1d2, "nla_reserve" },
	{ 0x99bb8806, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xd5394b26, "nsh_push" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0xe3bfa810, "genl_notify" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0xa5e45159, "dev_fill_metadata_dst" },
	{ 0xd1f8dac0, "nf_nat_alloc_null_binding" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xca0304ef, "try_module_get" },
	{ 0x524a3b8, "__nla_put" },
	{ 0x710bccb9, "dev_get_stats" },
	{ 0xd5467c0e, "nf_conntrack_find_get" },
	{ 0xe5a1d050, "flex_array_prealloc" },
	{ 0xb82d0926, "nsh_pop" },
	{ 0xae12eeca, "nf_ct_invert_tuplepr" },
	{ 0xaae3421a, "nf_ct_ext_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_nat,nf_conncount,nf_nat_ipv6,nf_nat_ipv4,nf_defrag_ipv6,nsh";


MODULE_INFO(srcversion, "FCCADC90577DF0D70393AEC");
