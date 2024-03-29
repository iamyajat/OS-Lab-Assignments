// WRITE
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main() {
    key_t k = ftok("shmfile", 65);
    int shmid = shmget(k, 1024, 0666 | IPC_CREAT);
    char *str = (char *)shmat(shmid, (void *)0, 0);
    printf("Enter data to be written in the memory: ");
    scanf("%s", str);
    printf("WRITTEN!\n");
    shmdt(str);
    return 0;
}
