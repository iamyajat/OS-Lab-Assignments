#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pid;
    pid = fork();
    switch (pid) {
        case -1:
            printf("pid = -1\n");
            exit(1);
        case 0:
            printf("CHILD PID: %d\n", getpid());
        default:
            printf("PARENT PID: %d\n", getpid());
    }
    exit(0);
    return 0;
}
