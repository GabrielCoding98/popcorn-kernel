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
	{ 0x974143ad, "xt_unregister_matches" },
	{ 0xc4bdfbd7, "xt_register_matches" },
	{ 0x7c32d0f0, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x1f2eda46, "nf_defrag_ipv4_enable" },
	{ 0xf249287c, "nf_defrag_ipv6_enable" },
	{ 0xb85cd4c4, "nf_sk_lookup_slow_v4" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd047634d, "sock_gen_put" },
	{ 0x3f3b75ad, "nf_sk_lookup_slow_v6" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv4,nf_defrag_ipv6,nf_socket_ipv4,nf_socket_ipv6";


MODULE_INFO(srcversion, "E89AB5F87712249E5F2D373");