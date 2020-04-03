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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xfc9fcf42, "skb_to_sgvec" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xfb66238c, "xfrm_unregister_type" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x57daa409, "ipv4_update_pmtu" },
	{ 0xafdca2c, "xfrm4_protocol_deregister" },
	{ 0xfffa3100, "sg_next" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xdd7659aa, "pskb_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3e9dfff1, "skb_page_frag_refill" },
	{ 0x51e875b0, "skb_cow_data" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0xfb7cf0fe, "xfrm_input_resume" },
	{ 0x5f754e5a, "memset" },
	{ 0x41ce0b4e, "skb_checksum" },
	{ 0x7c32d0f0, "printk" },
	{ 0x7caf2981, "xfrm_input" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xd3ebce7d, "crypto_aead_setkey" },
	{ 0x9a4b6579, "__secpath_destroy" },
	{ 0x9605af8, "xfrm_register_type" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x65f4ed06, "ipv4_redirect" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0x3577a556, "xfrm_output_resume" },
	{ 0x2ac743ad, "skb_pull_rcsum" },
	{ 0xb72c6d97, "__xfrm_state_destroy" },
	{ 0x1b94a137, "km_new_mapping" },
	{ 0x4596780b, "xfrm4_rcv" },
	{ 0x25dddfdb, "xfrm4_protocol_register" },
	{ 0xee2f3cb4, "crypto_aead_setauthsize" },
	{ 0x86416877, "crypto_alloc_aead" },
	{ 0xe7e8e834, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xbe1c979, "___pskb_trim" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0x135b5680, "__put_page" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "776F017A0DB2D1570B4F326");
