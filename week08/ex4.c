#include <stdio.h>
#include <malloc.h>
#include <unistd.h>
#include <string.h>
#include <sys/resource.h>

int main() {
    int* tmp;

    for (int i = 0 ; i < 10; i++) {
        int numOfInts = (((i + 1) * 1000000) / sizeof(int)); // add 10 Mb at each iteration
        tmp = realloc(tmp, nOfInts * sizeof(int));
        memset(tmp, 0, nOfInts * sizeof(int));
        struct rusage usage;
        getrusage(RUSAGE_SELF,&usage);
        printf("Max usage: %ld\n", usage.ru_maxrss);
        sleep(1);
    }

    return 0;
}