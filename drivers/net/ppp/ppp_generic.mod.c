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
	{ 0x85bf72bd, "register_netdevice" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x1d85ba13, "skb_queue_head" },
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xc484571a, "register_pernet_device" },
	{ 0x64ac2467, "up_read" },
	{ 0xf1f56347, "bpf_prog_create" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0xad2e5d45, "device_destroy" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xf102033e, "slhc_remember" },
	{ 0x8bdc371, "__register_chrdev" },
	{ 0x1b7c0537, "bpf_prog_destroy" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x62bd84dd, "__put_net" },
	{ 0x99f0359e, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xff71b834, "skb_trim" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x89f25045, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0xe31e36c2, "skb_copy_datagram_iter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc2744d2, "unregister_pernet_device" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd10199ea, "netdev_printk" },
	{ 0x988694e4, "noop_llseek" },
	{ 0x851dd2f, "device_create" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x25c777e3, "up_write" },
	{ 0x76e18a1a, "down_write" },
	{ 0x90745321, "fput" },
	{ 0x456e3acc, "rtnl_link_unregister" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x61275678, "idr_remove" },
	{ 0x77c59098, "module_put" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xaa49bd7c, "idr_get_next" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x440200b7, "pskb_expand_head" },
	{ 0xc30abd6, "netdev_err" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2ac743ad, "skb_pull_rcsum" },
	{ 0x9265c8b, "unregister_netdevice_queue" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xbe2b2c10, "iov_iter_init" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7a0511db, "fget" },
	{ 0xd8d59a8a, "rtnl_link_register" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x84014ab0, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xaf38e081, "idr_find" },
	{ 0xf92e4913, "skb_copy_bits" },
	{ 0xd8a2e825, "__class_create" },
	{ 0x6405dcd3, "slhc_toss" },
	{ 0x31379608, "__init_rwsem" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xca0304ef, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=slhc";


MODULE_INFO(srcversion, "5581FA83D37F49F1F3955EB");
