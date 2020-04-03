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
	{ 0xa39b3730, "release_sock" },
	{ 0x98a6ef52, "sctp_transport_lookup_process" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9191512f, "inet_diag_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x891aa5e7, "inet_diag_msg_attrs_fill" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xff71b834, "skb_trim" },
	{ 0x5f754e5a, "memset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6addc74a, "lock_sock_nested" },
	{ 0x68183b3b, "nla_put" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9e6e325e, "netlink_unicast" },
	{ 0x944ddbbc, "nla_reserve_64bit" },
	{ 0x352e6755, "inet_diag_msg_common_fill" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x63cccac6, "sctp_for_each_transport" },
	{ 0x4821591, "sock_diag_check_cookie" },
	{ 0xc975ba83, "sock_diag_save_cookie" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf9dcd1d2, "nla_reserve" },
	{ 0xb5da93ad, "inet_diag_register" },
	{ 0xe3fc549, "__nlmsg_put" },
	{ 0xcbbcee4a, "sctp_get_sctp_info" },
	{ 0x7495fa10, "sctp_for_each_endpoint" },
	{ 0x8ed4eece, "netlink_net_capable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sctp,inet_diag";


MODULE_INFO(srcversion, "30A064EB70A7D74BC61771F");
