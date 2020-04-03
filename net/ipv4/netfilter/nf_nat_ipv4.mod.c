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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3159501e, "nf_nat_unregister_fn" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xabb7bcef, "nf_ct_nat_ext_add" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x5536d3ab, "nf_nat_used_tuple" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3dcfeac9, "nf_nat_l4proto_register" },
	{ 0x23cb39f3, "inet_proto_csum_replace4" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x57f70547, "secure_ipv4_port_ephemeral" },
	{ 0x99010d79, "nf_ip_checksum" },
	{ 0x41ce0b4e, "skb_checksum" },
	{ 0x7c32d0f0, "printk" },
	{ 0x23d42fa0, "inet_select_addr" },
	{ 0xc7f8a43b, "nf_nat_register_fn" },
	{ 0x84d2e8a7, "nf_nat_l4proto_nlattr_to_range" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x43e77084, "ip_route_me_harder" },
	{ 0x35107d05, "nf_nat_l4proto_unregister" },
	{ 0xb6105b62, "nf_xfrm_me_harder" },
	{ 0x92f432bc, "nf_nat_setup_info" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa416b7ea, "nf_ct_iterate_cleanup_net" },
	{ 0x22bff1ce, "skb_make_writable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd798956f, "nf_nat_l3proto_unregister" },
	{ 0xb9a1b391, "nf_nat_inet_fn" },
	{ 0x8b2e9e7f, "nf_nat_l3proto_register" },
	{ 0x105e78e9, "__nf_nat_l4proto_find" },
	{ 0xae12eeca, "nf_ct_invert_tuplepr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "395EBD4F2BDD0AE8F068FCC");
