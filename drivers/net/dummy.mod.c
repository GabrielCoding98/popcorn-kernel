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
	{ 0xb7700415, "param_ops_int" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0x25c777e3, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x2f23ef73, "__rtnl_link_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x85bf72bd, "register_netdevice" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x25893cba, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x76e18a1a, "down_write" },
	{ 0x153e0eca, "pernet_ops_rwsem" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x912342a9, "ether_setup" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x86acc3b2, "skb_tstamp_tx" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FF01F2D4C53E7F939842380");
