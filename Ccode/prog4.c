#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>



int main()
{
    pid_t pid;
    printf("Running ps again with fork\n");
    pid = fork();
    if ( pid == 0 ) { // in the child, do exec
        execlp("ps", "ps", "-ax", NULL);
    }
    else if (pid < 0) // failed to fork
    {
        printf("fork failed.\n");
        exit(1);
    }
    else // parent
    {
        wait(NULL);
    }
    exit(0);
}
