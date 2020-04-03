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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x56efbc6b, "snd_midi_event_reset_decode" },
	{ 0x1cff6e14, "snd_midi_event_reset_encode" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x17fcf66b, "snd_midi_event_encode_byte" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x11e83870, "snd_rawmidi_kernel_release" },
	{ 0xad5c5a0, "snd_seq_create_kernel_client" },
	{ 0x24411937, "snd_rawmidi_kernel_open" },
	{ 0x91715312, "sprintf" },
	{ 0x1724fb56, "snd_midi_event_decode" },
	{ 0x98fd1b41, "snd_rawmidi_input_params" },
	{ 0xf5cce36b, "__snd_seq_driver_register" },
	{ 0xdaf3383a, "snd_midi_event_new" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa7a95e0d, "snd_rawmidi_drain_output" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4d5f7f98, "snd_midi_event_free" },
	{ 0x15c975fe, "snd_rawmidi_kernel_write" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20cca680, "snd_rawmidi_kernel_read" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0xad6a5329, "snd_rawmidi_output_params" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0xbc031200, "snd_seq_driver_unregister" },
	{ 0x19bb5f43, "snd_rawmidi_info_select" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd-rawmidi,snd-seq-device";


MODULE_INFO(srcversion, "5391A2A91B671AE77A0D65B");
