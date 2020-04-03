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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa738c28a, "module_layout" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x3d8fe535, "spk_var_store" },
	{ 0xc063c9b2, "spk_var_show" },
	{ 0xa23649ff, "synth_remove" },
	{ 0x60ffaa03, "synth_add" },
	{ 0x8a0b551, "misc_register" },
	{ 0x84dad068, "synth_buffer_getc" },
	{ 0x91715312, "sprintf" },
	{ 0x76d40046, "synth_buffer_skip_nonlatin1" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x49970de8, "finish_wait" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x973d0f9e, "kstrtoul_from_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x41a160e5, "synth_buffer_empty" },
	{ 0xcd9e17b8, "synth_current" },
	{ 0x2e7e21d7, "speakup_event" },
	{ 0xbbd15a51, "speakup_start_ttys" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd56ba424, "misc_deregister" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x8181ceec, "speakup_info" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=speakup";


MODULE_INFO(srcversion, "A4670EF95DB1CFF025475E6");
