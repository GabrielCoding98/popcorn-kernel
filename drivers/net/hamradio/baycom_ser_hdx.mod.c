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
	{ 0x3e872658, "param_array_ops" },
	{ 0x43745509, "param_ops_charp" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x5e13faf2, "hdlcdrv_unregister" },
	{ 0xadda8ecc, "hdlcdrv_register" },
	{ 0x91715312, "sprintf" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x5f754e5a, "memset" },
	{ 0xae9849dd, "__request_region" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x349cba85, "strchr" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x79a03f72, "hdlcdrv_receiver" },
	{ 0xad3a0e10, "hdlcdrv_transmitter" },
	{ 0x2bf48ead, "hdlcdrv_arbitrate" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4384eb42, "__release_region" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hdlcdrv";


MODULE_INFO(srcversion, "AFF94DA1E402E4D80DFB4CE");
