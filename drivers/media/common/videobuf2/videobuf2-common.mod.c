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
	{ 0xf246c744, "trace_handle_return" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa66f7710, "trace_event_buffer_reserve" },
	{ 0x880737be, "kthread_create_on_node" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe778d361, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x24868151, "freezing_slow_path" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdccedf20, "kthread_stop" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x942af5b4, "dma_buf_fd" },
	{ 0x6aafcf33, "dma_buf_put" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf3825143, "trace_event_reg" },
	{ 0x9cb30027, "dma_buf_get" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x30519bf3, "v4l_vb2q_enable_media_source" },
	{ 0xebb8de7, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdfc02c51, "trace_event_ignore_this_pid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xfca8c91e, "trace_event_buffer_commit" },
	{ 0x1c2a847c, "wake_up_process" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x4cefdb5b, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x72de6b24, "bpf_trace_run2" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x4d831bfa, "trace_event_raw_init" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x75614dbd, "trace_raw_output_prep" },
	{ 0x3c93ea25, "trace_seq_printf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "857419BF9EDB2B95F69A969");
