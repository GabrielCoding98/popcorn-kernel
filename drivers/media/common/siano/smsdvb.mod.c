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
	{ 0x91147799, "smscore_register_hotplug" },
	{ 0x5399ca60, "smscore_get_board_id" },
	{ 0x53870a42, "sms_board_setup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x6e63a909, "dvb_unregister_adapter" },
	{ 0xc9b4fae, "sms_board_event" },
	{ 0x56eda186, "dvb_register_frontend" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0x727f0c6, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x63222b29, "smsclient_sendrequest" },
	{ 0xd3e56d1, "dvb_dmxdev_release" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4db695de, "sms_board_lna_control" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x44823e43, "smscore_putbuffer" },
	{ 0xa38472b7, "smscore_unregister_hotplug" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x7ced4282, "dvb_register_adapter" },
	{ 0x3f9455ad, "sms_board_power" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x7aec5ea4, "sms_board_led_feedback" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x4cb89b06, "smscore_register_client" },
	{ 0xdd0fb9bf, "smscore_get_device_mode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xf505c45c, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv,dvb-core";


MODULE_INFO(srcversion, "64977CC3D5A70597553F3C8");
