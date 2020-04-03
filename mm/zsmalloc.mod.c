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
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x1a675dfe, "__cpuhp_remove_state" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xc2451da0, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdf5a196, "kill_anon_super" },
	{ 0xc0bc6bf6, "dec_zone_page_state" },
	{ 0x36ee20ef, "simple_dname" },
	{ 0xbd2be887, "kern_unmount" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x73a87a0b, "__lock_page" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x55509270, "__alloc_pages_nodemask" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x1078485, "map_vm_area" },
	{ 0xea2d6b95, "__ClearPageMovable" },
	{ 0x30e45b6b, "free_vm_area" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9f1691c2, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xb6341525, "mount_pseudo_xattr" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0xc5e8eee0, "alloc_vm_area" },
	{ 0x690b800c, "inc_zone_page_state" },
	{ 0xbf1e932f, "__cpuhp_setup_state" },
	{ 0xe8f35534, "unlock_page" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x997c4347, "unmap_kernel_range" },
	{ 0xaae6676e, "kmem_cache_alloc" },
	{ 0x26c73e5f, "__free_pages" },
	{ 0x6d7c1cd0, "unregister_shrinker" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xaddc9a8a, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xc54c0b9c, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xbef0cb8b, "register_shrinker" },
	{ 0x48a3f377, "page_mapping" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4815dd2d, "kern_mount_data" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8c352076, "__SetPageMovable" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x32ac59ad, "alloc_anon_inode" },
	{ 0x135b5680, "__put_page" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "454DEF57BCB3DB53D25EC04");
