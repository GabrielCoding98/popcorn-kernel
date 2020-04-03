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
	{ 0x6d89b199, "proc_dointvec_minmax" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa39b3730, "release_sock" },
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0x402b8281, "__request_module" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x711b8a9b, "__crc32c_le_shift" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3bb1c61c, "net_rwsem" },
	{ 0x64ac2467, "up_read" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x29aaaa67, "nf_queue_nf_hook_drop" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf44a904a, "net_ns_barrier" },
	{ 0x59020f44, "nf_nat_hook" },
	{ 0x65ca542b, "ip_ct_attach" },
	{ 0x491483ea, "seq_puts" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf249287c, "nf_defrag_ipv6_enable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0x23cb39f3, "inet_proto_csum_replace4" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf434a842, "proc_set_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x51d8ec04, "__skb_checksum" },
	{ 0xa59052f0, "__siphash_aligned" },
	{ 0xb15b4109, "crc32c" },
	{ 0x6a3de870, "nla_policy_len" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0x99010d79, "nf_ip_checksum" },
	{ 0xf843245d, "make_kgid" },
	{ 0x29606995, "nf_log_packet" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0x54e6e263, "nf_unregister_net_hooks" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x63344917, "nf_checksum_partial" },
	{ 0x68183b3b, "nla_put" },
	{ 0x5a503b0b, "seq_putc" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xe0878bfe, "__krealloc" },
	{ 0x24d273d1, "add_timer" },
	{ 0xec2404f1, "init_net" },
	{ 0xedce6a7d, "nf_checksum" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0x77c59098, "module_put" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0x6bc1e893, "nf_register_net_hooks" },
	{ 0xe302fa6b, "ipv6_skip_exthdr" },
	{ 0x16589dfe, "make_kuid" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x40fdb313, "param_get_uint" },
	{ 0x8357977, "nf_unregister_sockopt" },
	{ 0x1000e51, "schedule" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x847b8731, "proc_create_net_data" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x10e241a1, "nf_ct_hook" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x1f2eda46, "nf_defrag_ipv4_enable" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xd105c3ee, "param_set_uint" },
	{ 0x22bff1ce, "skb_make_writable" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd7fd9dd0, "nf_register_sockopt" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x12cabc89, "siphash_2u64" },
	{ 0xa8b136b2, "register_net_sysctl" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0x94fc7037, "nf_ip6_checksum" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xca0304ef, "try_module_get" },
	{ 0x9a717656, "__do_once_done" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_defrag_ipv6,nf_defrag_ipv4";


MODULE_INFO(srcversion, "C4B3CE14BCF39969A91F451");
