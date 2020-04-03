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
	{ 0xcdfecd55, "nf_ct_unexpect_related" },
	{ 0x43f31dcf, "nf_conntrack_helper_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x46252709, "nf_ct_gre_keymap_add" },
	{ 0x89a5102f, "nf_conntrack_helper_unregister" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x62b93280, "nf_ct_expect_init" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7fad8e5a, "nf_ct_delete" },
	{ 0x6aa1162e, "nf_ct_expect_find_get" },
	{ 0x39ef16b, "nf_ct_expect_put" },
	{ 0x7d697e6a, "nf_ct_expect_alloc" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xd1a5e5cc, "nf_ct_expect_related_report" },
	{ 0xcd8ddff0, "nf_ct_gre_keymap_destroy" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0xd5467c0e, "nf_conntrack_find_get" },
	{ 0xae12eeca, "nf_ct_invert_tuplepr" },
	{ 0xaae3421a, "nf_ct_ext_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_proto_gre";


MODULE_INFO(srcversion, "CCDA6442C3641813F0F7210");
