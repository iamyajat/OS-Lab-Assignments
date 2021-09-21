// sleep demonstration
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    sleep(10);
    printf("Process is out of sleep after 10 seconds");
    return 0;
}