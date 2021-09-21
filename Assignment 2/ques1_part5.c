#include <stdio.h>
#include <sys/stat.h>
int main() {
    struct stat sfile;
    stat("stat.c", &sfile);
    printf("st_mode = %o", sfile.st_mode);
    return 0;
}