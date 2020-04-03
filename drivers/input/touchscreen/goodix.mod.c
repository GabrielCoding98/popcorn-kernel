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
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x344f4c34, "input_mt_sync_frame" },
	{ 0xb8ff090f, "touchscreen_report_pos" },
	{ 0x625b3305, "input_mt_report_slot_state" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x754f348a, "complete_all" },
	{ 0xf41872ce, "release_firmware" },
	{ 0xd2bacca5, "request_firmware_nowait" },
	{ 0xf52dcedb, "devm_kasprintf" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x487e1db, "gpiod_direction_input" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5aa6c2e9, "gpiod_direction_output" },
	{ 0x9b63ccf3, "devm_gpiod_get_optional" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xd21575c5, "input_mt_init_slots" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xbf5719ef, "touchscreen_parse_properties" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0x9be9faa1, "input_set_capability" },
	{ 0xe7f8a6ba, "devm_input_allocate_device" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xd0411de1, "input_alloc_absinfo" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x84239571, "i2c_transfer" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgoodix,gt1151");
MODULE_ALIAS("of:N*T*Cgoodix,gt1151C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt911");
MODULE_ALIAS("of:N*T*Cgoodix,gt911C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt912");
MODULE_ALIAS("of:N*T*Cgoodix,gt912C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt927");
MODULE_ALIAS("of:N*T*Cgoodix,gt927C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt928");
MODULE_ALIAS("of:N*T*Cgoodix,gt928C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt967");
MODULE_ALIAS("of:N*T*Cgoodix,gt967C*");
MODULE_ALIAS("i2c:GDIX1001:00");

MODULE_INFO(srcversion, "343E8D4F2007C13ED26031F");
