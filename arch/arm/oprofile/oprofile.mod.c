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
	{ 0x2d3385d3, "system_wq" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd20bf6ba, "dcookie_unregister" },
	{ 0x1a675dfe, "__cpuhp_remove_state" },
	{ 0x64ac2467, "up_read" },
	{ 0xa9e18049, "task_handoff_unregister" },
	{ 0xdd391eff, "profile_event_unregister" },
	{ 0xc385cb58, "perf_num_counters" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2f4113a2, "dcookie_register" },
	{ 0xf353a698, "register_module_notifier" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x4975cc2e, "perf_event_release_kernel" },
	{ 0x1f1e05af, "hrtimer_forward" },
	{ 0x6a5ecb18, "unregister_module_notifier" },
	{ 0xfc70c5d8, "ring_buffer_consume" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0xc65d3eed, "ring_buffer_entries_cpu" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0x6a007eea, "free_task" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x69408536, "generic_delete_inode" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4bf8b484, "dput" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9d09e8ae, "ring_buffer_event_data" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5824895d, "mount_single" },
	{ 0x3544bd6d, "d_add" },
	{ 0xa91f60ea, "mmput" },
	{ 0x999e8297, "vfree" },
	{ 0xbdb93cb5, "platform_device_register_full" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x6b568ade, "nonseekable_open" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xf4fc2d6c, "__ring_buffer_alloc" },
	{ 0x46066e5b, "perf_pmu_name" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x265529b8, "kill_litter_super" },
	{ 0x7905d834, "default_llseek" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xe9a0a1d, "get_task_mm" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x988694e4, "noop_llseek" },
	{ 0x838b13e7, "ring_buffer_free" },
	{ 0x793b43cb, "platform_device_unregister" },
	{ 0x2c63826b, "simple_open" },
	{ 0xbf1e932f, "__cpuhp_setup_state" },
	{ 0x25c777e3, "up_write" },
	{ 0x76e18a1a, "down_write" },
	{ 0x90745321, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb4eda0da, "ring_buffer_event_length" },
	{ 0xa64ae85f, "find_vma" },
	{ 0xc6cbbc89, "capable" },
	{ 0xafc5fb45, "simple_dir_operations" },
	{ 0x7729cbdd, "task_handoff_register" },
	{ 0xfd305341, "walk_stackframe" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xdfeb8cda, "get_mm_exe_file" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xc0a98385, "profile_pc" },
	{ 0x2c81ec75, "__irq_regs" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x6304ee38, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x37a0cba, "kfree" },
	{ 0x45f3747b, "current_time" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0x6643e5cb, "get_dcookie" },
	{ 0x207ed668, "d_make_root" },
	{ 0x7f31a1c1, "simple_statfs" },
	{ 0x3d1654c9, "d_alloc_name" },
	{ 0x49970de8, "finish_wait" },
	{ 0xa389a49a, "profile_event_register" },
	{ 0xd211717d, "unregister_filesystem" },
	{ 0x9e57c2d2, "perf_event_create_kernel_counter" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x96e47a4e, "new_inode" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x5541ea93, "on_each_cpu" },
	{ 0xb9576dcf, "simple_dir_inode_operations" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x1a551022, "ring_buffer_lock_reserve" },
	{ 0xa83f641e, "ring_buffer_unlock_commit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9678CC9BAD6467F5E367672");
