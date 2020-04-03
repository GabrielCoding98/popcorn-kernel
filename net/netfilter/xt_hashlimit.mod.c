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
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0xf499fdb2, "rcu_barrier_bh" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0x974143ad, "xt_unregister_matches" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0xc4bdfbd7, "xt_register_matches" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x67cebeb, "proc_mkdir" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0xe302fa6b, "ipv6_skip_exthdr" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x71c90087, "memcmp" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0x7c32d0f0, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9499d6aa, "proc_create_seq_private" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x4e70062, "PDE_DATA" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x7e927f92, "call_rcu_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "2096026134EBD1958640E58");
