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
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x8da2fb8a, "hci_unregister_dev" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x3170fae0, "hci_free_dev" },
	{ 0x9f1ccf92, "hci_register_dev" },
	{ 0x79d2bb57, "hci_alloc_dev" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xd7442057, "bt_info" },
	{ 0xecb30410, "request_firmware" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x83bf7eb3, "hci_recv_frame" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x82da2b54, "skb_unlink" },
	{ 0x47022514, "bt_err" },
	{ 0x1d85ba13, "skb_queue_head" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A643A2BA15450C65F34B24A");
