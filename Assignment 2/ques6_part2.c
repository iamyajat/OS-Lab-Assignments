// Zombie process
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    int pid = fork();
    if (pid > 0) {
        sleep(10);
        printf("Awake from sleep after 10 seconds\n");
    } else {
        printf("Exit\n");
        exit(0);
    }
    return 0;
}