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
	{ 0xa30da245, "usb_serial_deregister_drivers" },
	{ 0x84609308, "usb_serial_register_drivers" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x4c6e61e2, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xfd583f37, "__tty_insert_flip_char" },
	{ 0x2bb457a1, "tty_flip_buffer_push" },
	{ 0x915f8bbd, "tty_insert_flip_string_fixed_flag" },
	{ 0x85ddbfb7, "tty_port_tty_get" },
	{ 0x541685c0, "tty_kref_put" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa41df7e5, "tty_port_tty_wakeup" },
	{ 0x9d669763, "memcpy" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v05C5p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C5p0004d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F873B8AE6501F5DCE2325B4");
