#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 1024

int main(int argc, char *argv[]) {
    FILE *fp;
    char fline[max];
    char *newline;
    int count = 0;
    int occur = 0;
    if (argc != 3) {
        printf("Usage:\t. /ques3_part1.c filename word \n ");
        exit(1);
    }
    if (!(fp = fopen(argv[1], "r"))) {
        printf("grep: file %s not found.\n", argv[1]);
        exit(1);
    }
    while (fgets(fline, max, fp) != NULL) {
        count++;
        if (newline == strchr(fline, "\n")) strcpy(newline, "\0");
        if (strstr(fline, argv[2]) != NULL) {
            printf("%s: %d %s \n", argv[1], count, fline);
            occur++;
        }
    }
}