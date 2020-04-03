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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3b917bbf, "complete_and_exit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3f498953, "send_sig" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa7ffef14, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfbefb55d, "atm_charge" },
	{ 0x91715312, "sprintf" },
	{ 0xb25c75f6, "vcc_release_async" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xff71b834, "skb_trim" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x1a83cf9e, "usb_string" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xab94c780, "atm_dev_register" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x16172034, "atm_dev_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x6d87b69, "crc32_be" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";


MODULE_INFO(srcversion, "D8EACBA47E67EFCB360A879");
