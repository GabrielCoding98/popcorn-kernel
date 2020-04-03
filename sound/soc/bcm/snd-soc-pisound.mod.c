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
	{ 0xf4e5e0ab, "kobject_put" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x5aa6c2e9, "gpiod_direction_output" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe379d7db, "spi_setup" },
	{ 0x83f647b4, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc00918ec, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa0b6c3dd, "kobject_create_and_add" },
	{ 0x3799601a, "snd_pcm_hw_constraint_mask64" },
	{ 0x5f754e5a, "memset" },
	{ 0x9648e562, "snd_pcm_hw_constraint_list" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0xd5b12df4, "snd_rawmidi_transmit_peek" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x487e1db, "gpiod_direction_input" },
	{ 0x4b6708c4, "spi_bus_type" },
	{ 0xb760ed36, "snd_soc_unregister_card" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x87ba3ba0, "bus_find_device" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xd8340e2c, "spi_sync" },
	{ 0xc0d0da6d, "snd_soc_dai_set_bclk_ratio" },
	{ 0x6705ed98, "snd_rawmidi_transmit_ack" },
	{ 0x9c473b7e, "gpiod_unexport" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb54b04a8, "snd_ctl_new1" },
	{ 0xaa2e0e8e, "gpiod_get_value" },
	{ 0x30ca064, "kernel_kobj" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xa60de071, "gpiod_export" },
	{ 0xf8b6597a, "gpiod_to_irq" },
	{ 0xa3f21666, "snd_pcm_hw_constraint_minmax" },
	{ 0xa1409cf6, "gpiod_get_index" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x866dd647, "snd_ctl_add" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0xd1a1d33a, "gpiod_set_value" },
	{ 0xf2255e37, "snd_soc_register_card" },
	{ 0xa6ab47b4, "gpiod_put" },
	{ 0x32319410, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,snd-pcm,snd-soc-core,snd";

MODULE_ALIAS("of:N*T*Cblokaslabs,pisound");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisoundC*");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spi");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spiC*");

MODULE_INFO(srcversion, "444AA0BBD268D5F0A907C62");
