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
	{ 0x777c784, "ath6kl_core_destroy" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xbf324348, "ath6kl_core_cleanup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdf2b84d6, "ath6kl_core_create" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xbdd38aa9, "usb_unanchor_urb" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xcb014460, "ath6kl_err" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xa6f66cc1, "ath6kl_warn" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xabbcd029, "ath6kl_stop_txrx" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xd1e69f35, "ath6kl_core_init" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4b932e9, "ath6kl_core_rx_complete" },
	{ 0x9d669763, "memcpy" },
	{ 0xaa7f2cfa, "ath6kl_core_tx_complete" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xd3c2ecf6, "usb_anchor_urb" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath6kl_core";

MODULE_ALIAS("usb:v0CF3p9375d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p9374d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3951454768067DFAD8C39BA");
