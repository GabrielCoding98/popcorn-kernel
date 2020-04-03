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
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xf9a482f9, "msleep" },
	{ 0xba58209, "put_pid" },
	{ 0x7435b5d9, "dma_release_from_dev_coherent" },
	{ 0x64ac2467, "up_read" },
	{ 0x5e0a7caf, "snd_register_device" },
	{ 0xf3846517, "snd_device_register" },
	{ 0xc2451da0, "mem_map" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xea124bd1, "gcd" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xaf2b3a3c, "snd_card_file_remove" },
	{ 0x81609e79, "snd_device_free" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0x475d46e0, "pid_vnr" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x5135a303, "snd_power_wait" },
	{ 0x910fb3b8, "snd_device_initialize" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x47f39d5a, "snd_info_create_card_entry" },
	{ 0x8570f468, "pm_qos_add_request" },
	{ 0x4df391d4, "pm_qos_remove_request" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x724c3062, "of_gen_pool_get" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0x66decfd5, "ns_to_timespec" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x6b568ade, "nonseekable_open" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xc3d52144, "down_write_trylock" },
	{ 0xf7ec2e9e, "dma_alloc_from_dev_coherent" },
	{ 0x36d9918f, "snd_ctl_unregister_ioctl" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xb12a7ed3, "snd_device_new" },
	{ 0xc59a76f, "snd_timer_new" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x71c90087, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xe949e565, "snd_unregister_device" },
	{ 0x566a2d67, "fasync_helper" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x25c777e3, "up_write" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x90745321, "fput" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x77c59098, "module_put" },
	{ 0x630f2cb8, "_raw_read_lock_irqsave" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x22adf0bd, "snd_card_file_add" },
	{ 0x9ef3604a, "snd_ctl_register_ioctl" },
	{ 0x5a163a5, "put_device" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x639acf3b, "pm_qos_request_active" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xb54b04a8, "snd_ctl_new1" },
	{ 0x7ade9187, "gen_pool_dma_alloc" },
	{ 0xb40d7cf, "_raw_read_unlock_irqrestore" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xcb5e6a8d, "snd_ctl_remove" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0xadcf68e2, "__vmalloc" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x7dc644ce, "remap_pfn_range" },
	{ 0x9d669763, "memcpy" },
	{ 0x3c89e74d, "snd_info_free_entry" },
	{ 0x34f881ff, "snd_timer_interrupt" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xab5942cb, "kill_fasync" },
	{ 0x51cdec, "dma_common_mmap" },
	{ 0x43c38df6, "snd_ctl_get_preferred_subdevice" },
	{ 0x27cb80d3, "snd_timer_notify" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xb81960ca, "snprintf" },
	{ 0x962498e4, "vmalloc_to_page" },
	{ 0x866dd647, "snd_ctl_add" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x33ae03f0, "gen_pool_free" },
	{ 0x6ea8495c, "snd_info_create_module_entry" },
	{ 0x26da8576, "snd_info_register" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xb859f38b, "krealloc" },
	{ 0xb62f451c, "_raw_read_lock_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-timer";


MODULE_INFO(srcversion, "DD78A7E980E207C2B30891A");
