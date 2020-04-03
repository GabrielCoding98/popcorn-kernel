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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x88a65233, "snd_pcm_period_elapsed" },
	{ 0xde6ef723, "usb_init_urb" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x83f647b4, "snd_rawmidi_set_ops" },
	{ 0x93511241, "snd_card_disconnect" },
	{ 0xc00918ec, "snd_rawmidi_new" },
	{ 0xaad6ca78, "input_set_abs_params" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x43745509, "param_ops_charp" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x1a83cf9e, "usb_string" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7009370e, "usb_deregister" },
	{ 0x2371eede, "snd_pcm_set_ops" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x65888127, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x5b0aeaf1, "snd_pcm_lib_ioctl" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x2ca2efa5, "snd_card_set_id" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x91c30868, "usb_urb_ep_type_check" },
	{ 0xcc8a4c98, "snd_card_new" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x72421f2d, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81fafab5, "usb_reset_device" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb54b04a8, "snd_ctl_new1" },
	{ 0x489d494f, "input_free_device" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0xfbe59965, "snd_card_free" },
	{ 0x4c1734be, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xce95ea6c, "snd_pcm_limit_hw_rates" },
	{ 0xb81960ca, "snprintf" },
	{ 0xcaa6c808, "snd_pcm_new" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb51b901, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x866dd647, "snd_ctl_add" },
	{ 0x8f445107, "snd_rawmidi_transmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x32319410, "snd_rawmidi_receive" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x6df65bc1, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-rawmidi,snd";

MODULE_ALIAS("usb:v17CCp1969d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1978d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1915d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0D8Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp2305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCpBAFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0808d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CF634B869625AAFD3282DA9");
