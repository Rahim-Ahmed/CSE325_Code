#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){

   pid_t child_p;
   printf("Running ps with fork\n");

   child_p = fork();

   execlp("ps", "ps", "-ax", NULL);
    printf("Running ps with fork\n");
   return 0;
}
