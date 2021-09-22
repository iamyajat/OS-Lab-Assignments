#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFF_SIZE 32

char* msg1 = "YAJAT";
char* msg2 = "MALHOTRA";
char* msg3 = "20BCE0554";

int main() {
    char buff[BUFF_SIZE];
    int p[2], i;
    if (pipe(p) < 0) {
        exit(1);
    }
    write(p[1], msg1, BUFF_SIZE);
    write(p[1], msg2, BUFF_SIZE);
    write(p[1], msg3, BUFF_SIZE);
    for (i = 0; i < 2; i++) {
        read(p[0], buff, BUFF_SIZE);
        printf("%s\n", buff);
    }
    return 0;
}