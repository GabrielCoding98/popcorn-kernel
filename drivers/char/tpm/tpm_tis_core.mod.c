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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xecc3926b, "tpm2_probe" },
	{ 0x2f83d481, "tpm_getcap" },
	{ 0x24868151, "freezing_slow_path" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd4c33f3d, "tpmm_chip_alloc" },
	{ 0x168fd8f8, "tpm_get_timeouts" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5c466bbc, "tpm_chip_register" },
	{ 0x4e3704ba, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2dc9c197, "devm_free_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x66808884, "tpm_calc_ordinal_duration" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x4959c55c, "tpm2_get_tpm_pt" },
	{ 0xedc03953, "iounmap" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xebea799c, "tpm2_calc_ordinal_duration" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xce1cc28f, "devm_request_threaded_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm";


MODULE_INFO(srcversion, "3713DF1FDF692BAE809F83E");
