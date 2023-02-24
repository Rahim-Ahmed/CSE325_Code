#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void* q(){
printf("ARE ");
}
void* w(){
printf("ROS");
}
void* e(){
printf("ES ");
}
void* r(){
printf("RED");
}
void* t(){
printf(" ?");
}

int main () {
pthread_t t1, t2,t3,t4,t5;

pthread_create(&t1, NULL, &q,NULL);
pthread_join(t1,NULL);

pthread_create(&t2, NULL, &w,NULL);
pthread_join(t2,NULL);

pthread_create(&t3, NULL, &e,NULL);
pthread_join(t3,NULL);

pthread_create(&t4, NULL, &r,NULL);
pthread_join(t4,NULL);

pthread_create(&t5, NULL, &t,NULL);
pthread_join(t5,NULL);


return 0;
}
