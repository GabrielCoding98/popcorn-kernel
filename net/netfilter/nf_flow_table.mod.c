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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x34a8b541, "rhashtable_walk_exit" },
	{ 0xffe34ebe, "rht_bucket_nested" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb81b1055, "rhashtable_walk_next" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x23cb39f3, "inet_proto_csum_replace4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc3d579c5, "rhashtable_insert_slow" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa9742874, "inet_proto_csum_replace16" },
	{ 0xa9fb6b48, "rhashtable_destroy" },
	{ 0x7fad8e5a, "nf_ct_delete" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x1dc4fef7, "rht_bucket_nested_insert" },
	{ 0x5f754e5a, "memset" },
	{ 0xef3f0b40, "rhashtable_walk_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0xa730242c, "rhashtable_walk_start_check" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3fa44dc1, "dev_get_by_index_rcu" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x20c9060a, "rhashtable_walk_enter" },
	{ 0x50f3d972, "rhashtable_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x21882227, "neigh_xmit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x4e9889cd, "skb_gso_validate_network_len" },
	{ 0xe63cefed, "__nf_ct_l4proto_find" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "35D5D570F92422A7B786ABA");