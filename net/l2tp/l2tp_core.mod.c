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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc484571a, "register_pernet_device" },
	{ 0x82a5d3cd, "sockfd_lookup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd0f99b00, "udp6_set_csum" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x18011285, "sock_release" },
	{ 0xbcffa1a6, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x75e8be08, "sock_create_kern" },
	{ 0x91715312, "sprintf" },
	{ 0x537b96af, "inet6_csk_xmit" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8ecfc019, "udp_sock_create6" },
	{ 0x5518e867, "setup_udp_tunnel_sock" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0xe7c10ed2, "kernel_connect" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0xc2744d2, "unregister_pernet_device" },
	{ 0xe2d12f53, "__ip_queue_xmit" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x654e0977, "kernel_sock_shutdown" },
	{ 0xeadab5fe, "sk_free" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x36e00e20, "sk_dst_check" },
	{ 0x90745321, "fput" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc76404fa, "udp_set_csum" },
	{ 0x29a426c1, "kernel_bind" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0xa0af3abf, "udp_sock_create4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,ip6_udp_tunnel,udp_tunnel";


MODULE_INFO(srcversion, "0E9D9B850D1870684D5305C");
