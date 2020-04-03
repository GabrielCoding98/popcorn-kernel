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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x4c7a68b0, "debugfs_create_dir" },
	{ 0x226c9b6d, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x759f7158, "single_release" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x91715312, "sprintf" },
	{ 0x98ce88a8, "debugfs_remove_recursive" },
	{ 0x8e3afba1, "seq_read" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x754f348a, "complete_all" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0xb5033ee2, "tty_ldisc_flush" },
	{ 0x328a05f1, "strncpy" },
	{ 0x7bbc7fcb, "gpiod_direction_output_raw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xf4113d60, "tty_driver_flush_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0xe8ff1363, "sysfs_notify" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0xf4a709c0, "stop_tty" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xfe990052, "gpio_free" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xecb30410, "request_firmware" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x2a78bf4a, "gpiod_set_raw_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x1fc6f2c7, "tty_register_ldisc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xf41872ce, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "06B6E018857E74B4F2D4CEE");
