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
	{ 0x160fdddd, "xfrm6_rcv" },
	{ 0xd85ba9f2, "xfrm6_find_1stfragopt" },
	{ 0xa44033a7, "xfrm6_protocol_deregister" },
	{ 0xfb66238c, "xfrm_unregister_type" },
	{ 0xd8e6854c, "xfrm6_protocol_register" },
	{ 0x9605af8, "xfrm_register_type" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x249077b9, "crypto_ahash_digest" },
	{ 0xc2451da0, "mem_map" },
	{ 0xa4e8528a, "skb_to_sgvec_nomark" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x51e875b0, "skb_cow_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x99bb8806, "memmove" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xff77fcf, "crypto_ahash_setkey" },
	{ 0x147b53ce, "crypto_alloc_ahash" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0xfb7cf0fe, "xfrm_input_resume" },
	{ 0xf40b2297, "__crypto_memneq" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3577a556, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xfef4b741, "ip6_redirect" },
	{ 0xb72c6d97, "__xfrm_state_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x7e3cdb4f, "ip6_update_pmtu" },
	{ 0x16589dfe, "make_kuid" },
	{ 0xe7e8e834, "xfrm_state_lookup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "C8EA3DA49797EE1D4AA7349");
