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
	{ 0xdd721c6e, "deregister_atm_ioctl" },
	{ 0xe08985ac, "register_atm_ioctl" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x58b16eab, "vcc_process_recv_queue" },
	{ 0xf7350193, "__module_get" },
	{ 0x8d4b8e6d, "ppp_register_channel" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0x71926264, "ppp_channel_index" },
	{ 0xd237aad5, "ppp_unit_number" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x5a7cc4b3, "skb_realloc_headroom" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x283fbf52, "ppp_output_wakeup" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x77c59098, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x1abe29c8, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x71c90087, "memcmp" },
	{ 0x4e3296a2, "ppp_input" },
	{ 0x55c68dd, "skb_pull" },
	{ 0x855fbafe, "ppp_input_error" },
	{ 0x3d2eb910, "kfree_skb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm,ppp_generic";


MODULE_INFO(srcversion, "4A3645028FCC1897B31D889");