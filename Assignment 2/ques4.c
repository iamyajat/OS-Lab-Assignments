#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char pname[100];
    printf("Enter the name of the process to be killed: ");
    scanf("%s", pname);
    char command[] = "pkill ";
    strcat(command, pname);
    system(command);
    return 0;
}