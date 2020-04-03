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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2c23dd4a, "s5h1420_get_tuner_i2c_adapter" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x6e63a909, "dvb_unregister_adapter" },
	{ 0x1e1d78ea, "cx24113_agc_callback" },
	{ 0x56eda186, "dvb_register_frontend" },
	{ 0xfd7d0630, "cx24123_get_tuner_i2c_adapter" },
	{ 0x727f0c6, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x16cd7e29, "dvb_net_release" },
	{ 0xfefa79ff, "i2c_add_adapter" },
	{ 0xa359ecb9, "dvb_frontend_detach" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0xd3e56d1, "dvb_dmxdev_release" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x1e3a1833, "dvb_net_init" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x3d39806a, "i2c_del_adapter" },
	{ 0xdafc31c5, "dvb_dmx_swfilter_packets" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ced4282, "dvb_register_adapter" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xecb30410, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf505c45c, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=s5h1420,dvb-core,cx24113,cx24123";


MODULE_INFO(srcversion, "3ACF2A94C90163D5B9EA880");