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
	{ 0xbdc8486d, "hid_unregister_driver" },
	{ 0x70a86d4, "__hid_register_driver" },
	{ 0x63a42155, "hid_hw_start" },
	{ 0x448e4524, "hid_open_report" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7ac6971d, "hid_hw_stop" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x344f4c34, "input_mt_sync_frame" },
	{ 0x625b3305, "input_mt_report_slot_state" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x9d669763, "memcpy" },
	{ 0x99bb8806, "memmove" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa28cae56, "devm_kfree" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xc121b314, "devm_of_led_classdev_register" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xd21575c5, "input_mt_init_slots" },
	{ 0xd0411de1, "input_alloc_absinfo" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0018g*v00000B05p00008585");
MODULE_ALIAS("hid:b0018g*v00000B05p00000101");
MODULE_ALIAS("hid:b0003g*v00000B05p00001854");
MODULE_ALIAS("hid:b0003g*v00000B05p00001837");
MODULE_ALIAS("hid:b0003g*v00000B05p00001822");
MODULE_ALIAS("hid:b0003g*v00000B05p000017E0");
MODULE_ALIAS("hid:b0003g*v00000B05p00001807");
MODULE_ALIAS("hid:b0003g*v000004F2p00001125");
MODULE_ALIAS("hid:b0003g*v0000062Ap00005110");
MODULE_ALIAS("hid:b0003g*v00000C45p00005112");
MODULE_ALIAS("hid:b0005g*v00000B05p00008502");

MODULE_INFO(srcversion, "7538C513B8C6CCD1F005FE9");
