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
	{ 0x7aadaf17, "class_find_device" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf17364aa, "get_net_ns_by_fd" },
	{ 0xc484571a, "register_pernet_device" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x4ea0e40e, "genl_register_family" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x2f913dd, "genl_unregister_family" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x361a4d51, "dev_change_net_namespace" },
	{ 0x9fcc0a84, "dev_get_by_name" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa66f7710, "trace_event_buffer_reserve" },
	{ 0x5c46e282, "get_net_ns_by_pid" },
	{ 0x91715312, "sprintf" },
	{ 0x62bd84dd, "__put_net" },
	{ 0xaffad1c7, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xff71b834, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x315de896, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe778d361, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x56db610a, "dev_set_mac_address" },
	{ 0xbf56919d, "device_del" },
	{ 0xccadb3a7, "bpf_trace_run1" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc2744d2, "unregister_pernet_device" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x9cc3f147, "class_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf3825143, "trace_event_reg" },
	{ 0x68183b3b, "nla_put" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0x9996dce7, "dev_get_by_index" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x9e6e325e, "netlink_unicast" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8d93858d, "device_add" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xec2404f1, "init_net" },
	{ 0x58c9433d, "__class_register" },
	{ 0xebb8de7, "perf_trace_run_bpf_submit" },
	{ 0x8b3ad3f2, "__dev_get_by_index" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x17cd167e, "class_for_each_device" },
	{ 0x2827ae6f, "__alloc_skb" },
	{ 0xc4a0ebb4, "netlink_broadcast" },
	{ 0xdfc02c51, "trace_event_ignore_this_pid" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x1000e51, "schedule" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x6b3e867a, "genl_family_attrbuf" },
	{ 0xfca8c91e, "trace_event_buffer_commit" },
	{ 0x9fd6d25f, "device_rename" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x47d7efde, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x4cefdb5b, "event_triggers_call" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x72de6b24, "bpf_trace_run2" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x4d831bfa, "trace_event_raw_init" },
	{ 0x19f6c533, "genlmsg_put" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x1017cd77, "device_initialize" },
	{ 0x49970de8, "finish_wait" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x75614dbd, "trace_raw_output_prep" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x975f5aac, "trace_output_call" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x25133dc6, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F98161623C4F2AB427A0B8A");
