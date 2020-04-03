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
	{ 0x7ea0ac52, "nft_reject_policy" },
	{ 0xb0631932, "nft_unregister_expr" },
	{ 0xfb51ac3f, "nft_register_expr" },
	{ 0xcf264515, "nf_reject_ip6_tcphdr_put" },
	{ 0x3bf823fa, "nf_reject_ip6_tcphdr_get" },
	{ 0xce3d60da, "nf_reject_ip_tcphdr_put" },
	{ 0x1f3dabf9, "nf_reject_ip_tcphdr_get" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0x94fc7037, "nf_ip6_checksum" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0xd49998ef, "nf_reject_ip6hdr_put" },
	{ 0xe302fa6b, "ipv6_skip_exthdr" },
	{ 0x2e863ede, "pskb_trim_rcsum_slow" },
	{ 0x99010d79, "nf_ip_checksum" },
	{ 0x8d4051ed, "br_forward" },
	{ 0x2124474, "ip_send_check" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x4956a617, "nf_reject_iphdr_put" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2f89e6c2, "nft_chain_validate_hooks" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,nf_tables,nf_reject_ipv6,nf_reject_ipv4,bridge";


MODULE_INFO(srcversion, "798F876596E20ECAA902AD8");
