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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0xdb8d0549, "__spi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xd8a2e825, "__class_create" },
	{ 0x8bdc371, "__register_chrdev" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x5a163a5, "put_device" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xe379d7db, "spi_setup" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x47d7efde, "get_device" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x851dd2f, "device_create" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x6b568ade, "nonseekable_open" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe29c556b, "spi_slave_abort" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xad2e5d45, "device_destroy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crohm,dh2228fv");
MODULE_ALIAS("of:N*T*Crohm,dh2228fvC*");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488C*");
MODULE_ALIAS("of:N*T*Cge,achc");
MODULE_ALIAS("of:N*T*Cge,achcC*");
MODULE_ALIAS("of:N*T*Csemtech,sx1301");
MODULE_ALIAS("of:N*T*Csemtech,sx1301C*");

MODULE_INFO(srcversion, "7432265EF0341ADDC2E9F6E");
