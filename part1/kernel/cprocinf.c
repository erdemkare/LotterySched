#include <linux/cprocinf.h>
#include <asm/current.h>

asmlinkage int sys_cprocinf(struct prcdata *data){
	cli();
	struct prcdata ksdata;
	if(copy_from_user(&ksdata,data,sizeof(struct prcdata))==0){
		ksdata.counter=current->counter;
		ksdata.nice=current->nice;
		ksdata.prio=20-current->nice;
		ksdata.weight=current->counter+ksdata.prio;
		ksdata.pid=current->pid;
		ksdata.uid=current->uid;
		ksdata.nofprocess=current->user->processes.counter;
		copy_to_user(data,&ksdata,sizeof(struct prcdata));
		sti();
		return 0;
	}
	else{
		sti();
		return -1;
	}
}
