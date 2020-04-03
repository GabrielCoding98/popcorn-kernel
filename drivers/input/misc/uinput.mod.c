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
	{ 0xd56ba424, "misc_deregister" },
	{ 0x8a0b551, "misc_register" },
	{ 0xd21575c5, "input_mt_init_slots" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x97255bdf, "strlen" },
	{ 0x19629e25, "input_ff_destroy" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x7ad52565, "input_register_device" },
	{ 0xd1f07697, "input_ff_create" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0xc1ea1c86, "input_event" },
	{ 0xd0411de1, "input_alloc_absinfo" },
	{ 0x6df65bc1, "input_allocate_device" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x51ef33b8, "kstrndup" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xff98f302, "input_ff_flush" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6b568ade, "nonseekable_open" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0xe6c12171, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x489d494f, "input_free_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9DAA85B956184AA3EFFB74E");
