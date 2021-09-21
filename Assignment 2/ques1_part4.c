#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    int pid = fork();
    int status;
    switch (pid) {
        case 0:
            printf("Child Process [PID: %d]\n", getpid());
            sleep(5);
            break;
        default:
            printf("Parent Process [PID: %d]\n", getpid());
            wait(&status);
            printf("Still in Parent Process [PID: %d]\n", getpid());
    }
    return 0;
}