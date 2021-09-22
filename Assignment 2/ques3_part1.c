#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    struct dirent *dp;
    char buff[150];
    DIR *dirp;
    printf("Enter the name of the directory: ");
    scanf("%s", buff);
    if ((dirp == opendir(buff)) == NULL) {
        printf("This directory (%s) doesn't exist!\n", buff);
        return -1;
    }
    while (dp = readdir(dirp)) printf("%s\n", dp->d_name);
    closedir(dirp);
    return 0;
}
