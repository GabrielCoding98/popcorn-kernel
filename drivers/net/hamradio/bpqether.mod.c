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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7386b24e, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaef5f8c0, "dev_add_pack" },
	{ 0x9499d6aa, "proc_create_seq_private" },
	{ 0x58200626, "ax25_ip_xmit" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x491483ea, "seq_puts" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xff71b834, "skb_trim" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x8d334730, "skb_clone" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x2ac79575, "free_netdev" },
	{ 0xf754d24b, "dev_close" },
	{ 0x85bf72bd, "register_netdevice" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x84b183ae, "strncmp" },
	{ 0xec2404f1, "init_net" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x88d555ed, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ax25";


MODULE_INFO(srcversion, "067DFD33DC71121FC355B6B");
