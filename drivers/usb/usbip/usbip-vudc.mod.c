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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xb7d7564, "usbip_event_happened" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xd29b0c43, "kernel_sendmsg" },
	{ 0x82a5d3cd, "sockfd_lookup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x66a0c0f6, "usbip_alloc_iso_desc_pdu" },
	{ 0xdabe5e51, "usb_del_gadget_udc" },
	{ 0x8b4d806f, "usb_gadget_giveback_request" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa88f32e8, "usbip_event_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x61b7b2f3, "usb_gadget_udc_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x4a183a21, "platform_device_del" },
	{ 0x21618bec, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdfb0dd0, "platform_device_add" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x654e0977, "kernel_sock_shutdown" },
	{ 0x939d9e6f, "usbip_stop_eh" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x373db350, "kstrtoint" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x90745321, "fput" },
	{ 0x76b0ffe2, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2c2221a5, "usbip_recv" },
	{ 0x6c3fa34d, "usb_add_gadget_udc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x47a84576, "usb_ep_set_maxpacket_limit" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8653d7ec, "usbip_recv_xbuff" },
	{ 0x99b66e27, "__put_task_struct" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x51d718d, "usbip_start_eh" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xad0e65a6, "usbip_pack_pdu" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x148ea913, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core,udc-core";


MODULE_INFO(srcversion, "48C65189229D17D98DB3290");
