#ifndef __LINUX_CPROCINF_H
#define __LINUX_CPROCINF_H
#include <linux/linkage.h>
#include <linux/types.h>
#include <linux/sched.h>
#include <asm/current.h>
#include <asm/uaccess.h>

struct prcdata{
	long counter;
	long nice;
	long prio;
	long weight;
	pid_t pid;
	long uid;
	int nofprocess;
};
#endif
