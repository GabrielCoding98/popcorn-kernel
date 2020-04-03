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
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xdf7ea257, "__i2c_transfer" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8733236, "intlog10" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x9d669763, "memcpy" },
	{ 0xab4ccadf, "i2c_mux_add_adapter" },
	{ 0x4248e6e, "i2c_mux_alloc" },
	{ 0xb06d6694, "__regmap_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x8759bc86, "regmap_bulk_read" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfc440a95, "regmap_bulk_write" },
	{ 0x2efd7cc0, "regmap_update_bits_base" },
	{ 0x37a0cba, "kfree" },
	{ 0x98c70377, "regmap_exit" },
	{ 0xbaf269a6, "i2c_mux_del_adapters" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,i2c-mux";

MODULE_ALIAS("i2c:rtl2830");

MODULE_INFO(srcversion, "FED6B35DDB7077EE4FBAEB0");
