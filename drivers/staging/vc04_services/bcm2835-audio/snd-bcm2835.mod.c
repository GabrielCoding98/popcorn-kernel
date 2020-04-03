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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa738c28a, "module_layout" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xa7fc046a, "vchi_msg_dequeue" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xda468542, "vchi_bulk_queue_transmit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xbaf2d28a, "snd_pcm_hw_constraint_step" },
	{ 0x186eae51, "of_parse_phandle" },
	{ 0x88a65233, "snd_pcm_period_elapsed" },
	{ 0xf42fc621, "devres_find" },
	{ 0x347e59c9, "vchi_initialise" },
	{ 0x431f3c4b, "vchi_service_open" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x45a172d0, "vchi_queue_kernel_message" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3060019d, "snd_pcm_stream_lock" },
	{ 0xa8d3417e, "devres_alloc_node" },
	{ 0x3af31b31, "__platform_driver_register" },
	{ 0x4390690, "vchi_service_use" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x49a7510f, "vchi_disconnect" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x2371eede, "snd_pcm_set_ops" },
	{ 0xb45f9c3e, "vchi_connect" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x87558411, "snd_pcm_lib_free_pages" },
	{ 0x5b0aeaf1, "snd_pcm_lib_ioctl" },
	{ 0x588006d2, "rpi_firmware_property" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xc6e15466, "snd_pcm_lib_malloc_pages" },
	{ 0x4784c007, "vchi_service_close" },
	{ 0xcc8a4c98, "snd_card_new" },
	{ 0x7c35d0aa, "devm_add_action" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x77e002a, "snd_pcm_stream_unlock" },
	{ 0xb54b04a8, "snd_ctl_new1" },
	{ 0x6ae198f8, "vchi_service_release" },
	{ 0xf436e6e0, "devres_add" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xd4412dd3, "rpi_firmware_get" },
	{ 0x18bb8ba7, "vchi_get_peer_version" },
	{ 0x37a0cba, "kfree" },
	{ 0xa3f21666, "snd_pcm_hw_constraint_minmax" },
	{ 0xb59429ae, "snd_pcm_stop" },
	{ 0x8fb3cca9, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xfbe59965, "snd_card_free" },
	{ 0x4c1734be, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xcaa6c808, "snd_pcm_new" },
	{ 0x866dd647, "snd_ctl_add" },
	{ 0x9f2f2b7d, "platform_driver_unregister" },
	{ 0x96f49763, "of_property_read_variable_u32_array" },
	{ 0xa3a5078a, "of_node_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audio");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audioC*");

MODULE_INFO(srcversion, "7AA1377144CA37D54C9971C");
