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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x887ec63d, "usb_ep_disable" },
	{ 0x5a9fff9e, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x367f38d9, "usb_ep_queue" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xacea9150, "tty_register_driver" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbc8723c7, "put_tty_driver" },
	{ 0x3204e6a1, "usb_ep_alloc_request" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x50bfdef9, "tty_set_operations" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5e93758f, "tty_port_register_device" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x481c096b, "tty_port_init" },
	{ 0x915f8bbd, "tty_insert_flip_string_fixed_flag" },
	{ 0x693751b0, "tty_port_destroy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x63208a50, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xcd2b3b73, "usb_ep_free_request" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x34ff8fe0, "tty_unregister_driver" },
	{ 0x2aa4824c, "tty_hangup" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x84258ac5, "__tty_alloc_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x49970de8, "finish_wait" },
	{ 0x2bb457a1, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x37bcf1a, "tty_wakeup" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "6A799C3FFF7DDD27021F627");
