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
	{ 0xa30da245, "usb_serial_deregister_drivers" },
	{ 0x84609308, "usb_serial_register_drivers" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xbdd38aa9, "usb_unanchor_urb" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xd3c2ecf6, "usb_anchor_urb" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x71c90087, "memcmp" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x60afae3b, "usb_serial_port_softint" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2bb457a1, "tty_flip_buffer_push" },
	{ 0x915f8bbd, "tty_insert_flip_string_fixed_flag" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v091Ep0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E8D2AA771D471CE65ADBEC6");
