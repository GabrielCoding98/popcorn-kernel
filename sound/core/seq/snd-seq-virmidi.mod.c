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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x64ac2467, "up_read" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x81609e79, "snd_device_free" },
	{ 0x17fcf66b, "snd_midi_event_encode_byte" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xad5c5a0, "snd_seq_create_kernel_client" },
	{ 0x83f647b4, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x1724fb56, "snd_midi_event_decode" },
	{ 0xc00918ec, "snd_rawmidi_new" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xdaf3383a, "snd_midi_event_new" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x25c777e3, "up_write" },
	{ 0x76e18a1a, "down_write" },
	{ 0x77c59098, "module_put" },
	{ 0x4d5f7f98, "snd_midi_event_free" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x8f445107, "snd_rawmidi_transmit" },
	{ 0x31379608, "__init_rwsem" },
	{ 0x32319410, "snd_rawmidi_receive" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq,snd,snd-seq-midi-event,snd-rawmidi";


MODULE_INFO(srcversion, "58DAC4A7CB7BFCCC095DAD7");
