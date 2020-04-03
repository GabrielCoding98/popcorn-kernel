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
	{ 0x2178c2c8, "usbatm_usb_disconnect" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x90f3558c, "atm_dev_signal_change" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xf41872ce, "release_firmware" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0xe6c12171, "complete" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xecb30410, "request_firmware" },
	{ 0x91715312, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc6cbbc89, "capable" },
	{ 0x97255bdf, "strlen" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0xb81960ca, "snprintf" },
	{ 0x37788505, "device_remove_file" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1a83cf9e, "usb_string" },
	{ 0xf2639edc, "usbatm_usb_probe" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm,atm";

MODULE_ALIAS("usb:v0572pCAFEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p3457d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1803p5510d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p330Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0659p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0509p0812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100DpCB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100Dp3342d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0737211E76EE842C4B04EAD");
