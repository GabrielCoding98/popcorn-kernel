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
	{ 0xc82716c4, "i2c_del_driver" },
	{ 0x232fad72, "i2c_register_driver" },
	{ 0x9d669763, "memcpy" },
	{ 0xc7ae1587, "i2c_new_dummy" },
	{ 0x94a3c9e4, "__regmap_init_i2c" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf41872ce, "release_firmware" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xecb30410, "request_firmware" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xfc440a95, "regmap_bulk_write" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8733236, "intlog10" },
	{ 0x8759bc86, "regmap_bulk_read" },
	{ 0xe4bf54f1, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x23f2e361, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb9637f6, "i2c_unregister_device" },
	{ 0x98c70377, "regmap_exit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";

MODULE_ALIAS("i2c:mn88473");

MODULE_INFO(srcversion, "5610361B08F7D6CE27DFA31");
