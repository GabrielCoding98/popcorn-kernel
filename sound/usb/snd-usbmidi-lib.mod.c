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
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x83f647b4, "snd_rawmidi_set_ops" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc00918ec, "snd_rawmidi_new" },
	{ 0xf1c2ed95, "down_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0x36cacb6, "snd_ctl_notify" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd5b12df4, "snd_rawmidi_transmit_peek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x25c777e3, "up_write" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x76e18a1a, "down_write" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x91c30868, "usb_urb_ep_type_check" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x6705ed98, "snd_rawmidi_transmit_ack" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xb54b04a8, "snd_ctl_new1" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xca3d8b21, "usb_autopm_get_interface_no_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x866dd647, "snd_ctl_add" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x8f445107, "snd_rawmidi_transmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x974fdd09, "snd_rawmidi_transmit_empty" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x31379608, "__init_rwsem" },
	{ 0x32319410, "snd_rawmidi_receive" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,snd";


MODULE_INFO(srcversion, "233534F581B4235EDDB7EE4");
