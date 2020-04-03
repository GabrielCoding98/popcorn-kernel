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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa738c28a, "module_layout" },
	{ 0xf4e5e0ab, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x64ac2467, "up_read" },
	{ 0xb1fc9f05, "tty_unlock" },
	{ 0x98d44847, "start_tty" },
	{ 0x349cba85, "strchr" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x352c05d9, "release_resource" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaf070b04, "screen_pos" },
	{ 0xab800fe8, "tty_set_ldisc" },
	{ 0x97dd58b7, "tty_buffer_unlock_exclusive" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x96554810, "register_keyboard_notifier" },
	{ 0x91715312, "sprintf" },
	{ 0x55417264, "unregister_vt_notifier" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xa0b6c3dd, "kobject_create_and_add" },
	{ 0x60cc33c, "vc_cons" },
	{ 0x22b325d5, "kd_mksound" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x8a0b551, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb11d9000, "tty_dev_name_to_number" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0x9ed554b3, "unregister_keyboard_notifier" },
	{ 0x11089ac7, "_ctype" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x5041a8b7, "tty_ldisc_deref" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0xb5033ee2, "tty_ldisc_flush" },
	{ 0x328a05f1, "strncpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xeb63bbb8, "tty_ldisc_ref" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x96a82098, "tty_ldisc_receive_buf" },
	{ 0xc8339e24, "string_unescape" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x489d494f, "input_free_device" },
	{ 0xddd4edc, "screen_glyph" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0xf4a709c0, "stop_tty" },
	{ 0x81b98940, "tty_write_room" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc2c5b2b6, "vsnprintf" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x196fbb85, "tty_kopen" },
	{ 0xbe834529, "tty_kclose" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x721b1851, "skip_spaces" },
	{ 0x4e6e8ea7, "fg_console" },
	{ 0x581cde4e, "up" },
	{ 0xee768af3, "set_user_nice" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x541685c0, "tty_kref_put" },
	{ 0x49970de8, "finish_wait" },
	{ 0x590b36d1, "inverse_translate" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x58b582a, "vt_get_leds" },
	{ 0x7bf582ab, "tty_schedule_flip" },
	{ 0xb81960ca, "snprintf" },
	{ 0xa009470a, "tty_buffer_lock_exclusive" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1fc6f2c7, "tty_register_ldisc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x9cf41a78, "down_timeout" },
	{ 0xd56ba424, "misc_deregister" },
	{ 0xe0a6b585, "request_resource" },
	{ 0x39143cad, "tty_lock" },
	{ 0xbf041102, "register_vt_notifier" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x59638871, "tty_set_termios" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6df65bc1, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "61569548AF8BF9D136F29D7");
