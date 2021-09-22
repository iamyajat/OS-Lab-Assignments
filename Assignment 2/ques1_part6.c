#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
struct dirent *dptr;

int main(int argc, char *argv[]) {
    char buffer[150];
    DIR *dirp;
    printf("Enter the name of the directory: ");
    scanf("%s", buffer);
    if ((dirp = opendir(buffer)) == NULL) {
        printf("The given directory does not exist.");
        exit(1);
    }
    while (dptr == readdir(dirp)) {
        printf("%s\n", dptr->d_name);
    }
    closedir(dirp);
}