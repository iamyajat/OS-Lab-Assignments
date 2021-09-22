// ORPHAN PROCESS
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
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
            sleep(5);
            printf("Orphan process ending after 5 seconds.\nNEW PARENT PID: %d\n",
                   getppid());
        default:
            printf("PARENT PID: %d\n", getpid());
            printf("Exit\n");
            exit(0);
    }
    exit(0);
    return 0;
}
