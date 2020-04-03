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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x124e1e49, "irq_of_parse_and_map" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2d20de17, "mmc_vddrange_to_ocrmask" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x187823d9, "of_get_named_gpio_flags" },
	{ 0x9a3f3efa, "of_get_property" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F48ED28B20835BFE3AA8164");
