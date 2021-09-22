#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    int fd;
    char buffer[100];
    char text[40] = "Made by Yajat Malhotra.\n";
    fd = open("a1.txt", O_RDWR);
    printf("fd = %d\n", fd);
    if (fd != -1) {
        write(fd, text, sizeof(text));
        lseek(fd, 0, SEEK_SET);
        read(fd, buffer, sizeof(text));
        printf("%s\nhas been written in a1.txt\n", buffer);
        close(fd);
    }
    return 0;
}
