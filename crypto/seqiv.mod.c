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
	{ 0xc7d0e155, "crypto_unregister_template" },
	{ 0x8862e68b, "crypto_register_template" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2302e1de, "aead_register_instance" },
	{ 0x25b2bb2a, "aead_exit_geniv" },
	{ 0xe5b62910, "aead_init_geniv" },
	{ 0x4b048933, "aead_geniv_free" },
	{ 0x575d1522, "aead_geniv_alloc" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8BA92FA19F140B0C3198607");
