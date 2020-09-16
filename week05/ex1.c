#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *thread_function(pthread_t tid) {
    printf("Printing from a thread with ID %d\n", tid);
    return NULL;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        pthread_t tid;
        printf("\nCreating the thread number %d...\n", i + 1);
        pthread_create(&tid, NULL, thread_function, tid);
        pthread_join(tid, NULL);
    }
    return 0;
}