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
	{ 0x226c9b6d, "single_open" },
	{ 0x3f5118ae, "debugfs_create_u8" },
	{ 0x78c75a2c, "mt76_rx_aggr_stop" },
	{ 0x4feb3248, "__mt76_poll" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x759f7158, "single_release" },
	{ 0x491483ea, "seq_puts" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xc1c55cf8, "mt76_rx_aggr_start" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xab2623fe, "mt76_txq_init" },
	{ 0xa176f7d9, "debugfs_create_file" },
	{ 0x8e3afba1, "seq_read" },
	{ 0x6f4158e1, "ieee80211_tx_status" },
	{ 0x5f754e5a, "memset" },
	{ 0xe1b501a, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa81e146a, "mt76_eeprom_override" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ef02d63, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x55c68dd, "skb_pull" },
	{ 0xf0cc9e3d, "debugfs_create_bool" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x3a437b27, "mt76_eeprom_init" },
	{ 0x54da7516, "mt76_rx" },
	{ 0x78c85e38, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xdaf574d2, "skb_queue_tail" },
	{ 0xd092b4c1, "mt76_wcid_key_setup" },
	{ 0x666ab8d0, "mt76_wcid_alloc" },
	{ 0x8c1170eb, "mt76_tx" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x9b884ed0, "debugfs_create_devm_seqfile" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x796c9f11, "mt76_register_debugfs" },
	{ 0xf660a8c3, "ieee80211_send_bar" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x16317e74, "ieee80211_get_hdrlen_from_skb" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x9d669763, "memcpy" },
	{ 0xbe1c979, "___pskb_trim" },
	{ 0x1c39cadd, "ieee80211_tx_status_ext" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xc6eff30d, "consume_skb" },
	{ 0x13f44354, "devm_kmalloc" },
	{ 0x6a3a60ac, "mt76_txq_remove" },
	{ 0x17047d20, "ieee80211_start_tx_ba_cb_irqsafe" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mt76,mac80211,cfg80211";


MODULE_INFO(srcversion, "F983F2018A984A436F8D36D");
