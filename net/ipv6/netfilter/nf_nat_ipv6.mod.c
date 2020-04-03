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
	{ 0xe1a4f16a, "secure_ipv6_port_ephemeral" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3159501e, "nf_nat_unregister_fn" },
	{ 0xabb7bcef, "nf_ct_nat_ext_add" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x5536d3ab, "nf_nat_used_tuple" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3dcfeac9, "nf_nat_l4proto_register" },
	{ 0x23cb39f3, "inet_proto_csum_replace4" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x62bd84dd, "__put_net" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa9742874, "inet_proto_csum_replace16" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x41ce0b4e, "skb_checksum" },
	{ 0x71c90087, "memcmp" },
	{ 0xc7f8a43b, "nf_nat_register_fn" },
	{ 0x84d2e8a7, "nf_nat_l4proto_nlattr_to_range" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x3b1fd29c, "ipv6_dev_get_saddr" },
	{ 0x35107d05, "nf_nat_l4proto_unregister" },
	{ 0xb6105b62, "nf_xfrm_me_harder" },
	{ 0x77c59098, "module_put" },
	{ 0x92f432bc, "nf_nat_setup_info" },
	{ 0xe302fa6b, "ipv6_skip_exthdr" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa416b7ea, "nf_ct_iterate_cleanup_net" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa3fd43f0, "ip6_route_me_harder" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x37a0cba, "kfree" },
	{ 0x22bff1ce, "skb_make_writable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xd798956f, "nf_nat_l3proto_unregister" },
	{ 0xb9a1b391, "nf_nat_inet_fn" },
	{ 0x8b2e9e7f, "nf_nat_l3proto_register" },
	{ 0x105e78e9, "__nf_nat_l4proto_find" },
	{ 0x94fc7037, "nf_ip6_checksum" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xae12eeca, "nf_ct_invert_tuplepr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,ipv6,nf_conntrack";


MODULE_INFO(srcversion, "9AB621F77E819E875C85F91");
