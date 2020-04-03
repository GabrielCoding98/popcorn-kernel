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
	{ 0xfd99e7d6, "nft_unregister_obj" },
	{ 0xb0631932, "nft_unregister_expr" },
	{ 0xa04d94a, "nft_register_obj" },
	{ 0xfb51ac3f, "nft_register_expr" },
	{ 0x9d669763, "memcpy" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x328a05f1, "strncpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0xe5ff52ca, "nf_connlabels_put" },
	{ 0xe7ebb0c0, "nf_connlabels_get" },
	{ 0xec2404f1, "init_net" },
	{ 0x97c8f5e9, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x7f011322, "nf_connlabels_replace" },
	{ 0xaae3421a, "nf_ct_ext_add" },
	{ 0x19acaa94, "nf_ct_tmpl_alloc" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x26844a56, "nft_dump_register" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x39aefa1f, "nf_ct_helper_ext_add" },
	{ 0xd95e52f2, "nf_ct_netns_get" },
	{ 0x3a2e65ab, "nf_conntrack_helper_try_module_get" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x2d179c51, "nf_ct_netns_put" },
	{ 0x43faa93b, "nf_conntrack_helper_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x97255bdf, "strlen" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_conntrack";


MODULE_INFO(srcversion, "B2678CA8EC0A7F07F1AB393");