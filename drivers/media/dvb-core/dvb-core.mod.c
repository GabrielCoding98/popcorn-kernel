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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x7fe8a44d, "cdev_del" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xef2acd4, "cdev_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x64ac2467, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd0d9eeb6, "down_interruptible" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xad2e5d45, "device_destroy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xf1c2ed95, "down_read" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0x61ac380c, "netif_rx" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7905d834, "default_llseek" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x24868151, "freezing_slow_path" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x2ac79575, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x80fd477, "register_netdev" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf0ef52e8, "down" },
	{ 0x988694e4, "noop_llseek" },
	{ 0x851dd2f, "device_create" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xeb9637f6, "i2c_unregister_device" },
	{ 0x25c777e3, "up_write" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x76e18a1a, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0x90d1cb32, "cdev_add" },
	{ 0x77c59098, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9f16dd18, "eth_header_parse" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x4f685e1, "alloc_netdev_mqs" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0x912342a9, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6d87b69, "crc32_be" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x581cde4e, "up" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0xd8a2e825, "__class_create" },
	{ 0x64f88cff, "i2c_new_device" },
	{ 0x2d96c4e3, "eth_header" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "373DE53BAAA8BAAC9A15314");
