#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void* isPrimeNumber() {
    int n, c = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) c++;
    if (c == 0) {
        printf("PRIME NUMBER!\n");
    } else {
        printf("NOT A PRIME NUMBER!\n");
    }
}

int main(int argc, char* argv[]) {
    pthread_t thrd;
    pthread_create(&thrd, NULL, &isPrimeNumber, NULL);
    pthread_join(thrd, NULL);
    return 0;
}