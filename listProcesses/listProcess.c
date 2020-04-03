#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/string.h>
#include<linux/sched.h>
#include<linux/syscalls.h>
#include "listProcess.h"

/* Syscall 401 */


asmlinkage long sys_listProcessInfo(char *userReq) {
   int ret;
   int policyType = 0;
   char *userSpaceVar = "Hello There";
   ret = put_user(userSpaceVar, userReq);
   
   printk("HELLO %s HELLO %d\n", userReq, ret);
   
   // if (strcmp(userSpaceVar, "TS") == 0)
   //    return policyType = 0; 
   // else if (strcmp(userSpaceVar, "FF") == 0)
   //    return policyType = 1; 
   // else if (strcmp(userSpaceVar, "RR") == 0)
   //    return policyType = 2; 
   // else if (strcmp(userSpaceVar, "B") == 0)
   //    return policyType = 3; 
	
//   if (policyType == 0)
//   	return 0;

   return ret;
}
