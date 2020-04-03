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
	{ 0x37788505, "device_remove_file" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x53f3a891, "generic_file_llseek" },
	{ 0x448e4524, "hid_open_report" },
	{ 0x226c9b6d, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x2298084f, "input_ff_create_memless" },
	{ 0x759f7158, "single_release" },
	{ 0x55957a3a, "power_supply_unregister" },
	{ 0xe18b6e3d, "kobject_uevent" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xfbfd4f11, "power_supply_powers" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x91715312, "sprintf" },
	{ 0x8e3afba1, "seq_read" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xbcd63380, "of_led_classdev_register" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xd192e6f0, "power_supply_get_drvdata" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xe93ff5ec, "hid_hw_close" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x84b183ae, "strncmp" },
	{ 0x25897c6, "debugfs_remove" },
	{ 0x9bfa567e, "hid_hw_open" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2c63826b, "simple_open" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x489d494f, "input_free_device" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0x7ac6971d, "hid_hw_stop" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x47d7efde, "get_device" },
	{ 0xf999f91b, "led_classdev_unregister" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0x70a86d4, "__hid_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x63a42155, "hid_hw_start" },
	{ 0x221d2a57, "power_supply_register" },
	{ 0xbdc8486d, "hid_unregister_driver" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x6df65bc1, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ff-memless";

MODULE_ALIAS("hid:b0005g*v0000057Ep00000306");
MODULE_ALIAS("hid:b0005g*v0000057Ep00000330");

MODULE_INFO(srcversion, "CEE1AF321981356D8E60CC5");
