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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xba58209, "put_pid" },
	{ 0x5e0a7caf, "snd_register_device" },
	{ 0xf3846517, "snd_device_register" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xaf2b3a3c, "snd_card_file_remove" },
	{ 0x475d46e0, "pid_vnr" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x910fb3b8, "snd_device_initialize" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0x47f39d5a, "snd_info_create_card_entry" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x6b568ade, "nonseekable_open" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x36d9918f, "snd_ctl_unregister_ioctl" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xb12a7ed3, "snd_device_new" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe949e565, "snd_unregister_device" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0x77c59098, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x22adf0bd, "snd_card_file_add" },
	{ 0x9ef3604a, "snd_ctl_register_ioctl" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3c89e74d, "snd_info_free_entry" },
	{ 0x49970de8, "finish_wait" },
	{ 0x43c38df6, "snd_ctl_get_preferred_subdevice" },
	{ 0xc312a3e7, "snd_seq_device_new" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x26da8576, "snd_info_register" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-seq-device";


MODULE_INFO(srcversion, "F65C6BCF8F0689AD2E7D74E");
