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
	{ 0xf7f21a6e, "no_llseek" },
	{ 0xb96a1e27, "input_unregister_handler" },
	{ 0x9924746c, "input_register_handler" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x20c3ad2b, "input_open_device" },
	{ 0x6b568ade, "nonseekable_open" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0xa062e40f, "input_ff_upload" },
	{ 0x38a9c2c7, "input_ff_effect_from_user" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x361236f6, "input_grab_device" },
	{ 0x34a2f2a3, "bitmap_zalloc" },
	{ 0xa4319040, "input_ff_erase" },
	{ 0x80df7f97, "arm_clear_user" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x9d669763, "memcpy" },
	{ 0xc845b69, "bitmap_alloc" },
	{ 0x6d6fec1f, "ktime_mono_to_any" },
	{ 0x7c32d0f0, "printk" },
	{ 0x348b0823, "cdev_device_add" },
	{ 0xef2acd4, "cdev_init" },
	{ 0xfd7d03bc, "input_register_handle" },
	{ 0x1017cd77, "device_initialize" },
	{ 0x6d5240d1, "input_class" },
	{ 0x47d7efde, "get_device" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf7f16b3f, "input_get_new_minor" },
	{ 0x37a0cba, "kfree" },
	{ 0x49970de8, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x907f640b, "input_inject_event" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xd59af532, "input_set_keycode" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x27ce5989, "input_get_keycode" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x97255bdf, "strlen" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x60579ba6, "input_release_device" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x566a2d67, "fasync_helper" },
	{ 0x5a163a5, "put_device" },
	{ 0x172347b2, "input_unregister_handle" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x48102a43, "cdev_device_del" },
	{ 0xf8f58049, "input_close_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xab5942cb, "kill_fasync" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x3dc598f4, "input_flush_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "C150F168371B920FE538C6F");
