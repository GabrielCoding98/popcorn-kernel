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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x8819dbc4, "fb_sys_read" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0xe46e0085, "fb_sys_write" },
	{ 0xec126abe, "sys_fillrect" },
	{ 0xecff2dc3, "sys_copyarea" },
	{ 0xcde24ddb, "sys_imageblit" },
	{ 0x7c32d0f0, "printk" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x7d620d00, "register_framebuffer" },
	{ 0xcd020b29, "fb_deferred_io_init" },
	{ 0x9d669763, "memcpy" },
	{ 0x6723b181, "framebuffer_alloc" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xe9fa5e96, "rpisense_get_dev" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xc253474, "rpisense_block_write" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x999e8297, "vfree" },
	{ 0xc2f1e17, "framebuffer_release" },
	{ 0x58b04d8b, "fb_deferred_io_cleanup" },
	{ 0x500d5ec6, "unregister_framebuffer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,sysfillrect,syscopyarea,sysimgblt,rpisense-core";

MODULE_ALIAS("platform:rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fbC*");

MODULE_INFO(srcversion, "FC554BC5F2903919A643A1E");
