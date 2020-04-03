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
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0x37788505, "device_remove_file" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xb7d7564, "usbip_event_happened" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xfab5b0d0, "sgl_free" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xd29b0c43, "kernel_sendmsg" },
	{ 0x82a5d3cd, "sockfd_lookup" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1f64b100, "usb_set_configuration" },
	{ 0x66a0c0f6, "usbip_alloc_iso_desc_pdu" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xfffa3100, "sg_next" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xebd74385, "usb_hub_claim_port" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa88f32e8, "usbip_event_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x5f754e5a, "memset" },
	{ 0xe903786c, "usbip_in_eh" },
	{ 0x3d4b2d8, "usb_lock_device_for_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x7de6cebe, "usb_register_device_driver" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x654e0977, "kernel_sock_shutdown" },
	{ 0xbd0f6142, "device_attach" },
	{ 0x939d9e6f, "usbip_stop_eh" },
	{ 0x9807875a, "dev_attr_usbip_debug" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x90745321, "fput" },
	{ 0x76b0ffe2, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0xafd2962c, "usbip_dump_urb" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x75e2720e, "sgl_alloc" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x333e7604, "driver_create_file" },
	{ 0x2c2221a5, "usbip_recv" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0x6eb3466a, "usb_deregister_device_driver" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x8653d7ec, "usbip_recv_xbuff" },
	{ 0x9d78140a, "usb_hub_release_port" },
	{ 0x99b66e27, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x49970de8, "finish_wait" },
	{ 0x15123867, "driver_remove_file" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x51d718d, "usbip_start_eh" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xad0e65a6, "usbip_pack_pdu" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "3C5CCD9BC694C34E4775975");
