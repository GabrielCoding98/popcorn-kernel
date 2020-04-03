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
	{ 0xae9849dd, "__request_region" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x81609e79, "snd_device_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x83f647b4, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc00918ec, "snd_rawmidi_new" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd5b12df4, "snd_rawmidi_transmit_peek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x30e11a72, "release_and_free_resource" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x6705ed98, "snd_rawmidi_transmit_ack" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x32319410, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-rawmidi";


MODULE_INFO(srcversion, "E77B5F07F4BB832B63F3C5E");
