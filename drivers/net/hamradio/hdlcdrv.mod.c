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
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x58200626, "ax25_ip_xmit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x80fd477, "register_netdev" },
	{ 0x4c8673f5, "__dev_kfree_skb_irq" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x9d669763, "memcpy" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x88d555ed, "ax25_header_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ax25,crc-ccitt";


MODULE_INFO(srcversion, "A692A08350081D433864A00");
