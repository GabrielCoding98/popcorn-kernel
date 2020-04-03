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
	{ 0x445c816c, "ida_destroy" },
	{ 0xbdc8486d, "hid_unregister_driver" },
	{ 0x70a86d4, "__hid_register_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x344f4c34, "input_mt_sync_frame" },
	{ 0x625b3305, "input_mt_report_slot_state" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x4de2e10c, "device_create_file" },
	{ 0x2298084f, "input_ff_create_memless" },
	{ 0x9be9faa1, "input_set_capability" },
	{ 0x9bfa567e, "hid_hw_open" },
	{ 0xfbfd4f11, "power_supply_powers" },
	{ 0x4e7d41d2, "devm_power_supply_register" },
	{ 0xf52dcedb, "devm_kasprintf" },
	{ 0xde685de1, "hid_validate_values" },
	{ 0xc121b314, "devm_of_led_classdev_register" },
	{ 0xeb00f3ca, "ida_alloc_range" },
	{ 0x71c90087, "memcmp" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xd21575c5, "input_mt_init_slots" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x37788505, "device_remove_file" },
	{ 0x21af32f7, "ida_free" },
	{ 0xe93ff5ec, "hid_hw_close" },
	{ 0x562194f6, "__hid_request" },
	{ 0x7ac6971d, "hid_hw_stop" },
	{ 0x63a42155, "hid_hw_start" },
	{ 0x448e4524, "hid_open_report" },
	{ 0xd192e6f0, "power_supply_get_drvdata" },
	{ 0xd0411de1, "input_alloc_absinfo" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0xe7f8a6ba, "devm_input_allocate_device" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb81960ca, "snprintf" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x122170da, "crc32_le" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ff-memless";

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");

MODULE_INFO(srcversion, "57B8544AF1830690F1CA611");
