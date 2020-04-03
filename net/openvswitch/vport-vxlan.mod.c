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
	{ 0x5f55907f, "dev_queue_xmit" },
	{ 0xdf30b4ae, "ovs_netdev_tunnel_destroy" },
	{ 0x495fc36f, "ovs_vport_ops_unregister" },
	{ 0xb9d6770d, "__ovs_vport_ops_register" },
	{ 0x984093a6, "rtnl_delete_link" },
	{ 0x9369b93c, "ovs_vport_free" },
	{ 0x87a9cfd0, "ovs_netdev_link" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x8c43e202, "dev_change_flags" },
	{ 0x2c8df975, "vxlan_dev_create" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x1ea7bb0e, "ovs_vport_alloc" },
	{ 0xcd279169, "nla_find" },
	{ 0x5f754e5a, "memset" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch,vxlan";


MODULE_INFO(srcversion, "CC459019F841C6AF78A8291");
