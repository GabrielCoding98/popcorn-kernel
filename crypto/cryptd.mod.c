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
	{ 0xf31bdfbc, "crypto_alloc_skcipher" },
	{ 0xb7cd649d, "crypto_attr_alg2" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7ae25526, "ahash_register_instance" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x90ad1403, "shash_attr_alg" },
	{ 0x6cb4c526, "crypto_mod_put" },
	{ 0x394c3644, "crypto_ablkcipher_type" },
	{ 0xa5d0566b, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x397a2e5f, "shash_ahash_digest" },
	{ 0x783ee8ab, "crypto_grab_skcipher" },
	{ 0xc7d0e155, "crypto_unregister_template" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x7ff04a17, "crypto_init_spawn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x905d69c4, "crypto_shash_final" },
	{ 0xb4a304e8, "crypto_spawn_tfm" },
	{ 0x7a42ec30, "shash_ahash_finup" },
	{ 0x43c38be, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9acbc14, "crypto_grab_aead" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x8862e68b, "crypto_register_template" },
	{ 0xd3931ee3, "crypto_register_instance" },
	{ 0x5ef27435, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0xec47e1dd, "crypto_drop_spawn" },
	{ 0xd3ebce7d, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x6d34c351, "crypto_enqueue_request" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0x2ce98559, "kcrypto_wq" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xee2f3cb4, "crypto_aead_setauthsize" },
	{ 0x86416877, "crypto_alloc_aead" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8dfd8bc0, "crypto_spawn_tfm2" },
	{ 0x6d16ca2, "crypto_init_shash_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb7e4f0d5, "shash_ahash_update" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x44aaa8e0, "shash_no_setkey" },
	{ 0x195a6340, "crypto_alloc_base" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x2302e1de, "aead_register_instance" },
	{ 0x147b53ce, "crypto_alloc_ahash" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7ACCB55CC985ADFBC3105E4");
