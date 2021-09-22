#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    int pid = fork();
    if (pid) {
        int p = 0;
        int status;
        sleep(10);
        p = wait(&status);
        printf("Pid %d exited...\n", p);
    } else {
        for (int i = 0; i < 10; i++) {
            printf("Child is sleeping... %d\n";
            sleep(1);
        }
        printf("Child exited...");
    }
    return 0;
}