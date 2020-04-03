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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x72a32592, "usb_gstrings_attach" },
	{ 0x4c438863, "usb_free_all_descriptors" },
	{ 0x887ec63d, "usb_ep_disable" },
	{ 0x5a9fff9e, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xdc2d098a, "gether_get_qmult" },
	{ 0x367f38d9, "usb_ep_queue" },
	{ 0x28f5dab5, "gether_setup_name_default" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8b299b50, "gether_get_ifname" },
	{ 0x3204e6a1, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0x5a7cc4b3, "skb_realloc_headroom" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x4dac9ca5, "usb_function_unregister" },
	{ 0xff71b834, "skb_trim" },
	{ 0x45040751, "gether_set_host_addr" },
	{ 0xc1e0040c, "gether_get_dev_addr" },
	{ 0x5f754e5a, "memset" },
	{ 0xc0484895, "gether_connect" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x51d050a, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe8d55f0f, "usb_ep_autoconfig" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x21af32f7, "ida_free" },
	{ 0x12e04db4, "gether_set_gadget" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4c2616a2, "gether_get_host_addr" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0x6d85bd58, "gether_set_qmult" },
	{ 0x23e09761, "gether_get_host_addr_u8" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x31b5ed77, "usb_function_register" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x10ceb1f, "gether_register_netdev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c671dc3, "gether_set_dev_addr" },
	{ 0x8191d049, "config_ep_by_speed" },
	{ 0xcd2b3b73, "usb_ep_free_request" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x302c9a00, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5d7f4ae1, "usb_assign_descriptors" },
	{ 0xce548b86, "usb_interface_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x9072271c, "usb_os_desc_prepare_interf_dir" },
	{ 0x710bccb9, "dev_get_stats" },
	{ 0xeb00f3ca, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,udc-core,u_ether";


MODULE_INFO(srcversion, "E716C152BA20EB4135A0AAB");
