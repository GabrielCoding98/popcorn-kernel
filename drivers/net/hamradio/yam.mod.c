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
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x9499d6aa, "proc_create_seq_private" },
	{ 0xec2404f1, "init_net" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x80fd477, "register_netdev" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x91715312, "sprintf" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xae9849dd, "__request_region" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4384eb42, "__release_region" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x58200626, "ax25_ip_xmit" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x61ac380c, "netif_rx" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf41872ce, "release_firmware" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x793b43cb, "platform_device_unregister" },
	{ 0xecb30410, "request_firmware" },
	{ 0xbdb93cb5, "platform_device_register_full" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x24d273d1, "add_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd7c5d7c0, "seq_printf" },
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


MODULE_INFO(srcversion, "9EC31721A81C15A269DEBA1");
