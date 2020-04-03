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
	{ 0x6cb4c526, "crypto_mod_put" },
	{ 0x379da440, "crypto_blkcipher_type" },
	{ 0xb2d0d46a, "crypto_alloc_instance" },
	{ 0xb7cd649d, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0xb4a304e8, "crypto_spawn_tfm" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x546ce572, "blkcipher_walk_done" },
	{ 0x3e399e54, "blkcipher_walk_virt" },
	{ 0x37a0cba, "kfree" },
	{ 0xec47e1dd, "crypto_drop_spawn" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "20E785C682308E3445278B8");
