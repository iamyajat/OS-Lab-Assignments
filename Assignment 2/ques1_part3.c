#include <stdio.h>
#include <unistd.h>

int main(int args, char *argv[]) {
    printf("PID [replaced process]: %d\n", getpid());
    return 0;
}
