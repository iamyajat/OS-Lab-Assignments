#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    int fd;
    char buffer[100];
    char text[40] = "Text written in check.txt";
    fd = open("check.txt", O_RDWR);
    printf("fd = %d\n", fd);
    if (fd != -1) {
        write(fd, text, sizeof(text));
        lseek(fd, 0, SEEK_SET);
        read(fd, buffer, sizeof(text));
        printf("%s - was written to the file check.txt", buffer);
        close(fd);
    }
    return 0;
}