#include <linux/cprocinf.h>
#include <linux/sched.h>
#include <linux/kernel.h>
#include <asm/current.h>
#include <asm/uaccess.h>
#include <asm/atomic.h>

int lotterysched=0;

asmlinkage int sys_cprocinf(int arg1){
	lotterysched=arg1;
	return arg1;
}