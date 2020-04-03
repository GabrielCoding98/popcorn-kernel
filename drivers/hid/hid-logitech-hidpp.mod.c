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
	{ 0x7d54146, "param_ops_bool" },
	{ 0xbdc8486d, "hid_unregister_driver" },
	{ 0x70a86d4, "__hid_register_driver" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xd1f07697, "input_ff_create" },
	{ 0x63a42155, "hid_hw_start" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x581cde4e, "up" },
	{ 0xf0ef52e8, "down" },
	{ 0x448e4524, "hid_open_report" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x489d494f, "input_free_device" },
	{ 0xf52dcedb, "devm_kasprintf" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xe7f8a6ba, "devm_input_allocate_device" },
	{ 0xfbfd4f11, "power_supply_powers" },
	{ 0x4e7d41d2, "devm_power_supply_register" },
	{ 0x91715312, "sprintf" },
	{ 0x9a5e09c4, "devm_kmemdup" },
	{ 0xd21575c5, "input_mt_init_slots" },
	{ 0x9be9faa1, "input_set_capability" },
	{ 0xd0411de1, "input_alloc_absinfo" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0x8b13a8b8, "hid_snto32" },
	{ 0x6931acae, "hid_field_extract" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa9c6eab1, "power_supply_changed" },
	{ 0xd192e6f0, "power_supply_get_drvdata" },
	{ 0xb81960ca, "snprintf" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9bfa567e, "hid_hw_open" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x9d669763, "memcpy" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5f754e5a, "memset" },
	{ 0x5495392, "hid_debug" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x37788505, "device_remove_file" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x7ac6971d, "hid_hw_stop" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xe93ff5ec, "hid_hw_close" },
	{ 0x625b3305, "input_mt_report_slot_state" },
	{ 0x4c55db7d, "input_mt_get_slot_by_key" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x344f4c34, "input_mt_sync_frame" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g0102v0000046Dp00004011");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004101");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B00C");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000402D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004024");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004002");
MODULE_ALIAS("hid:b0003g0102v0000046Dp*");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C262");

MODULE_INFO(srcversion, "A67D013D1CA940ADD3D25EC");
