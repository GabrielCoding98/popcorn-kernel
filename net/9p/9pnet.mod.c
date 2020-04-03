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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf5037a81, "kmem_cache_destroy" },
	{ 0x66d1ddc4, "kernel_write" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x491483ea, "seq_puts" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x18011285, "sock_release" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x44e9a829, "match_token" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x98cc48c1, "init_user_ns" },
	{ 0x85df9b6c, "strsep" },
	{ 0xa66f7710, "trace_event_buffer_reserve" },
	{ 0xeea0399, "strscpy" },
	{ 0xaffad1c7, "bpf_trace_run3" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf843245d, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x2220cb2e, "kernel_read" },
	{ 0xe778d361, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x515dce3e, "from_kuid" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xd04deb9c, "iov_iter_kvec" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf3825143, "trace_event_reg" },
	{ 0x8d4384ab, "from_kgid" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xbaadb534, "kmem_cache_create_usercopy" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x4e3567f7, "match_int" },
	{ 0x90745321, "fput" },
	{ 0xebb8de7, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x61275678, "idr_remove" },
	{ 0x77c59098, "module_put" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0xaa49bd7c, "idr_get_next" },
	{ 0x16589dfe, "make_kuid" },
	{ 0xdfc02c51, "trace_event_ignore_this_pid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xa7359096, "_copy_from_iter_full" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xfca8c91e, "trace_event_buffer_commit" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x86f87ab0, "sock_alloc_file" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x4cefdb5b, "event_triggers_call" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x72de6b24, "bpf_trace_run2" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe93f6042, "trace_print_symbols_seq" },
	{ 0x4d831bfa, "trace_event_raw_init" },
	{ 0x29a426c1, "kernel_bind" },
	{ 0x7a0511db, "fget" },
	{ 0xfe3dfdf2, "iov_iter_advance" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x75614dbd, "trace_raw_output_prep" },
	{ 0x9881f35f, "idr_alloc_u32" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xaf38e081, "idr_find" },
	{ 0x25133dc6, "bpf_trace_run4" },
	{ 0x1520ce45, "_copy_to_iter" },
	{ 0x135b5680, "__put_page" },
	{ 0xca0304ef, "try_module_get" },
	{ 0x42acecce, "__sock_create" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F509AB2CB8BF08BD2B535AC");
