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
	{ 0x6cffa824, "crypto_unregister_rngs" },
	{ 0x115fe89f, "crypto_register_rngs" },
	{ 0x6fd2c5dd, "crypto_alloc_rng" },
	{ 0xe4f417bb, "add_random_ready_callback" },
	{ 0x97255bdf, "strlen" },
	{ 0x71c90087, "memcmp" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe375b1ec, "del_random_ready_callback" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7c32d0f0, "printk" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2241ec, "crypto_alloc_shash" },
	{ 0x9d669763, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5ef27435, "crypto_shash_setkey" },
	{ 0x905d69c4, "crypto_shash_final" },
	{ 0xe19bd6c8, "crypto_shash_update" },
	{ 0x7a4497db, "kzfree" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "ECC5EC3B52C2350342D6EFA");
