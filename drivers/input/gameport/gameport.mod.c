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
	{ 0x87a64612, "bus_register" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xa6265634, "driver_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x18e6f7e2, "device_release_driver" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0xc98d9c82, "device_bind_driver" },
	{ 0xbf56919d, "device_del" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x38916bc8, "driver_unregister" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xbd0f6142, "device_attach" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8d93858d, "device_add" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x48bbceb4, "bus_unregister" },
	{ 0x77c59098, "module_put" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc2c5b2b6, "vsnprintf" },
	{ 0xf7350193, "__module_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x1017cd77, "device_initialize" },
	{ 0xc287d7d8, "driver_attach" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x9cdb18ae, "driver_find" },
	{ 0xca0304ef, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7B8FCA81E0866A5C748A41A");
