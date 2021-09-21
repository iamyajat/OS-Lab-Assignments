#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
 printf("PID [initial process]: %d\n", getpid());
 char *args2[] = {"Yajat", "Malhotra", NULL};
 execv("./replace", args2);
 return 0;
}