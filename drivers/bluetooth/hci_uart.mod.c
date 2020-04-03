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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1d85ba13, "skb_queue_head" },
	{ 0x40b1b220, "hci_recv_diag" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x815588a6, "clk_enable" },
	{ 0x82030b4e, "__pm_runtime_disable" },
	{ 0xf01577a8, "__hci_cmd_sync" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x55aac369, "__pm_runtime_use_autosuspend" },
	{ 0x9f1ccf92, "hci_register_dev" },
	{ 0x4b1d56ac, "__pm_runtime_suspend" },
	{ 0x6885c502, "btbcm_patchram" },
	{ 0xcd010f80, "btbcm_check_bdaddr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa5d7a543, "hci_reset_dev" },
	{ 0x5752c42d, "tty_unthrottle" },
	{ 0x6436342d, "btbcm_set_bdaddr" },
	{ 0xe2c01882, "__percpu_down_read" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x838cfe21, "serdev_device_close" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x83bf7eb3, "hci_recv_frame" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0x8da2fb8a, "hci_unregister_dev" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa7b66015, "serdev_device_write_buf" },
	{ 0x47022514, "bt_err" },
	{ 0xd7442057, "bt_info" },
	{ 0x17a7b58, "serdev_device_set_tiocm" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x687cc7b5, "__serdev_device_driver_register" },
	{ 0x119e099f, "__percpu_init_rwsem" },
	{ 0xb5033ee2, "tty_ldisc_flush" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0x3e6b4b4e, "n_tty_ioctl_helper" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x79d2bb57, "hci_alloc_dev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1d0afa28, "serdev_device_write_flush" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x781e5791, "percpu_up_write" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x978e037a, "device_property_read_u32_array" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0xf4113d60, "tty_driver_flush_buffer" },
	{ 0x2dc9c197, "devm_free_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x95aafef9, "__pm_runtime_set_status" },
	{ 0x8eeb76a7, "devm_clk_get" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x5ecb4009, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xb171fb2c, "__percpu_up_read" },
	{ 0x9d669763, "memcpy" },
	{ 0xf8b6597a, "gpiod_to_irq" },
	{ 0x21fef170, "serdev_device_set_flow_control" },
	{ 0xb5734d3c, "btbcm_initialize" },
	{ 0xecb30410, "request_firmware" },
	{ 0x4202f912, "gpiod_set_value_cansleep" },
	{ 0xd2bd253d, "pm_runtime_set_autosuspend_delay" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x4002ee34, "btbcm_finalize" },
	{ 0x749431db, "platform_get_irq" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3170fae0, "hci_free_dev" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0xeabdf13a, "serdev_device_set_baudrate" },
	{ 0x1fc6f2c7, "tty_register_ldisc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xb117789e, "percpu_down_write" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x59638871, "tty_set_termios" },
	{ 0x718b0a60, "percpu_free_rwsem" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,btbcm,serdev";

MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-btC*");

MODULE_INFO(srcversion, "C5887DB4F9D7AA003EFCCCA");
