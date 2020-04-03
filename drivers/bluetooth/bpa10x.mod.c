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
	{ 0x40b1b220, "hci_recv_diag" },
	{ 0x83bf7eb3, "hci_recv_frame" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x9f1ccf92, "hci_register_dev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x79d2bb57, "hci_alloc_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x42a08a22, "hci_set_fw_info" },
	{ 0xd7442057, "bt_info" },
	{ 0xbdd38aa9, "usb_unanchor_urb" },
	{ 0x47022514, "bt_err" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xd3c2ecf6, "usb_anchor_urb" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf01577a8, "__hci_cmd_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x3170fae0, "hci_free_dev" },
	{ 0x8da2fb8a, "hci_unregister_dev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D992476686D5A0D8B25640F");
