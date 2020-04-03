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
	{ 0xb7700415, "param_ops_int" },
	{ 0x988694e4, "noop_llseek" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x235c2927, "rc_free_device" },
	{ 0xb681d96f, "usb_register_dev" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x489d494f, "input_free_device" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0xfb0ec729, "rc_register_device" },
	{ 0xc96d3cbd, "rc_allocate_device" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x6df65bc1, "input_allocate_device" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x4a02305a, "usb_ifnum_to_if" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x8773584, "usb_deregister_dev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x54f6445d, "rc_unregister_device" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xb81960ca, "snprintf" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x97255bdf, "strlen" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb2558eaa, "usb_find_interface" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe6c12171, "complete" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5e89edd7, "rc_keyup" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdf678f0c, "rc_keydown" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x959f109b, "rc_g_keycode_from_table" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v15C2pFFDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0046d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "ADF7AEF5647370E13A9AB5A");
