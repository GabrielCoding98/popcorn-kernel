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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x7cad6027, "xt_unregister_targets" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xcc2e04bd, "xt_register_targets" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x59a4604a, "nf_dup_ipv4" },
	{ 0xfc07c74, "static_key_slow_inc" },
	{ 0x9fcc0a84, "dev_get_by_name" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x71c90087, "memcmp" },
	{ 0x182e681b, "static_key_slow_dec" },
	{ 0xd2b30083, "xt_tee_enabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x9645d937, "nf_dup_ipv6" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_dup_ipv4,nf_dup_ipv6";


MODULE_INFO(srcversion, "E6A0B643B133AA60B4EA4D7");