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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x72a32592, "usb_gstrings_attach" },
	{ 0x4c438863, "usb_free_all_descriptors" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x367f38d9, "usb_ep_queue" },
	{ 0xced8df12, "g_audio_cleanup" },
	{ 0xf346ce1d, "u_audio_start_capture" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x4dac9ca5, "usb_function_unregister" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x51d050a, "usb_put_function_instance" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe8d55f0f, "usb_ep_autoconfig" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x88c33302, "g_audio_setup" },
	{ 0x31b5ed77, "usb_function_register" },
	{ 0xd120a546, "u_audio_stop_playback" },
	{ 0xd29cd0de, "u_audio_stop_capture" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd36cec52, "u_audio_start_playback" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x5d7f4ae1, "usb_assign_descriptors" },
	{ 0xce548b86, "usb_interface_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,udc-core,u_audio";


MODULE_INFO(srcversion, "E214D01A4CE12D9C71D95D1");
