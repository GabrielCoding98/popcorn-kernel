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
	{ 0x5963c0bc, "em28xx_read_reg" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x54f6445d, "rc_unregister_device" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x2893b3bf, "em28xx_write_regs" },
	{ 0x812d3483, "dev_printk" },
	{ 0x84239571, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x5d5ffe3e, "em28xx_register_extension" },
	{ 0xc96d3cbd, "rc_allocate_device" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xa53ea742, "em28xx_find_led" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x235c2927, "rc_free_device" },
	{ 0x40ee7305, "em28xx_toggle_reg_bits" },
	{ 0xdf678f0c, "rc_keydown" },
	{ 0xe8253cbe, "em28xx_unregister_extension" },
	{ 0xfb0ec729, "rc_register_device" },
	{ 0x3f2c2b8c, "em28xx_write_reg_bits" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x489d494f, "input_free_device" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0x8ea0e54c, "i2c_probe_func_quick_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x5765f0d0, "em28xx_write_reg" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6df65bc1, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "00591157FC994EC12459052");
