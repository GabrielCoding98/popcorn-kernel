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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x402b8281, "__request_module" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xba58209, "put_pid" },
	{ 0x64ac2467, "up_read" },
	{ 0x226c9b6d, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xae8b6918, "proc_symlink" },
	{ 0x97255bdf, "strlen" },
	{ 0x352c05d9, "release_resource" },
	{ 0xb7a2271e, "sound_class" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0x475d46e0, "pid_vnr" },
	{ 0x759f7158, "single_release" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xf7f21a6e, "no_llseek" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xd7c5d7c0, "seq_printf" },
	{ 0xbd4a6a92, "kobject_set_name" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x8bdc371, "__register_chrdev" },
	{ 0x53fcdd1b, "proc_set_size" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x8e3afba1, "seq_read" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x6b568ade, "nonseekable_open" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf1c2ed95, "down_read" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0xe69a1920, "proc_remove" },
	{ 0xc1ea1c86, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4e70062, "PDE_DATA" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x740d3e2e, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x67cebeb, "proc_mkdir" },
	{ 0xbf56919d, "device_del" },
	{ 0x11089ac7, "_ctype" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x7c1372e8, "panic" },
	{ 0x566a2d67, "fasync_helper" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9be9faa1, "input_set_capability" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x988694e4, "noop_llseek" },
	{ 0x9221fcd2, "init_uts_ns" },
	{ 0x8d93858d, "device_add" },
	{ 0x25c777e3, "up_write" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x76e18a1a, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x61651be, "strcat" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0x77c59098, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x5a163a5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ad52565, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x489d494f, "input_free_device" },
	{ 0x1152edb0, "dev_driver_string" },
	{ 0xe0a6a8db, "single_open_size" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x47d7efde, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xaa47d5fe, "proc_create_data" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x6b248f3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0fbda78, "input_unregister_device" },
	{ 0xa1d131ed, "vmemdup_user" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x1017cd77, "device_initialize" },
	{ 0xc652d5ce, "proc_mkdir_mode" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xab5942cb, "kill_fasync" },
	{ 0x49970de8, "finish_wait" },
	{ 0x216d759a, "mmiocpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x31379608, "__init_rwsem" },
	{ 0xca0304ef, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6df65bc1, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7B0CE77444485DF3C854AD5");
