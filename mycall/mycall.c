#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/sched.h>
#include<linux/syscalls.h>
#include "mycall.h"
asmlinkage long sys_sayhello(void)
{
	printk("Hello world\n");
	return 0;
}
