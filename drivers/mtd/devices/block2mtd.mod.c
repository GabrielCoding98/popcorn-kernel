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
	{ 0x7f021e8a, "mtd_device_unregister" },
	{ 0x7ca148a0, "mtd_device_parse_register" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x1bfa805d, "blkdev_get_by_path" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x97255bdf, "strlen" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9f984513, "strrchr" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x881838c, "blkdev_put" },
	{ 0xaf676c57, "invalidate_mapping_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbb302154, "balance_dirty_pages_ratelimited" },
	{ 0xe8f35534, "unlock_page" },
	{ 0x2dd45999, "set_page_dirty" },
	{ 0x73a87a0b, "__lock_page" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x71c90087, "memcmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc0355ba5, "sync_blockdev" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x135b5680, "__put_page" },
	{ 0x9d669763, "memcpy" },
	{ 0x4a45c97c, "read_cache_page" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xc2451da0, "mem_map" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd";


MODULE_INFO(srcversion, "F0B51A54D1D7B693CFC72AB");
