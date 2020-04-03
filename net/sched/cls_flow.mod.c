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
	{ 0xd2dd3483, "unregister_tcf_proto_ops" },
	{ 0x1a62a72b, "register_tcf_proto_ops" },
	{ 0xa979d8df, "__skb_flow_dissect" },
	{ 0x5f754e5a, "memset" },
	{ 0x515dce3e, "from_kuid" },
	{ 0x8d4384ab, "from_kgid" },
	{ 0x1fe24529, "__skb_get_hash" },
	{ 0xecda7997, "flow_get_u32_src" },
	{ 0x92cdbc06, "tcf_action_exec" },
	{ 0xce1798b2, "__tcf_em_tree_match" },
	{ 0xc2fb064b, "flow_keys_dissector" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x65d2e20c, "flow_get_u32_dst" },
	{ 0xff71b834, "skb_trim" },
	{ 0x2986f9de, "tcf_exts_dump_stats" },
	{ 0x365e8097, "tcf_em_tree_dump" },
	{ 0xe935f8fb, "tcf_exts_dump" },
	{ 0x68183b3b, "nla_put" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81dc71d0, "tcf_block_netif_keep_dst" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x33b98664, "tcf_exts_validate" },
	{ 0x85b0fd66, "tcf_em_tree_validate" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbe0e3cba, "tcf_queue_work" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x62bd84dd, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x6b51f53b, "tcf_em_tree_destroy" },
	{ 0x42ccb86c, "tcf_exts_destroy" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C06D0D87C315A516C7A2081");
