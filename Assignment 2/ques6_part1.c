#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
    int pid, pid1, pid2;
    pid = fork();
    if (pid == 1) {
        printf("Error");
        exit(1);
    }
    if (pid != 0) {
        pid1 = getpid();
        printf("\n The process ID is: %d", pid1);
    } else {
        pid2 = getpid();
        printf("\n The child process ID is %d", pid2);
    }
    return 0;
}