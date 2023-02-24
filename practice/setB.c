#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include<sys/wait.h>


int a,b,c,sum;

void* q(){
printf("\nenter two  number: ");
scanf("%d",&a);
scanf("%d",&b);
}
void* w(){
printf("\nenter two choice ");
scanf("%d",&c);
if(c==1){
printf("\nAddition ");
sum= a+b;
}
else{
printf("\nsubtraction ");
sum= a-b;
}
}
void* e(){
printf("\nresult %d ",sum);
}


int main () {

pthread_t t1, t2,t3;





int pid= fork();

if(pid==0){

pthread_create(&t1, NULL, &q,NULL);
pthread_join(t1,NULL);

pthread_create(&t2, NULL, &w,NULL);
pthread_join(t2,NULL);

pthread_create(&t3, NULL, &e,NULL);
pthread_join(t3,NULL);

}
else{
wait(NULL);
printf("\nOperation done..CONGO!!\n");
}

return 0;
}
