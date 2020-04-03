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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x4de17ab3, "usb_state_string" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0xe18b6e3d, "kobject_uevent" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa66f7710, "trace_event_buffer_reserve" },
	{ 0x91715312, "sprintf" },
	{ 0xaffad1c7, "bpf_trace_run3" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe778d361, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xbf56919d, "device_del" },
	{ 0x7c32d0f0, "printk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xf3825143, "trace_event_reg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8d93858d, "device_add" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0xebb8de7, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xdfc02c51, "trace_event_ignore_this_pid" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xe8ff1363, "sysfs_notify" },
	{ 0xfca8c91e, "trace_event_buffer_commit" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x4cefdb5b, "event_triggers_call" },
	{ 0x72de6b24, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x4d831bfa, "trace_event_raw_init" },
	{ 0x1017cd77, "device_initialize" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xdcd02f6d, "class_destroy" },
	{ 0x16eee64a, "device_unregister" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x75614dbd, "trace_raw_output_prep" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0xd8a2e825, "__class_create" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7F9C5FCF9D321A33CE4D605");
