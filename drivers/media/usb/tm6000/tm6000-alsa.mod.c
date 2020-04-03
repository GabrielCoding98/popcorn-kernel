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
	{ 0x3e872658, "param_array_ops" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x5b0aeaf1, "snd_pcm_lib_ioctl" },
	{ 0xf6272104, "tm6000_unregister_extension" },
	{ 0xcb2a76a0, "tm6000_register_extension" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4c1734be, "snd_card_register" },
	{ 0x2371eede, "snd_pcm_set_ops" },
	{ 0xcaa6c808, "snd_pcm_new" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xfbf85741, "snd_component_add" },
	{ 0x91715312, "sprintf" },
	{ 0xcc8a4c98, "snd_card_new" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf835eb58, "snd_pcm_hw_constraint_integer" },
	{ 0x5f754e5a, "memset" },
	{ 0x2c6b9b88, "snd_pcm_hw_constraint_pow2" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x962498e4, "vmalloc_to_page" },
	{ 0x11428730, "tm6000_set_audio_bitrate" },
	{ 0xa01abcf9, "tm6000_set_reg_mask" },
	{ 0x37a0cba, "kfree" },
	{ 0xfbe59965, "snd_card_free" },
	{ 0x88a65233, "snd_pcm_period_elapsed" },
	{ 0x77e002a, "snd_pcm_stream_unlock" },
	{ 0x3060019d, "snd_pcm_stream_lock" },
	{ 0x9d669763, "memcpy" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,tm6000,snd";


MODULE_INFO(srcversion, "2B0B12EDF5C45E813D10084");
