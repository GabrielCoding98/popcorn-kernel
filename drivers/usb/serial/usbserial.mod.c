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
	{ 0x85ddbfb7, "tty_port_tty_get" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x87a64612, "bus_register" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa6265634, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0x491483ea, "seq_puts" },
	{ 0x5cd2f302, "tty_port_open" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xb22e454, "tty_port_hangup" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xacea9150, "tty_register_driver" },
	{ 0xb53dfafc, "usb_autopm_get_interface" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbc8723c7, "put_tty_driver" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x50bfdef9, "tty_set_operations" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xfd583f37, "__tty_insert_flip_char" },
	{ 0xbbfef21f, "tty_port_close" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0xbf56919d, "device_del" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5041a8b7, "tty_ldisc_deref" },
	{ 0x5e93758f, "tty_port_register_device" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x82622123, "usb_unpoison_urb" },
	{ 0xf63991ee, "usb_poison_urb" },
	{ 0x5a503b0b, "seq_putc" },
	{ 0x481c096b, "tty_port_init" },
	{ 0x915f8bbd, "tty_insert_flip_string_fixed_flag" },
	{ 0x693751b0, "tty_port_destroy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x634b5a3d, "tty_vhangup" },
	{ 0xeb63bbb8, "tty_ldisc_ref" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x8d93858d, "device_add" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x48bbceb4, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xce21793, "usb_store_new_id" },
	{ 0xd4c365b5, "usb_match_id" },
	{ 0x61275678, "idr_remove" },
	{ 0xa41df7e5, "tty_port_tty_wakeup" },
	{ 0x77c59098, "module_put" },
	{ 0x63208a50, "tty_unregister_device" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xbac1993e, "usb_get_dev" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1e3c5edc, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x659ecfbe, "usb_get_intf" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x34ff8fe0, "tty_unregister_driver" },
	{ 0x2aa4824c, "tty_hangup" },
	{ 0x845b2069, "usb_show_dynids" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x7fa216df, "tty_standard_install" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x84258ac5, "__tty_alloc_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x1017cd77, "device_initialize" },
	{ 0xac4c4e2c, "usb_match_one_id" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x541685c0, "tty_kref_put" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc287d7d8, "driver_attach" },
	{ 0x2bb457a1, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xaf38e081, "idr_find" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xca0304ef, "try_module_get" },
	{ 0x7a9a1802, "usb_autopm_put_interface" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xb279b001, "usb_put_intf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "68D9DF006C82E7344FF24F4");
