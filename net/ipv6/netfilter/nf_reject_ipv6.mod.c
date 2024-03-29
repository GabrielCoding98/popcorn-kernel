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
	{ 0x7f978e62, "icmpv6_send" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x981c9b20, "nf_ct_attach" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5f754e5a, "memset" },
	{ 0xd4a79059, "l3mdev_master_ifindex_rcu" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x78cb06b6, "ip6_route_output_flags" },
	{ 0xe302fa6b, "ipv6_skip_exthdr" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xc0e4977e, "ip6_local_out" },
	{ 0xbe154a3e, "ip6_dst_hoplimit" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xbbc03509, "xfrm_lookup" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0x94fc7037, "nf_ip6_checksum" },
	{ 0xd542439, "__ipv6_addr_type" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "B77478A5AFAC08AA8480625");
