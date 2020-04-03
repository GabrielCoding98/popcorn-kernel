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
	{ 0x315325f, "lib80211_unregister_crypto_ops" },
	{ 0x1d18a669, "lib80211_register_crypto_ops" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf31bdfbc, "crypto_alloc_skcipher" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xff71b834, "skb_trim" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x99bb8806, "memmove" },
	{ 0x122170da, "crc32_le" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lib80211";


MODULE_INFO(srcversion, "57908378F9CDB6F2E60AB7C");
