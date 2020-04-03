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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4012a125, "scsi_scan_host" },
	{ 0xb56f9bfa, "scsi_add_host_with_dma" },
	{ 0xf534c95f, "scsi_host_alloc" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x48f2426a, "scsi_cmd_get_serial" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xc2451da0, "mem_map" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0x3d4b2d8, "usb_lock_device_for_reset" },
	{ 0x244ab8be, "blk_queue_dma_alignment" },
	{ 0x37a0cba, "kfree" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x4b79a308, "scsi_host_put" },
	{ 0x927ac20a, "scsi_remove_host" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04CEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0094d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp009Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00B6d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "08FBA7B226F0568BFDD4A3D");
