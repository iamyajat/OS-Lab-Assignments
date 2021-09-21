#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char* a1 = "Divit";
char* a2 = "Agrawal";

int main() {
    char buffer[16];
    int p[2], i;
    if (pipe(p) < 0) {
        exit(1);
    }
    write(p[1], a1, 16);
    write(p[1], a2, 16);
    for (i = 0; i < 2; i++) {
        read(p[0], buffer, 16);
        printf("%s\n", buffer);
    }
    return 0;
}