// Orphan process
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    int pid = fork();
    if (pid > 0) {
        printf("Exit\n");
        exit(0);
    } else {
        sleep(10);
        printf(
            "\nOrphan process ending after 10 seconds\nCurrent Parent Process "
            "id: %d\n",
            getppid());
    }
    return 0;
}