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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x887ec63d, "usb_ep_disable" },
	{ 0x5a9fff9e, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x88a65233, "snd_pcm_period_elapsed" },
	{ 0x367f38d9, "usb_ep_queue" },
	{ 0x532ba17f, "_snd_pcm_stream_lock_irqsave" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3204e6a1, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0xf835eb58, "snd_pcm_hw_constraint_integer" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x2371eede, "snd_pcm_set_ops" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc407f354, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x87558411, "snd_pcm_lib_free_pages" },
	{ 0x5b0aeaf1, "snd_pcm_lib_ioctl" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xc6e15466, "snd_pcm_lib_malloc_pages" },
	{ 0xcc8a4c98, "snd_card_new" },
	{ 0x6468ba35, "usb_ep_dequeue" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8191d049, "config_ep_by_speed" },
	{ 0xcd2b3b73, "usb_ep_free_request" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8fb3cca9, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xfbe59965, "snd_card_free" },
	{ 0x4c1734be, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcaa6c808, "snd_pcm_new" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core,snd-pcm,snd,libcomposite";


MODULE_INFO(srcversion, "6511BF4B9548A6D9B9A55F6");
