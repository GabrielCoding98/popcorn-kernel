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
	{ 0x3e872658, "param_array_ops" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x255d4f4f, "ip_vs_conn_in_get" },
	{ 0x22bff1ce, "skb_make_writable" },
	{ 0xc28fd0c3, "ip_vs_conn_new" },
	{ 0xb81960ca, "snprintf" },
	{ 0xb58c1cbb, "ip_vs_nfct_expect_related" },
	{ 0x9eeccd63, "__nf_nat_mangle_tcp_packet" },
	{ 0xf64c89bb, "ip_vs_conn_put" },
	{ 0xf12381b3, "ip_vs_tcp_conn_listen" },
	{ 0x97255bdf, "strlen" },
	{ 0xc6e0cd84, "ip_vs_conn_out_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0x52b2ab1b, "register_ip_vs_app_inc" },
	{ 0x4916f774, "register_ip_vs_app" },
	{ 0xaccd54b8, "unregister_ip_vs_app" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_vs,nf_nat";


MODULE_INFO(srcversion, "16FD0D3C94880D7D683F92C");
