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
	{ 0xb0631932, "nft_unregister_expr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfb51ac3f, "nft_register_expr" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x7918576c, "nf_flow_table_cleanup" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9e66d86d, "flow_offload_free" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x68788ab9, "flow_offload_add" },
	{ 0x2d5a8945, "flow_offload_alloc" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfad83cf9, "nf_route" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd95e52f2, "nf_ct_netns_get" },
	{ 0x6513f6e5, "nft_flowtable_lookup" },
	{ 0x2d179c51, "nf_ct_netns_put" },
	{ 0x68183b3b, "nla_put" },
	{ 0x97255bdf, "strlen" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2f89e6c2, "nft_chain_validate_hooks" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_flow_table,nf_conntrack";


MODULE_INFO(srcversion, "C067AD06E9CDC061EAEBD48");
