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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa8d3417e, "devres_alloc_node" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x9648e562, "snd_pcm_hw_constraint_list" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x71c90087, "memcmp" },
	{ 0x36cacb6, "snd_ctl_notify" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x122170da, "crc32_le" },
	{ 0x25c777e3, "up_write" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x76e18a1a, "down_write" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb54b04a8, "snd_ctl_new1" },
	{ 0xf436e6e0, "devres_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xecb30410, "request_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x866dd647, "snd_ctl_add" },
	{ 0xf41872ce, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";


MODULE_INFO(srcversion, "E6EE1B109C94535E00C0CAC");
