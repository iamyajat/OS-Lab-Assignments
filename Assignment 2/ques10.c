#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void* prime() {
    int n, c = 0;
    printf("Enter a number: \n");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            c++;
        }
    }
    if (c == 0) {
        printf("Your number is prime\n");
    } else {
        printf("Your number is not prime\n");
    }
}

int main(int argc, char* argv[]) {
    pthread_t thread;
    pthread_create(&thread, NULL, &prime, NULL);
    pthread_join(thread, NULL);
    return 0;
}