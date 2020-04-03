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
	{ 0xb7700415, "param_ops_int" },
	{ 0x7c41147c, "w1_unregister_family" },
	{ 0x5c345a68, "w1_register_family" },
	{ 0x92691ccb, "w1_reset_bus" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb81960ca, "snprintf" },
	{ 0x373db350, "kstrtoint" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x7c32d0f0, "printk" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x635c2f6a, "w1_read_block" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xba1bace6, "w1_next_pullup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x25b81aa3, "w1_read_8" },
	{ 0x8d512d93, "w1_write_8" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbc5d61ca, "w1_reset_select_slave" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "79184FECCFF9BC9BEAA6F7A");
