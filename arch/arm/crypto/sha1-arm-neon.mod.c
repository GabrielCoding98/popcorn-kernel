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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x176518be, "sha1_update_arm" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x8678b499, "sha1_finup_arm" },
	{ 0x5f754e5a, "memset" },
	{ 0xf9e3aaab, "crypto_unregister_shash" },
	{ 0x9b81b2b, "crypto_register_shash" },
	{ 0x3d3c540f, "elf_hwcap" },
	{ 0x9d669763, "memcpy" },
	{ 0x8fd180e7, "kernel_neon_begin" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sha1-arm";


MODULE_INFO(srcversion, "F2A9D44D0392581DC98314C");