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
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd5147972, "dvb_usbv2_resume" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5f754e5a, "memset" },
	{ 0x41a9c232, "cypress_load_firmware" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x7009370e, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x1aa4a4b4, "dvb_usbv2_probe" },
	{ 0xdf678f0c, "rc_keydown" },
	{ 0x23d609d, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x38726094, "dvb_ca_en50221_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x8d09738f, "dvb_usbv2_disconnect" },
	{ 0x9a3dbb1, "dvb_usbv2_suspend" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xb62b6081, "dvb_ca_en50221_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb_usb_v2,cypress_firmware,dvb-core";

MODULE_ALIAS("usb:v13D3p0CCDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14F7p0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "75E54280DCA30C9C2E3E6B2");