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
	{ 0x689f370d, "frame_vector_to_pages" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x52e96379, "vb2_destroy_framevec" },
	{ 0x7f2b6b80, "remap_vmalloc_range" },
	{ 0xd484febe, "arm_dma_ops" },
	{ 0x712ee63f, "set_page_dirty_lock" },
	{ 0xfffa3100, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xab31d65a, "vb2_create_framevec" },
	{ 0xf6c052dc, "dma_buf_vunmap" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe97c4103, "ioremap" },
	{ 0x57518a51, "vm_map_ram" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x1700a495, "sg_alloc_table" },
	{ 0x3a07733, "dma_buf_export" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfcdc14d6, "frame_vector_to_pfns" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x21594e10, "vb2_common_vm_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xba5f3cda, "sg_free_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x962498e4, "vmalloc_to_page" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x3b07763a, "dma_buf_vmap" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-memops";


MODULE_INFO(srcversion, "5577882BE86939F3FCBB611");