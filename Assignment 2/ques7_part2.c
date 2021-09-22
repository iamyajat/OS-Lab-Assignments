// background process
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf(
        "Process in running in background. Press q to finish the background "
        "process\n");
    while (1) {
        printf("Enter 'q' to kill process...\n");
        char c = getchar();
        // sleep(10);
        if (c == 'q') {
            printf("You killed the background process\n");
            exit(1);
        }

        sleep(1);
    }
    printf("Process is out of sleep after 10 seconds\n");
    return 0;
}