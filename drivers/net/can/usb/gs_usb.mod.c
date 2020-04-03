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
	{ 0xad4ca99b, "can_change_mtu" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x22977aed, "unregister_candev" },
	{ 0x3402f74d, "free_candev" },
	{ 0x61439ff9, "register_candev" },
	{ 0xa1df6cb7, "alloc_candev_mqs" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3de211b7, "open_candev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92013acb, "alloc_can_skb" },
	{ 0x61ac380c, "netif_rx" },
	{ 0xdb5735d6, "alloc_can_err_skb" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x57f4ba3c, "can_get_echo_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x829dddab, "netdev_warn" },
	{ 0xc6890e81, "close_candev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xc2ecc0ce, "netif_device_detach" },
	{ 0xbdd38aa9, "usb_unanchor_urb" },
	{ 0x7682438a, "can_free_echo_skb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x8053339c, "can_put_echo_skb" },
	{ 0xd3c2ecf6, "usb_anchor_urb" },
	{ 0x9d669763, "memcpy" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc30abd6, "netdev_err" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0xfb8949de, "netdev_info" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x37a0cba, "kfree" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("usb:v1D50p606Fd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1209p2323d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "BD4F61D68A920B6A9A899F0");
