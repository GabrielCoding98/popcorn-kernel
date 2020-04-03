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
	{ 0xd2dd3483, "unregister_tcf_proto_ops" },
	{ 0x1a62a72b, "register_tcf_proto_ops" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x1557c3c9, "tcf_exts_change" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x33b98664, "tcf_exts_validate" },
	{ 0x92cdbc06, "tcf_action_exec" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x5f754e5a, "memset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xbe0e3cba, "tcf_queue_work" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x62bd84dd, "__put_net" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x42ccb86c, "tcf_exts_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2986f9de, "tcf_exts_dump_stats" },
	{ 0xe935f8fb, "tcf_exts_dump" },
	{ 0xff71b834, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6DDB6BC4FDDEEC3B2AF2FAA");
