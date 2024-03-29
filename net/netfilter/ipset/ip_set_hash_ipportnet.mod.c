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
	{ 0x4e4079a, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xfac31083, "ip_set_type_register" },
	{ 0xcfc68341, "synchronize_rcu_bh" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf26503c9, "ip_set_elem_len" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6344eaf6, "ip_set_alloc" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x6c5812dd, "ip_set_get_ip4_port" },
	{ 0x22d966c6, "ip_set_range_to_cidr" },
	{ 0x7924b6de, "ip_set_hostmask_map" },
	{ 0xa293f8a6, "ip_set_get_ipaddr4" },
	{ 0x1436331, "ip_set_get_ip6_port" },
	{ 0xe9573eae, "ip_set_get_extensions" },
	{ 0x9e98722b, "ip_set_get_ipaddr6" },
	{ 0xe3accab0, "ip_set_match_extensions" },
	{ 0x81fff2d1, "ip_set_netmask_map" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xb37a7877, "ip_set_put_extensions" },
	{ 0xff71b834, "skb_trim" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x397f6231, "ip_set_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe4626bc5, "ip_set_extensions" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set";


MODULE_INFO(srcversion, "E3CB3C8ECC832B7C05C98B6");
