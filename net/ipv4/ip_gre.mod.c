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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xc484571a, "register_pernet_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7830b402, "ip_tunnel_get_stats64" },
	{ 0x29b2899b, "ip_tunnel_get_iflink" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0xab88a9bb, "metadata_dst_alloc" },
	{ 0x57daa409, "ipv4_update_pmtu" },
	{ 0x58fe4cf5, "ip_tunnel_lookup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfa7abd8d, "__ip_tunnel_change_mtu" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x426e0d58, "dst_cache_get_ip4" },
	{ 0x3a639ff7, "__icmp_send" },
	{ 0x9b5e925b, "ip_tunnel_xmit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x76a15271, "__iptunnel_pull_header" },
	{ 0x12ca3174, "ip_tunnel_setup" },
	{ 0x64ab6992, "ip_tunnel_dellink" },
	{ 0x5f754e5a, "memset" },
	{ 0x41ce0b4e, "skb_checksum" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xe1b92e22, "ip_tunnel_delete_nets" },
	{ 0x718539e2, "gre_add_protocol" },
	{ 0x904712cb, "ip_tunnel_newlink" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc2744d2, "unregister_pernet_device" },
	{ 0x6c41b351, "ip_tunnel_uninit" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x68183b3b, "nla_put" },
	{ 0xe514b299, "gre_del_protocol" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xd31dbebf, "iptunnel_xmit" },
	{ 0x56f0c71b, "ip_tunnel_init" },
	{ 0x798ba50, "ip_tunnel_get_link_net" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0x30424bb9, "ip_tunnel_ioctl" },
	{ 0x66e4fba3, "ip_tunnel_changelink" },
	{ 0xd18c02fb, "rtnl_configure_link" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x65f4ed06, "ipv4_redirect" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x912342a9, "ether_setup" },
	{ 0x915fda5, "ip_tunnel_init_net" },
	{ 0xb19dba04, "iptunnel_handle_offloads" },
	{ 0xe3ec5362, "ip_route_output_flow" },
	{ 0x1efbc975, "rtnl_create_link" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x9c4911c4, "ip6_err_gen_icmpv6_unreach" },
	{ 0x9d669763, "memcpy" },
	{ 0xbe1c979, "___pskb_trim" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0x266a2e51, "dst_cache_set_ip4" },
	{ 0x8891730c, "ip_tunnel_encap_setup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x966c9023, "ip_tunnel_change_mtu" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0x16a0e15d, "gre_parse_header" },
	{ 0xb9ff31fb, "ip_tunnel_rcv" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre,ipv6";


MODULE_INFO(srcversion, "D957AB604A076D4A69491DA");
