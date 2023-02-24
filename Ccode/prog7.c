#include <unistd.h>
#include <stdio.h>
int main()
{
fork();
    pid_t pid;
    pid_t pid1;
    pid = fork();
    printf("AB RAHIM\n");
    if ( pid > 0 ) {

    pid1=fork();
    printf("Hello\n");
    }

    else
    {
       fork();
       printf("HI\n");
    }
fork();
}
