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
	{ 0xd92f5849, "cx231xx_unregister_extension" },
	{ 0x6547c84f, "cx231xx_register_extension" },
	{ 0x7c32d0f0, "printk" },
	{ 0x402b8281, "__request_module" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x1e3a1833, "dvb_net_init" },
	{ 0xf505c45c, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x56eda186, "dvb_register_frontend" },
	{ 0x7ced4282, "dvb_register_adapter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9d669763, "memcpy" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0x8a86f83b, "dvb_module_probe" },
	{ 0xc1fc69ae, "cx231xx_demod_reset" },
	{ 0x599231db, "cx231xx_get_i2c_adap" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xa93f679a, "dvb_module_release" },
	{ 0x6e63a909, "dvb_unregister_adapter" },
	{ 0xa359ecb9, "dvb_frontend_detach" },
	{ 0x727f0c6, "dvb_unregister_frontend" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xd3e56d1, "dvb_dmxdev_release" },
	{ 0x16cd7e29, "dvb_net_release" },
	{ 0x4bcb922, "cx231xx_init_isoc" },
	{ 0x4cfb19e0, "cx231xx_init_bulk" },
	{ 0x5c5e42c0, "cx231xx_set_alt_setting" },
	{ 0x49c16fad, "cx231xx_uninit_isoc" },
	{ 0xdfead47b, "cx231xx_uninit_bulk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa31396ff, "cx231xx_set_mode" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx,dvb-core";


MODULE_INFO(srcversion, "34A9DA1F6B8D577F33C6AF2");
