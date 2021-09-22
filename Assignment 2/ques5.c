#include <ctype.h>
#include <stdio.h>

int main() {
    FILE* pfile;
    int ch;
    pfile = fopen("a2.txt", "r");
    printf("After removing all of the spaces:\n");
    if (pfile) {
        do {
            ch = fgetc(pfile);
            if (isgraph(ch)) printf("%c", ch);
        } while (ch != EOF);
        fclose(pfile);
    }
    printf("\n");
    return 0;
}
