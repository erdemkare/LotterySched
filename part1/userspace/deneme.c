#include <stdio.h>
#include <stdlib.h>
#include <linux/cprocinf.h>

main(){
	struct prcdata data;
	cprocinf(&data);
	printf("Counter: %li\n", data.counter);
	printf("Nice: %li\n", data.nice);
	printf("Prio: %li\n", data.prio);
	printf("Weight: %li\n", data.weight);
	printf("PID: %d\n", data.pid);
	printf("UID: %li\n", data.uid);
	printf("NofProcess: %d\n", data.nofprocess);
}
