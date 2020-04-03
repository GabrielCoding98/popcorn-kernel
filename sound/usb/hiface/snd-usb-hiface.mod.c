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
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x88a65233, "snd_pcm_period_elapsed" },
	{ 0xde6ef723, "usb_init_urb" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x93511241, "snd_card_disconnect" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x43745509, "param_ops_charp" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x9648e562, "snd_pcm_hw_constraint_list" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x2371eede, "snd_pcm_set_ops" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0xbee78263, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x65888127, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5b0aeaf1, "snd_pcm_lib_ioctl" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x91c30868, "usb_urb_ep_type_check" },
	{ 0xcc8a4c98, "snd_card_new" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x72421f2d, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0xfbe59965, "snd_card_free" },
	{ 0x4c1734be, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xcaa6c808, "snd_pcm_new" },
	{ 0xb51b901, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xd3c2ecf6, "usb_anchor_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";

MODULE_ALIAS("usb:v04B4p0384d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p930Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p9320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p9321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp932Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v245Fp931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v25C6p9002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D4CDD88969DA27CE8CF3DC1");
