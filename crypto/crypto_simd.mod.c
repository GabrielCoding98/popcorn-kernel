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
	{ 0xf31bdfbc, "crypto_alloc_skcipher" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3e356091, "cryptd_free_skcipher" },
	{ 0x95b7b9af, "crypto_unregister_skciphers" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7e06aa24, "cryptd_skcipher_queued" },
	{ 0xb70f037c, "crypto_register_skciphers" },
	{ 0x3bce201c, "crypto_unregister_skcipher" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x263966e0, "crypto_register_skcipher" },
	{ 0x1a542e5, "cryptd_alloc_skcipher" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5d05a395, "cryptd_skcipher_child" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cryptd";


MODULE_INFO(srcversion, "C8B1459EECA9242318FCE76");
