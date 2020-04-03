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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x349cba85, "strchr" },
	{ 0x887ec63d, "usb_ep_disable" },
	{ 0x5a9fff9e, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x367f38d9, "usb_ep_queue" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x3204e6a1, "usb_ep_alloc_request" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x56db610a, "dev_set_mac_address" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9577d577, "ethtool_op_get_link" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x80fd477, "register_netdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0xcd2b3b73, "usb_ep_free_request" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xf4dfc5b1, "eth_mac_addr" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x98fc2eaf, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "88E8402BC504BE41B8FAFD3");
