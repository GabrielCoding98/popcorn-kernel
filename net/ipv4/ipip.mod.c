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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x798ba50, "ip_tunnel_get_link_net" },
	{ 0x64ab6992, "ip_tunnel_dellink" },
	{ 0x29b2899b, "ip_tunnel_get_iflink" },
	{ 0x7830b402, "ip_tunnel_get_stats64" },
	{ 0x966c9023, "ip_tunnel_change_mtu" },
	{ 0x6c41b351, "ip_tunnel_uninit" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0xc2744d2, "unregister_pernet_device" },
	{ 0x56e4790f, "xfrm4_tunnel_deregister" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0x1d70dfa8, "xfrm4_tunnel_register" },
	{ 0xc484571a, "register_pernet_device" },
	{ 0x7c32d0f0, "printk" },
	{ 0x915fda5, "ip_tunnel_init_net" },
	{ 0xe1b92e22, "ip_tunnel_delete_nets" },
	{ 0xe198f1d8, "__xfrm_policy_check" },
	{ 0xb9ff31fb, "ip_tunnel_rcv" },
	{ 0xab88a9bb, "metadata_dst_alloc" },
	{ 0x76a15271, "__iptunnel_pull_header" },
	{ 0x57daa409, "ipv4_update_pmtu" },
	{ 0x65f4ed06, "ipv4_redirect" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x58fe4cf5, "ip_tunnel_lookup" },
	{ 0x56f0c71b, "ip_tunnel_init" },
	{ 0x9b5e925b, "ip_tunnel_xmit" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x2b021523, "ip_md_tunnel_xmit" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xb19dba04, "iptunnel_handle_offloads" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x30424bb9, "ip_tunnel_ioctl" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x12ca3174, "ip_tunnel_setup" },
	{ 0x904712cb, "ip_tunnel_newlink" },
	{ 0x66e4fba3, "ip_tunnel_changelink" },
	{ 0x8891730c, "ip_tunnel_encap_setup" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";


MODULE_INFO(srcversion, "B2CCDB04988D130A6570F5B");
