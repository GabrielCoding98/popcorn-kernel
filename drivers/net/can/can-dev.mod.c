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
	{ 0x2d3385d3, "system_wq" },
	{ 0xfb8949de, "netdev_info" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7c65012b, "napi_schedule_prep" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0x8d334730, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x7c2aadfa, "netif_napi_del" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x61ac380c, "netif_rx" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0xcddd1273, "sock_efree" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x80fd477, "register_netdev" },
	{ 0x68183b3b, "nla_put" },
	{ 0xe0a94f0d, "netif_receive_skb" },
	{ 0xeb1cf171, "netif_napi_add" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x3ff924c9, "of_get_child_by_name" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x90f71f7b, "__napi_schedule" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x20484055, "napi_complete_done" },
	{ 0xc30abd6, "netdev_err" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x829dddab, "netdev_warn" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xa3a5078a, "of_node_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B82AA640CBCB58859E43FDB");
