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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x2178c2c8, "usbatm_usb_disconnect" },
	{ 0xb316bedd, "param_ops_byte" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0x9d669763, "memcpy" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x65354236, "usb_driver_claim_interface" },
	{ 0x90f3558c, "atm_dev_signal_change" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x71c90087, "memcmp" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xecb30410, "request_firmware" },
	{ 0x91715312, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xbc034315, "usb_driver_release_interface" },
	{ 0x4a02305a, "usb_ifnum_to_if" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x1a83cf9e, "usb_string" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x92b57248, "flush_work" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf2639edc, "usbatm_usb_probe" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm,atm";

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "830063AB5B56DA3DC21842C");
