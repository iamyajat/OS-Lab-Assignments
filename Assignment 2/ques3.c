#include <dirent.h>
#include <stdio.h>
int main(int argc, char **argv) {
    DIR *dp;
    struct dirent *link;
    dp = opendir(argv[1]);
    printf("\n contents of the directory %s are \n", argv[1]);
    while ((link = readdir(dp)) != 0) printf("%s", link->d_name);
    closedir(dp);
    return 0;
}
