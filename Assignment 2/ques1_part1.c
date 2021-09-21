#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
  int pid;
  pid = fork();
  switch(pid) {
    case -1: printf("pid = -1\n"); exit(1);
    case 0: printf("CHILD %d\n", getpid());
    default: printf("PARENT %d\n", getpid());
  }
  exit(0);
  return 0;
}
