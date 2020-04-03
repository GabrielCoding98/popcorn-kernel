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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x711b8a9b, "__crc32c_le_shift" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x59020f44, "nf_nat_hook" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0xb959030d, "nf_ct_kill_acct" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2124474, "ip_send_check" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x23cb39f3, "inet_proto_csum_replace4" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x51d8ec04, "__skb_checksum" },
	{ 0xb15b4109, "crc32c" },
	{ 0xfe1d2dd9, "nf_ct_iterate_destroy" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0x54e6e263, "nf_unregister_net_hooks" },
	{ 0xa78cea1c, "nf_hook_entries_delete_raw" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2ab89503, "nf_conntrack_alter_reply" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6bc1e893, "nf_register_net_hooks" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xe671296f, "nf_conntrack_tuple_taken" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f604910, "nf_ct_extend_unregister" },
	{ 0xe67a5e11, "nf_ct_helper_expectfn_register" },
	{ 0x22bff1ce, "skb_make_writable" },
	{ 0xdeac65ff, "nf_ct_extend_register" },
	{ 0x8f7324dc, "__xfrm_decode_session" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6d37e23c, "nf_ct_helper_expectfn_unregister" },
	{ 0x99bb8806, "memmove" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xd42c5c94, "nf_ct_seqadj_set" },
	{ 0xbbc03509, "xfrm_lookup" },
	{ 0xa50cd4a2, "nf_hook_entries_insert_raw" },
	{ 0xae12eeca, "nf_ct_invert_tuplepr" },
	{ 0x9a717656, "__do_once_done" },
	{ 0xaae3421a, "nf_ct_ext_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "587BDA910F7A1F868FC787C");