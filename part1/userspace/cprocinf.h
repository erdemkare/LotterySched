#include <linux/unistd.h>
#include <linux/linkage.h>
#include <errno.h>
extern int errno;

_syscall1(int, cprocinf, struct prcdata *,data);
struct prcdata{
	long nice;
	long counter;
	long weight;
	long prio;
	pid_t pid;
	long uid;
	int nofprocess;
};
