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
	{ 0x9519ec22, "shash_free_instance" },
	{ 0xe855bd95, "shash_register_instance" },
	{ 0x6d16ca2, "crypto_init_shash_spawn" },
	{ 0x17873c78, "crypto_alloc_instance2" },
	{ 0x6cb4c526, "crypto_mod_put" },
	{ 0x44aaa8e0, "shash_no_setkey" },
	{ 0x90ad1403, "shash_attr_alg" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0x8dfd8bc0, "crypto_spawn_tfm2" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0x905d69c4, "crypto_shash_final" },
	{ 0xd4b923a2, "crypto_shash_finup" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x76ddb787, "crypto_shash_digest" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe19bd6c8, "crypto_shash_update" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FEC2397A47D235AB2E41293");
