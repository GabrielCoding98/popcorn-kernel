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
	{ 0x9577d577, "ethtool_op_get_link" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0x70976b0b, "passthru_features_check" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xa83301c5, "skb_headers_offset_update" },
	{ 0x70ab6b15, "skb_copy_header" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x1010cbc6, "napi_gro_receive" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xd2fa76ce, "build_skb" },
	{ 0x25d81a6a, "xdp_do_redirect" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x20484055, "napi_complete_done" },
	{ 0xc2451da0, "mem_map" },
	{ 0xed3bb37b, "__tracepoint_xdp_exception" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x3214b517, "bpf_redirect_info" },
	{ 0xd832951, "netdev_update_features" },
	{ 0x11f08ddd, "bpf_prog_put" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x48f0ac36, "__dev_forward_skb" },
	{ 0xab2fe01c, "xdp_return_frame_rx_napi" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x90f71f7b, "__napi_schedule" },
	{ 0x7c65012b, "napi_schedule_prep" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7c2aadfa, "netif_napi_del" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xecc09f2f, "napi_hash_del" },
	{ 0x4aeb3e54, "napi_disable" },
	{ 0xeb1cf171, "netif_napi_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xff994088, "xdp_rxq_info_unreg" },
	{ 0xda6730e3, "xdp_rxq_info_reg" },
	{ 0x6b9a9111, "xdp_rxq_info_reg_mem_model" },
	{ 0x38b99bf5, "xdp_rxq_info_is_reg" },
	{ 0x64d76fb1, "xdp_return_frame" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0x912342a9, "ether_setup" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x62bd84dd, "__put_net" },
	{ 0x2ac79575, "free_netdev" },
	{ 0xd18c02fb, "rtnl_configure_link" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x85bf72bd, "register_netdevice" },
	{ 0x1efbc975, "rtnl_create_link" },
	{ 0x96afc98a, "rtnl_link_get_net" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0xe1e7e40c, "rtnl_nla_parse_ifla" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8484D0AEC33ABE0C5DF9A67");
