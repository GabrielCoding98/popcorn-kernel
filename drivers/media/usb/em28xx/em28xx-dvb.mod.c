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
	{ 0xe8253cbe, "em28xx_unregister_extension" },
	{ 0x5d5ffe3e, "em28xx_register_extension" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x1e3a1833, "dvb_net_init" },
	{ 0xf505c45c, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x56eda186, "dvb_register_frontend" },
	{ 0x7ced4282, "dvb_register_adapter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0x8a86f83b, "dvb_module_probe" },
	{ 0x6c6d5d3b, "em28xx_alloc_urbs" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x7c32d0f0, "printk" },
	{ 0x402b8281, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x123d0d91, "em28xx_setup_xc3028" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x37a0cba, "kfree" },
	{ 0xa93f679a, "dvb_module_release" },
	{ 0x6e63a909, "dvb_unregister_adapter" },
	{ 0xa359ecb9, "dvb_frontend_detach" },
	{ 0x727f0c6, "dvb_unregister_frontend" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xd3e56d1, "dvb_dmxdev_release" },
	{ 0x16cd7e29, "dvb_net_release" },
	{ 0x31acdf23, "em28xx_uninit_usb_xfer" },
	{ 0x9a2d6de1, "dvb_frontend_suspend" },
	{ 0xa11abe59, "dvb_frontend_resume" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xb6412d2c, "usb_set_interface" },
	{ 0x4d13cd8c, "em28xx_init_usb_xfer" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xca3634d, "em28xx_stop_urbs" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3f2c2b8c, "em28xx_write_reg_bits" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9d669763, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc7762005, "i2c_transfer_buffer_flags" },
	{ 0x5765f0d0, "em28xx_write_reg" },
	{ 0x89ef0d37, "em28xx_gpio_set" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf0ef52e8, "down" },
	{ 0x581cde4e, "up" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfe990052, "gpio_free" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x5644c828, "em28xx_set_mode" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x812d3483, "dev_printk" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,dvb-core";


MODULE_INFO(srcversion, "439E6B96ACA0A62F28A16A4");
