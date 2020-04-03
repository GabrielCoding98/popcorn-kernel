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
	{ 0x7cad6027, "xt_unregister_targets" },
	{ 0xcc2e04bd, "xt_register_targets" },
	{ 0x1f2eda46, "nf_defrag_ipv4_enable" },
	{ 0x7c32d0f0, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xf249287c, "nf_defrag_ipv6_enable" },
	{ 0x98b73625, "nf_tproxy_handle_time_wait4" },
	{ 0x6246e5fc, "nf_tproxy_laddr4" },
	{ 0x22050091, "nf_tproxy_get_sock_v4" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x723608dc, "nf_tproxy_handle_time_wait6" },
	{ 0xd047634d, "sock_gen_put" },
	{ 0xea848958, "sock_edemux" },
	{ 0xc9aedff4, "nf_tproxy_laddr6" },
	{ 0xe67d735c, "nf_tproxy_get_sock_v6" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0xdd220c50, "ipv6_find_hdr" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv4,nf_defrag_ipv6,nf_tproxy_ipv4,nf_tproxy_ipv6";


MODULE_INFO(srcversion, "047BDDFE99E2B841880728A");
