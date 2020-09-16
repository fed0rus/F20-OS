// The deadlock happens when the consumer is going to sleep,
// but the producer wakes the consumer up and sets its flag to staying up before the consumer sets its flag to sleep.

#include <stdio.h>
#include <pthread.h>
#define BUFFER_SIZE 4

int counter = 0;
int buffer[BUFFER_SIZE];

// 0 for sleep, 1 for wake
int flagConsumer = 1;
int flagProducer = 1;

void sleep_producer() {
    flagProducer = 0;
    while(flagProducer == 0) {}
}

void sleep_consumer() {
    flagConsumer = 0;
    while(flagConsumer == 0) {}
}

void wakeup_producer() {
    flagProducer = 1;
}

void wakeup_consumer() {
    flagConsumer = 1;
}

void *producer() {
    while(1) {
        int stuff = 1;
        if (counter == BUFFER_SIZE) {
            sleep_producer();
        }
        buffer[counter] = stuff;
        counter++;
        if (counter == 1) {
            wakeup_consumer();
        }
        printf("Buffer: %d %d %d %d\n", buffer[0], buffer[1], buffer[2], buffer[3]);
    }
}

void *consumer() {
    while(1) {
        if (counter == 0) {
            sleep_consumer();
        }
        buffer[counter-1] = -1;
        counter--;
        if (counter == BUFFER_SIZE - 1) {
            wakeup_producer();
        }
    }
}

int main() {
    pthread_t tid1, tid2;
    pthread_create(&tid1, NULL, producer, NULL);
    pthread_create(&tid2, NULL, consumer, NULL);
    pthread_join(tid1, NULL);
    return 0;
}