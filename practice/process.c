#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int main () {
printf("HI me process\n");
int pid = fork();
if (pid ==-1){
return 1;
}
printf("me inside P %d,\n",getpid());
if (pid<=0){
printf("child P %d,\n",getpid());
}

if (pid!=0){
wait(NULL);
}

return 0;
}
