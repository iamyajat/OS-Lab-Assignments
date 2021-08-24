#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
  int pid;
  pid = fork();
  switch(pid) {
    case -1: printf("pid = -1"); exit(1);
    case 0: printf("CHILD %d", getpid());
    default: printf("PARENT %d", getpid());
  }
  exit(0);
  return 0;
}
