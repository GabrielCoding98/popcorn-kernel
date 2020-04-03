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
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0xdb11a8f1, "nfnetlink_subsys_unregister" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x38cce196, "nfnetlink_subsys_register" },
	{ 0x93854acc, "nf_ct_remove_expectations" },
	{ 0xedbdb972, "nf_conntrack_eventmask_report" },
	{ 0xff7df2b5, "__nf_ct_try_assign_helper" },
	{ 0x2205aad6, "nf_conntrack_hash_check_insert" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xaae3421a, "nf_ct_ext_add" },
	{ 0x39aefa1f, "nf_ct_helper_ext_add" },
	{ 0xbb54c2c7, "nf_conntrack_free" },
	{ 0xef2f4d1c, "nf_conntrack_alloc" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x59020f44, "nf_nat_hook" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x473e385d, "nf_conntrack_lock" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0x8c6e11f4, "nf_conntrack_locks" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x9e6e325e, "netlink_unicast" },
	{ 0x6a3de870, "nla_policy_len" },
	{ 0x7f011322, "nf_connlabels_replace" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa416b7ea, "nf_ct_iterate_cleanup_net" },
	{ 0x7fad8e5a, "nf_ct_delete" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x24d273d1, "add_timer" },
	{ 0x1a4d0e9c, "__nf_ct_expect_find" },
	{ 0x402b8281, "__request_module" },
	{ 0xd1a5e5cc, "nf_ct_expect_related_report" },
	{ 0x7f4ba95, "__nf_conntrack_helper_find" },
	{ 0xd5467c0e, "nf_conntrack_find_get" },
	{ 0xa164982c, "nf_ct_helper_expectfn_find_by_name" },
	{ 0x7d697e6a, "nf_ct_expect_alloc" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x6d18ef61, "nf_ct_expect_iterate_net" },
	{ 0xe29264de, "nf_ct_unlink_expect_report" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4ea258d2, "nf_conntrack_expect_lock" },
	{ 0x6aa1162e, "nf_ct_expect_find_get" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe2e018f8, "nla_validate" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x39ef16b, "nf_ct_expect_put" },
	{ 0xa2e29f4, "__netlink_dump_start" },
	{ 0x7c32d0f0, "printk" },
	{ 0x236fe5f4, "nf_ct_expect_register_notifier" },
	{ 0x6d8ab92, "nf_conntrack_register_notifier" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x21ed2d3d, "nf_conntrack_unregister_notifier" },
	{ 0xc87b5ee9, "nf_ct_expect_unregister_notifier" },
	{ 0x4b1ba790, "nfnetlink_send" },
	{ 0x3d5e1982, "nfnetlink_set_err" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xc1599417, "nfnetlink_has_listeners" },
	{ 0xd71da831, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0x5f754e5a, "memset" },
	{ 0x9a717656, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x12cabc89, "siphash_2u64" },
	{ 0xa59052f0, "__siphash_aligned" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xff71b834, "skb_trim" },
	{ 0xe3fc549, "__nlmsg_put" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x97255bdf, "strlen" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3e7b26, "nf_ct_get_id" },
	{ 0xe63cefed, "__nf_ct_l4proto_find" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";


MODULE_INFO(srcversion, "09D75D31D664B209D5DE82A");
