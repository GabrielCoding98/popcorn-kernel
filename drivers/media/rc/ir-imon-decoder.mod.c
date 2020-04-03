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
	{ 0x94030847, "ir_raw_handler_unregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0xbfa35911, "ir_raw_handler_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xa043bbbb, "ir_lirc_scancode_event" },
	{ 0xdf678f0c, "rc_keydown" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x489d494f, "input_free_device" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6df65bc1, "input_allocate_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "507BDDAEAE2980646093EF4");
