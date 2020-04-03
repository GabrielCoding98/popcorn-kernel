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
	{ 0x16fc1b42, "usb_create_shared_hcd" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xd29b0c43, "kernel_sendmsg" },
	{ 0x82a5d3cd, "sockfd_lookup" },
	{ 0xa93226c0, "usb_add_hcd" },
	{ 0xc2451da0, "mem_map" },
	{ 0x349cba85, "strchr" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2f90bbb9, "usb_remove_hcd" },
	{ 0x45c2de1e, "usb_create_hcd" },
	{ 0x2a647270, "usb_hcd_poll_rh_status" },
	{ 0x66a0c0f6, "usbip_alloc_iso_desc_pdu" },
	{ 0xfffa3100, "sg_next" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfa6f47ce, "usb_hcd_giveback_urb" },
	{ 0x91715312, "sprintf" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3919aac5, "usb_put_hcd" },
	{ 0xa88f32e8, "usbip_event_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x1bdc8ea7, "usb_hcd_is_primary_hcd" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x63628c5f, "usb_hcd_link_urb_to_ep" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0x4a183a21, "platform_device_del" },
	{ 0x21618bec, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdfb0dd0, "platform_device_add" },
	{ 0x654e0977, "kernel_sock_shutdown" },
	{ 0x939d9e6f, "usbip_stop_eh" },
	{ 0x9807875a, "dev_attr_usbip_debug" },
	{ 0x793b43cb, "platform_device_unregister" },
	{ 0x373db350, "kstrtoint" },
	{ 0xfdfa0bcb, "sysfs_remove_link" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x90745321, "fput" },
	{ 0x76b0ffe2, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9373b546, "usbip_pad_iso" },
	{ 0x56905225, "usb_hcd_check_unlink_urb" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xafd2962c, "usbip_dump_urb" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x2c2221a5, "usbip_recv" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0x14e86938, "platform_bus" },
	{ 0xe7a7c01f, "platform_device_add_data" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x8653d7ec, "usbip_recv_xbuff" },
	{ 0x99b66e27, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0xa7177d64, "usb_hcd_unlink_urb_from_ep" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x15424fbd, "usb_hcd_resume_root_hub" },
	{ 0x51d718d, "usbip_start_eh" },
	{ 0xad0e65a6, "usbip_pack_pdu" },
	{ 0x148ea913, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "808D6DA4C0634CDE523A524");
