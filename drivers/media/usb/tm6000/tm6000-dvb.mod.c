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
	{ 0xb7700415, "param_ops_int" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0xf6272104, "tm6000_unregister_extension" },
	{ 0xcb2a76a0, "tm6000_register_extension" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x402b8281, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xdff8e89d, "tm6000_tuner_callback" },
	{ 0xf505c45c, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x56eda186, "dvb_register_frontend" },
	{ 0x2309a6d6, "tm6000_xc5000_callback" },
	{ 0x7ced4282, "dvb_register_adapter" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6e63a909, "dvb_unregister_adapter" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xd3e56d1, "dvb_dmxdev_release" },
	{ 0xa359ecb9, "dvb_frontend_detach" },
	{ 0x727f0c6, "dvb_unregister_frontend" },
	{ 0x195ff614, "usb_unlink_urb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x89b611dd, "tm6000_debug" },
	{ 0xaa4f4cdd, "tm6000_init_digital_mode" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tm6000,dvb-core";


MODULE_INFO(srcversion, "28DC70E7F89F601153D2713");
