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
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xff77fcf, "crypto_ahash_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0x9019800d, "crypto_req_done" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x84b183ae, "strncmp" },
	{ 0x783ee8ab, "crypto_grab_skcipher" },
	{ 0x6cb4c526, "crypto_mod_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe500406c, "crypto_init_ahash_spawn" },
	{ 0x68ba80f3, "crypto_find_alg" },
	{ 0x6a498936, "crypto_ahash_type" },
	{ 0x2302e1de, "aead_register_instance" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9acbc14, "crypto_grab_aead" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xfffa3100, "sg_next" },
	{ 0xaee6cc63, "crypto_ahash_finup" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0xf40b2297, "__crypto_memneq" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xc2451da0, "mem_map" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x37a0cba, "kfree" },
	{ 0xec47e1dd, "crypto_drop_spawn" },
	{ 0x4829b1e0, "crypto_get_default_null_skcipher" },
	{ 0x8dfd8bc0, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0xd3ebce7d, "crypto_aead_setkey" },
	{ 0xee2f3cb4, "crypto_aead_setauthsize" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3FA8CA4E517B4FA661639A7");
