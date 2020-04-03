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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x88a65233, "snd_pcm_period_elapsed" },
	{ 0x812d3483, "dev_printk" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5d5ffe3e, "em28xx_register_extension" },
	{ 0x3060019d, "snd_pcm_stream_lock" },
	{ 0x91715312, "sprintf" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0xf835eb58, "snd_pcm_hw_constraint_integer" },
	{ 0x93511241, "snd_card_disconnect" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xcf7b570b, "em28xx_read_ac97" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xc143f16a, "em28xx_write_ac97" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2371eede, "snd_pcm_set_ops" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xe8253cbe, "em28xx_unregister_extension" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x5b0aeaf1, "snd_pcm_lib_ioctl" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xc0a54718, "snd_ctl_boolean_mono_info" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xcc8a4c98, "snd_card_new" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x77e002a, "snd_pcm_stream_unlock" },
	{ 0xb54b04a8, "snd_ctl_new1" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa3f21666, "snd_pcm_hw_constraint_minmax" },
	{ 0xfbe59965, "snd_card_free" },
	{ 0x4c1734be, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4a02305a, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xcaa6c808, "snd_pcm_new" },
	{ 0x962498e4, "vmalloc_to_page" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x866dd647, "snd_ctl_add" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x6899820d, "em28xx_audio_analog_set" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,snd-pcm,snd";


MODULE_INFO(srcversion, "9AC263912702EF478AB0231");
