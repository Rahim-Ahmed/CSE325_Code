#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

sem_t semaphore;

void* q(){
printf("This");
}
void* w(){
printf("is");
}
void* e(){
printf("CSE");
}
void* r(){
printf("207");
}
void* t(){
printf(".\n");
}
void* y(){
printf(" ");
}

int main () {
pthread_t t1, t2,t3,t4,t5,t6;


sem_init(&semaphore, 0 ,1); 

int pid = fork();
if(pid ==0){

sem_wait(&semaphore);
pthread_create(&t1, NULL, &q,NULL);
pthread_join(t1,NULL);
pthread_create(&t6, NULL, &y,NULL);
pthread_join(t6,NULL);
sem_post(&semaphore);

sem_wait(&semaphore);
pthread_create(&t2, NULL, &w,NULL);
pthread_join(t2,NULL);
pthread_create(&t6, NULL, &y,NULL);
pthread_join(t6,NULL);
sem_post(&semaphore);

sem_wait(&semaphore);
pthread_create(&t3, NULL, &e,NULL);
pthread_join(t3,NULL);
pthread_create(&t6, NULL, &y,NULL);
pthread_join(t6,NULL);
sem_post(&semaphore);

sem_wait(&semaphore);
pthread_create(&t4, NULL, &r,NULL);
pthread_join(t4,NULL);
sem_post(&semaphore);

sem_wait(&semaphore);
pthread_create(&t5, NULL, &t,NULL);
pthread_join(t5,NULL);
sem_post(&semaphore);
}


if(pid>0){
sleep(1);
printf("Program done\n");
}


sem_destroy(&semaphore);
return 0;
}
