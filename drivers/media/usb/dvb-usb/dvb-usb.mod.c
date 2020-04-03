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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x54f6445d, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x6e63a909, "dvb_unregister_adapter" },
	{ 0x56eda186, "dvb_register_frontend" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc648952f, "usb_kill_urb" },
	{ 0x727f0c6, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0xc96d3cbd, "rc_allocate_device" },
	{ 0x16cd7e29, "dvb_net_release" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0xa359ecb9, "dvb_frontend_detach" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x21381c3b, "dvb_dmx_swfilter_raw" },
	{ 0x5f754e5a, "memset" },
	{ 0x235c2927, "rc_free_device" },
	{ 0xd3e56d1, "dvb_dmxdev_release" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x1e3a1833, "dvb_net_init" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xfb0ec729, "rc_register_device" },
	{ 0xc0ed0fc, "usb_free_coherent" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xedda2b2f, "dvb_dmx_swfilter_204" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0xe46b7308, "usb_submit_urb" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xf3f1124e, "usb_bulk_msg" },
	{ 0x2bbe5326, "usb_clear_halt" },
	{ 0x489d494f, "input_free_device" },
	{ 0x7ced4282, "dvb_register_adapter" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0xecb30410, "request_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x21cca90f, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x34dd2836, "usb_free_urb" },
	{ 0xf41872ce, "release_firmware" },
	{ 0x9a04e6f8, "usb_alloc_urb" },
	{ 0xf505c45c, "dvb_dmxdev_init" },
	{ 0x6df65bc1, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";


MODULE_INFO(srcversion, "9C351C2677333574A3411A6");
