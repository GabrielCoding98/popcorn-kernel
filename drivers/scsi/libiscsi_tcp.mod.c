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
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x16b733d9, "skb_seq_read" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xc2451da0, "mem_map" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x812d3483, "dev_printk" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xfffa3100, "sg_next" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e61b24f, "iscsi_requeue_task" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x57830689, "iscsi_itt_to_ctask" },
	{ 0xab70dc7e, "crypto_ahash_final" },
	{ 0x249077b9, "crypto_ahash_digest" },
	{ 0x5f754e5a, "memset" },
	{ 0x3008fbf1, "skb_abort_seq_read" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x3905de4a, "skb_prepare_seq_read" },
	{ 0x71c90087, "memcmp" },
	{ 0xef066162, "iscsi_conn_teardown" },
	{ 0x437e242b, "iscsi_put_task" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x22eea1c9, "iscsi_prep_data_out_pdu" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xc4f62a07, "iscsi_complete_pdu" },
	{ 0xd25507d6, "iscsi_conn_failure" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x9d669763, "memcpy" },
	{ 0x4bd1b247, "__iscsi_complete_pdu" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0x516dd295, "iscsi_verify_itt" },
	{ 0x4dbc6e44, "iscsi_conn_setup" },
	{ 0xe2592ebb, "iscsi_update_cmdsn" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi";


MODULE_INFO(srcversion, "FDAF2FB5CF0FA9AE900B10C");
