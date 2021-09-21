#include <ctype.h>
#include <stdio.h>

int main() {
    FILE* pfile;
    int b;
    pfile = fopen("check.txt", "r");
    printf("Current content of the file:\n Text written in check.txt\n");
    printf("After removing spaces:\n");
    // printf("Textwrittenincheck.txt");
    if (pfile) {
        do {
            b = fgetc(pfile);
            if (!isgraph(b)) putchar(b);
        } while (b != EOF);
        fclose(pfile);
    }
    return 0;
}