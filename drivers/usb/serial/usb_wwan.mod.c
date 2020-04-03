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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9d87bf00, "usb_get_from_anchor" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5de6316b, "usb_autopm_put_interface_async" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x915f8bbd, "tty_insert_flip_string_fixed_flag" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x6a252d7c, "usb_autopm_get_interface_async" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xca3d8b21, "usb_autopm_get_interface_no_resume" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2bb457a1, "tty_flip_buffer_push" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x60afae3b, "usb_serial_port_softint" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0xd3c2ecf6, "usb_anchor_urb" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";


MODULE_INFO(srcversion, "B24B0D00A85F22F7ABDFF06");
