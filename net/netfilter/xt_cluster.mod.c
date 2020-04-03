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
	{ 0xe0478acc, "xt_unregister_match" },
	{ 0x23ed49dc, "xt_register_match" },
	{ 0x7c32d0f0, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd95e52f2, "nf_ct_netns_get" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2d179c51, "nf_ct_netns_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";


MODULE_INFO(srcversion, "C2CCE8C6B25AC1F207414F2");
