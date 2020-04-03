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
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9d669763, "memcpy" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x345202ad, "gpiod_get_raw_value_cansleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x1c132024, "request_any_context_irq" },
	{ 0x187823d9, "of_get_named_gpio_flags" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xf36b611a, "of_find_property" },
	{ 0x9a3f3efa, "of_get_property" },
	{ 0x3adff219, "of_count_phandle_with_args" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x489d494f, "input_free_device" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x9be9faa1, "input_set_capability" },
	{ 0xd0d5d4b5, "matrix_keypad_build_keymap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6df65bc1, "input_allocate_device" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7bbc7fcb, "gpiod_direction_output_raw" },
	{ 0x487e1db, "gpiod_direction_input" },
	{ 0x2a78bf4a, "gpiod_set_raw_value_cansleep" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf8b6597a, "gpiod_to_irq" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=matrix-keymap";

MODULE_ALIAS("of:N*T*Cgpio-matrix-keypad");
MODULE_ALIAS("of:N*T*Cgpio-matrix-keypadC*");

MODULE_INFO(srcversion, "DD9CE2D3AB1816B2A6662F0");
