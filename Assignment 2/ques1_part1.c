#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pid;
    pid = fork();
    printf("PID %d\n", pid);
    switch (pid) {
        case -1:
            printf("PID: -1\n");
            exit(1);
        case 0:
            printf("CHILD PID: %d\n", getpid()); break;
        default:
            printf("PARENT PID: %d\n", getpid()); break;
    }
    exit(0);
    return 0;
}
