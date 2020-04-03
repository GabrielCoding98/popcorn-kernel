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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xb7700415, "param_ops_int" },
	{ 0xc0fc8bfd, "iscsi_session_recovery_timedout" },
	{ 0x8caa6324, "iscsi_tcp_cleanup_task" },
	{ 0xac928a46, "iscsi_tcp_task_xmit" },
	{ 0x9bf2206f, "iscsi_tcp_task_init" },
	{ 0x72c0fa38, "iscsi_conn_send_pdu" },
	{ 0xe0bf6a0c, "iscsi_host_set_param" },
	{ 0x78d4e24e, "iscsi_session_get_param" },
	{ 0x2d9cf16b, "iscsi_conn_start" },
	{ 0x3330d9fc, "iscsi_eh_cmd_timed_out" },
	{ 0x1275fcee, "scsi_change_queue_depth" },
	{ 0xcc68a37b, "iscsi_target_alloc" },
	{ 0x5528cdff, "iscsi_eh_recover_target" },
	{ 0x5b1d9249, "iscsi_eh_device_reset" },
	{ 0xc84558c1, "iscsi_eh_abort" },
	{ 0x32328edf, "iscsi_queuecommand" },
	{ 0x4a11ef09, "iscsi_unregister_transport" },
	{ 0xbea781af, "iscsi_register_transport" },
	{ 0x763158e5, "blk_queue_flag_set" },
	{ 0x244ab8be, "blk_queue_dma_alignment" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa59e6174, "iscsi_tcp_r2tpool_alloc" },
	{ 0x5c38e2f4, "iscsi_session_setup" },
	{ 0x75c3e8a4, "iscsi_host_add" },
	{ 0x67be4d3, "iscsi_host_alloc" },
	{ 0xba606319, "iscsi_host_free" },
	{ 0x95d9f485, "iscsi_host_remove" },
	{ 0x8d7ea6dd, "iscsi_session_teardown" },
	{ 0x3bb754c6, "iscsi_tcp_r2tpool_free" },
	{ 0x9a4b0ec4, "scsi_is_host_device" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x147b53ce, "crypto_alloc_ahash" },
	{ 0xfd8705c, "iscsi_tcp_conn_setup" },
	{ 0x796a881d, "iscsi_tcp_recv_skb" },
	{ 0x47975446, "tcp_read_sock" },
	{ 0xf7285dd2, "iscsi_conn_queue_work" },
	{ 0xa3f163b9, "iscsi_tcp_hdr_recv_prep" },
	{ 0xbca56747, "sk_set_memalloc" },
	{ 0x166973be, "iscsi_conn_bind" },
	{ 0x82a5d3cd, "sockfd_lookup" },
	{ 0x4d259df7, "iscsi_conn_stop" },
	{ 0x5e6d6ad1, "iscsi_suspend_tx" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x31bd033c, "iscsi_tcp_conn_teardown" },
	{ 0x7fc61d57, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0xeadab5fe, "sk_free" },
	{ 0x90745321, "fput" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x9f1ead19, "sock_no_sendpage" },
	{ 0xcfea779b, "iscsi_tcp_set_max_r2t" },
	{ 0x34e4e1c3, "iscsi_set_param" },
	{ 0xab58754a, "kernel_getpeername" },
	{ 0x6f18510e, "iscsi_conn_get_param" },
	{ 0x2574bc6d, "iscsi_host_get_param" },
	{ 0xbf8c9136, "iscsi_conn_get_addr_param" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x9b55165b, "kernel_getsockname" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xcc987b5c, "iscsi_tcp_conn_get_stats" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x265075c5, "iscsi_tcp_segment_unmap" },
	{ 0xd29b0c43, "kernel_sendmsg" },
	{ 0x3c3336f3, "iscsi_tcp_segment_done" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd25507d6, "iscsi_conn_failure" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x30532fab, "iscsi_segment_seek_sg" },
	{ 0x4d5b0433, "iscsi_segment_init_linear" },
	{ 0x3ef9a9e0, "iscsi_tcp_dgst_header" },
	{ 0x5f754e5a, "memset" },
	{ 0x812d3483, "dev_printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp";


MODULE_INFO(srcversion, "CE40DE132E56527BD7CB030");
