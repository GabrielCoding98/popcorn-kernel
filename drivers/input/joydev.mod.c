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
	{ 0x20c3ad2b, "input_open_device" },
	{ 0x6b568ade, "nonseekable_open" },
	{ 0x71c90087, "memcmp" },
	{ 0xfe03da93, "input_match_device_id" },
	{ 0x7c32d0f0, "printk" },
	{ 0x348b0823, "cdev_device_add" },
	{ 0xef2acd4, "cdev_init" },
	{ 0xfd7d03bc, "input_register_handle" },
	{ 0x1017cd77, "device_initialize" },
	{ 0x6d5240d1, "input_class" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x47d7efde, "get_device" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf7f16b3f, "input_get_new_minor" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x97255bdf, "strlen" },
	{ 0x9d669763, "memcpy" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x37a0cba, "kfree" },
	{ 0x566a2d67, "fasync_helper" },
	{ 0x5a163a5, "put_device" },
	{ 0x172347b2, "input_unregister_handle" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x48102a43, "cdev_device_del" },
	{ 0xf8f58049, "input_close_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xab5942cb, "kill_fasync" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "DE1472AA05D7205AC865D44");
