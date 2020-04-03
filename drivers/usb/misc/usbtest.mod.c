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
	{ 0xb7700415, "param_ops_int" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x521d9f34, "usb_get_descriptor" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xc2451da0, "mem_map" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe3864e23, "usb_get_status" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x4f22d6f9, "completion_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe6c12171, "complete" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x5f754e5a, "memset" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x12814e38, "usb_sg_wait" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1ef2a666, "usb_sg_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x347841ac, "usb_sg_cancel" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "24127B014D37CC63B8C724D");
