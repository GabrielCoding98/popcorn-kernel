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
	{ 0x1e6d26a8, "strstr" },
	{ 0xf41872ce, "release_firmware" },
	{ 0xecb30410, "request_firmware" },
	{ 0x21e36bf2, "smscore_registry_getmode" },
	{ 0x74ee9098, "sms_board_load_modules" },
	{ 0xa021862b, "smscore_start_device" },
	{ 0xde6ef723, "usb_init_urb" },
	{ 0x46ac09ab, "smscore_set_board_id" },
	{ 0x5a2651d5, "smscore_register_device" },
	{ 0xb81960ca, "snprintf" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x5f754e5a, "memset" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0xc688e73b, "smscore_getbuffer" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x37d91069, "smsendian_handle_tx_message" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1307f18, "smscore_unregister_device" },
	{ 0x44823e43, "smscore_putbuffer" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7ee984f7, "smscore_onresponse" },
	{ 0x45284ae9, "smsendian_handle_rx_message" },
	{ 0x7c576277, "smsendian_handle_message_header" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv";

MODULE_ALIAS("usb:v187Fp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p1700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p1800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p1801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p200Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5510d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5520d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5580d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5590d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB910d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB980d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB990d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC0A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pF5A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2p0086d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2p0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3275p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F0383527CE434C3CD6A9810");
