#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *fibo(void *num)
{
printf("%d\n", (int*)num);
int a = 0, b = 1, i, c,z, sum = 0;
sum = a+b;
printf("%d %d", a, b);
for(i = 2; i < z ; i++)
{
c = a + b;
sum = sum +c;
printf(" %d", c);
a = b;
b = c;
if(c == num)
{
    printf("SUM = %d\n", sum);
    exit(0);
}

}
}
int main()
{
int num = 4;
int *z = &num;
pthread_t thread_id;
printf("Before Threading\n");
pthread_create(&thread_id, NULL, fibo(z), NULL);
pthread_join(thread_id, NULL);
printf("After Threading\n");
printf("Anything\n");
exit(0);
return 0;
}
