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
	{ 0x988694e4, "noop_llseek" },
	{ 0xad7e99fb, "serio_unregister_driver" },
	{ 0x32c99e30, "__serio_register_driver" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x8a0b551, "misc_register" },
	{ 0x126fae9d, "mutex_lock_killable" },
	{ 0xe9f20b8, "serio_open" },
	{ 0x47d7efde, "get_device" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x566a2d67, "fasync_helper" },
	{ 0x4bf8caac, "serio_close" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xab5942cb, "kill_fasync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd56ba424, "misc_deregister" },
	{ 0x5a163a5, "put_device" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x37a0cba, "kfree" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=serio";

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");

MODULE_INFO(srcversion, "02A37488E1A00B37159CBA8");
