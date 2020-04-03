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
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x5e0a7caf, "snd_register_device" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x910fb3b8, "snd_device_initialize" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x6b568ade, "nonseekable_open" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xb12a7ed3, "snd_device_new" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xe949e565, "snd_unregister_device" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x566a2d67, "fasync_helper" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x77c59098, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x47d7efde, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c89e74d, "snd_info_free_entry" },
	{ 0xab5942cb, "kill_fasync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x6ea8495c, "snd_info_create_module_entry" },
	{ 0x26da8576, "snd_info_register" },
	{ 0xca0304ef, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "1879ADF57C9DCB79D962541");
