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
	{ 0xfb8949de, "netdev_info" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x349cba85, "strchr" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4aeb3e54, "napi_disable" },
	{ 0x7c65012b, "napi_schedule_prep" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8a7d7e3c, "netif_carrier_on" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x3a2e1c5d, "gpio_to_desc" },
	{ 0xcae566cc, "netif_carrier_off" },
	{ 0x111b5a08, "devm_ioremap_resource" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe69bfc72, "__netdev_alloc_skb" },
	{ 0xd4e1b9fa, "netif_rx_ni" },
	{ 0x8a7f62f2, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x2ac79575, "free_netdev" },
	{ 0x80fd477, "register_netdev" },
	{ 0xe0a94f0d, "netif_receive_skb" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6af01fe2, "platform_get_resource" },
	{ 0x1c132024, "request_any_context_irq" },
	{ 0xeb1cf171, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x90f71f7b, "__napi_schedule" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20484055, "napi_complete_done" },
	{ 0xbfba76ab, "eth_type_trans" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa5d8c690, "eth_validate_addr" },
	{ 0xf8b6597a, "gpiod_to_irq" },
	{ 0x8c42b265, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x749431db, "platform_get_irq" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0xcf5c862d, "gpiod_get_raw_value" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1e6a94e, "skb_put" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x98fc2eaf, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0E8AFDCCC975F30AD5EF555");
