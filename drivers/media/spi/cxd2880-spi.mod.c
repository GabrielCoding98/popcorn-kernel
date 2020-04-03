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
	{ 0x3e872658, "param_array_ops" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9d669763, "memcpy" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x12a38747, "usleep_range" },
	{ 0x212ec5a7, "spi_write_then_read" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x402b8281, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e63a909, "dvb_unregister_adapter" },
	{ 0xa359ecb9, "dvb_frontend_detach" },
	{ 0x727f0c6, "dvb_unregister_frontend" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xd3e56d1, "dvb_dmxdev_release" },
	{ 0xf505c45c, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x56eda186, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x7ced4282, "dvb_register_adapter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";

MODULE_ALIAS("spi:cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880C*");

MODULE_INFO(srcversion, "394CCD3C4333DADC03685C4");
