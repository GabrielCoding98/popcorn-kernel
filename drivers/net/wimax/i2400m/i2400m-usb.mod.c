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
	{ 0xe82a36d3, "i2400m_cmd_enter_powersave" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf9f2fb9, "i2400m_dev_reset_handle" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0x3f5118ae, "debugfs_create_u8" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xde6ef723, "usb_init_urb" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x342bcffa, "i2400m_tx_msg_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x96f6b9c1, "i2400m_rx" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0xada294a0, "usb_enable_autosuspend" },
	{ 0x9f975e5d, "usb_get_urb" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8ae137ee, "param_ops_string" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2d408914, "i2400m_setup" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xea9e14a2, "i2400m_is_boot_barker" },
	{ 0xb51feda, "i2400m_post_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9577d577, "ethtool_op_get_link" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x82780707, "debugfs_create_size_t" },
	{ 0x2ac79575, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2ff87e75, "i2400m_netdev_setup" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x40ef41fc, "i2400m_unknown_barker" },
	{ 0x8e0383b, "i2400m_pre_reset" },
	{ 0x26710f58, "usb_queue_reset_device" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xb6255798, "skb_copy_expand" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0x1152edb0, "dev_driver_string" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb00b793c, "i2400m_bm_cmd_prepare" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x178a635c, "i2400m_release" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xd525ed3b, "i2400m_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0xd2bd253d, "pm_runtime_set_autosuspend_delay" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x91bf1f94, "i2400m_tx_msg_sent" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2400m";

MODULE_ALIAS("usb:v8086p0186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0181d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1405d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0180d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0182d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1406d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1403d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "31164818DB78F272EDFA7A4");
