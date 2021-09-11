#include <linux/unistd.h>
#include <linux/linkage.h>
#include <errno.h>
extern int errno;

_syscall1(int, cprocinf, int, arg1);