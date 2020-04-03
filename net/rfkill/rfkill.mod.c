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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x967e89bb, "led_trigger_event" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0xe18b6e3d, "kobject_uevent" },
	{ 0x172347b2, "input_unregister_handle" },
	{ 0xecfae8b1, "led_trigger_register" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9924746c, "input_register_handler" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x6b568ade, "nonseekable_open" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8a0b551, "misc_register" },
	{ 0xb96a1e27, "input_unregister_handler" },
	{ 0xbf56919d, "device_del" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xf8f58049, "input_close_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x522bb8d8, "led_trigger_unregister" },
	{ 0x9cc3f147, "class_unregister" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x20c3ad2b, "input_open_device" },
	{ 0x8d93858d, "device_add" },
	{ 0x58c9433d, "__class_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5a163a5, "put_device" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xfd7d03bc, "input_register_handle" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x1017cd77, "device_initialize" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xd56ba424, "misc_deregister" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1FEE94EC19110469DF2B374");
