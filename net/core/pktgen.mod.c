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
	{ 0xb7700415, "param_ops_int" },
	{ 0x759f7158, "single_release" },
	{ 0x8e3afba1, "seq_read" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5b301c3, "unregister_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xd10120b, "register_pernet_subsys" },
	{ 0x9fcc0a84, "dev_get_by_name" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xc6cbbc89, "capable" },
	{ 0x77c59098, "module_put" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xca0304ef, "try_module_get" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x3f753a7a, "hrtimer_init_sleeper" },
	{ 0x60cb02b0, "udp4_hwcsum" },
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x41ce0b4e, "skb_checksum" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe0a94f0d, "netif_receive_skb" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0x2124474, "ip_send_check" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x24868151, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x92601b1f, "refcount_sub_and_test_checked" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xe6c12171, "complete" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0xe69a1920, "proc_remove" },
	{ 0xb72c6d97, "__xfrm_state_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0xaa47d5fe, "proc_create_data" },
	{ 0x7bd1d00, "kthread_bind" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcee3b8ce, "proc_create" },
	{ 0x67cebeb, "proc_mkdir" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x2932d658, "xfrm_stateonly_find" },
	{ 0xd46b93ed, "xfrm_state_lookup_byspi" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x1000e51, "schedule" },
	{ 0xebd6836c, "remove_proc_entry" },
	{ 0x99b66e27, "__put_task_struct" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x84b183ae, "strncmp" },
	{ 0x97255bdf, "strlen" },
	{ 0x652032cb, "mac_pton" },
	{ 0xb81960ca, "snprintf" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xe914e41e, "strcpy" },
	{ 0x135b5680, "__put_page" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x91715312, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x491483ea, "seq_puts" },
	{ 0x226c9b6d, "single_open" },
	{ 0x4e70062, "PDE_DATA" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "17421AD9F3E4C764F85D296");
