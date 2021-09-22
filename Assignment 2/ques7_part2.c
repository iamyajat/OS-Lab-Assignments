// background process
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
   pid_t pid = fork();

   if (pid == -1) {
      perror("fork failed");
      exit(1);
   }
   else if (pid == 0) {
      printf("Hello from the child process!\n");
      exit(0);
   }
   else {
      int status;
      (void)waitpid(pid, &status, 0);
   }
   return 0;
}
