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
	{ 0x87a64612, "bus_register" },
	{ 0xa60137b4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x454e5b22, "__pm_runtime_idle" },
	{ 0xa6265634, "driver_register" },
	{ 0x82030b4e, "__pm_runtime_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xcaf7b102, "__pm_runtime_resume" },
	{ 0xa8d3417e, "devres_alloc_node" },
	{ 0xf6f4af7e, "pm_runtime_no_callbacks" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb10dacfe, "of_device_uevent_modalias" },
	{ 0xbf56919d, "device_del" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x21af32f7, "ida_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8d93858d, "device_add" },
	{ 0xca7b87c7, "_dev_err" },
	{ 0x48bbceb4, "bus_unregister" },
	{ 0x5920f98d, "of_match_device" },
	{ 0x525f6fbe, "dev_pm_domain_detach" },
	{ 0x3e28d1d7, "pm_runtime_enable" },
	{ 0x5a163a5, "put_device" },
	{ 0x9a3f3efa, "of_get_property" },
	{ 0xf436e6e0, "devres_add" },
	{ 0xe90f976f, "kmem_cache_alloc_trace" },
	{ 0xbcfd1365, "of_get_next_available_child" },
	{ 0x4515b211, "device_for_each_child" },
	{ 0xcfc60905, "dev_pm_domain_attach" },
	{ 0xe1747edf, "of_device_modalias" },
	{ 0x37a0cba, "kfree" },
	{ 0x1017cd77, "device_initialize" },
	{ 0x16eee64a, "device_unregister" },
	{ 0xe6c12171, "complete" },
	{ 0x184c48a6, "dev_set_name" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x445c816c, "ida_destroy" },
	{ 0xeb00f3ca, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BA5A6CBA488737F58C0E128");
