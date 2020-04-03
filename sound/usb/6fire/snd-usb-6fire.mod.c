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
	{ 0xf9a482f9, "msleep" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x88a65233, "snd_pcm_period_elapsed" },
	{ 0xde6ef723, "usb_init_urb" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xdd09c692, "snd_pcm_stop_xrun" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x83f647b4, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0x93511241, "snd_card_disconnect" },
	{ 0xc00918ec, "snd_rawmidi_new" },
	{ 0x2ab6af34, "_snd_ctl_add_slave" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2371eede, "snd_pcm_set_ops" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0x294ab020, "snd_ctl_boolean_stereo_info" },
	{ 0xbee78263, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x65888127, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xf63991ee, "usb_poison_urb" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5b0aeaf1, "snd_pcm_lib_ioctl" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xc0a54718, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcc8a4c98, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xad303d3a, "snd_ctl_make_virtual_master" },
	{ 0x72421f2d, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0xb54b04a8, "snd_ctl_new1" },
	{ 0x32d4ccec, "usb_interrupt_msg" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xecb30410, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0xfbe59965, "snd_card_free" },
	{ 0x4c1734be, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcaa6c808, "snd_pcm_new" },
	{ 0xb51b901, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x866dd647, "snd_ctl_add" },
	{ 0x8f445107, "snd_rawmidi_transmit" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x32319410, "snd_rawmidi_receive" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-rawmidi,snd";

MODULE_ALIAS("usb:v0CCDp0080d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D517ECD0AE7AF246EE9F2BC");
