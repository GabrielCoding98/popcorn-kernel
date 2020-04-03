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
	{ 0x7d54146, "param_ops_bool" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0xd56ba424, "misc_deregister" },
	{ 0x8a0b551, "misc_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1d85ba13, "skb_queue_head" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x83bf7eb3, "hci_recv_frame" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6b568ade, "nonseekable_open" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x47022514, "bt_err" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x9f1ccf92, "hci_register_dev" },
	{ 0x79d2bb57, "hci_alloc_dev" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0x3170fae0, "hci_free_dev" },
	{ 0x8da2fb8a, "hci_unregister_dev" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "05C02F81A4BE4E80D3E22B9");
