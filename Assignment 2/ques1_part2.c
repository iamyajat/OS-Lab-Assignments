#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int args, char *argv[]) {
    printf("PID [initial process]: %d\n", getpid());
    char *args1[] = {"Yajat", "Malhotra", NULL};
    execv("./ques1_part3", args1);
    return 0;
}