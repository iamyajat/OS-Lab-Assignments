#include <ctype.h>
#include <stdio.h>

int main() {
    FILE* pfile;
    int b;
    pfile = fopen("q5.txt", "r");
    printf("Current content of the file:\n Made by Yajat Malhotra\n");
    printf("After removing all of the spaces:\n");
    if (pfile) {
        do {
            b = fgetc(pfile);
            if (!isgraph(b)) putchar(b);
        } while (b != EOF);
        fclose(pfile);
    }
    return 0;
}