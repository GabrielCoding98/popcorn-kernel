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
	{ 0x7009370e, "usb_deregister" },
	{ 0x5f60761a, "usb_register_driver" },
	{ 0xbdb42f86, "v4l2_device_put" },
	{ 0x5382f61d, "snd_tea575x_exit" },
	{ 0xee2afff0, "v4l2_device_disconnect" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xf999f91b, "led_classdev_unregister" },
	{ 0xed211cd0, "snd_tea575x_init" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x7005a755, "v4l2_device_register" },
	{ 0xbcd63380, "of_led_classdev_register" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9d669763, "memcpy" },
	{ 0x87076fee, "v4l2_device_set_name" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0x32d4ccec, "usb_interrupt_msg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x913052e9, "v4l2_device_unregister" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8d51fb2, "snd_tea575x_set_freq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,tea575x";

MODULE_ALIAS("usb:v077Dp627Ad0001dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "82A439569AAE486DD834107");
