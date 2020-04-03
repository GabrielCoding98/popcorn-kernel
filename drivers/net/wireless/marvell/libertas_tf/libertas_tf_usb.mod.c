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
	{ 0xf9a482f9, "msleep" },
	{ 0x4c53c1e7, "__lbtf_cmd" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x98faf04, "lbtf_cmd_copyback" },
	{ 0x7330b52f, "lbtf_cmd_response_rx" },
	{ 0xaffc09f1, "lbtf_send_tx_feedback" },
	{ 0x147b861e, "lbtf_add_card" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9df134c7, "lbtf_remove_card" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaf5025be, "kernel_param_unlock" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc530dd27, "kernel_param_lock" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x67f9660d, "lbtf_rx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xecb30410, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5e6ae5a1, "lbtf_bcn_sent" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas_tf";

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "80BD47B9A2CD7C3D23A802F");
