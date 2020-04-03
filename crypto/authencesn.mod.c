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
	{ 0x37a0cba, "kfree" },
	{ 0xec47e1dd, "crypto_drop_spawn" },
	{ 0x6cb4c526, "crypto_mod_put" },
	{ 0x2302e1de, "aead_register_instance" },
	{ 0xb81960ca, "snprintf" },
	{ 0x783ee8ab, "crypto_grab_skcipher" },
	{ 0xe500406c, "crypto_init_ahash_spawn" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x37a2955b, "ahash_attr_alg" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x4829b1e0, "crypto_get_default_null_skcipher" },
	{ 0x8dfd8bc0, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0xff77fcf, "crypto_ahash_setkey" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x249077b9, "crypto_ahash_digest" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xf40b2297, "__crypto_memneq" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=authenc";


MODULE_INFO(srcversion, "D07CD9DF3C425C6D400AF99");
