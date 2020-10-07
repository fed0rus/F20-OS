#include <malloc.h>
#include <unistd.h>
#include <string.h>

int main() {
    int* tmp;
    for (int i = 0 ; i < 10; i++) {
        int nOfInts = (((i + 1) * 1000000) / sizeof(int)); // add 10 Mb at each iteration
        tmp = realloc(tmp, nOfInts * sizeof(int));
        memset(tmp, 0, nOfInts * sizeof(int));
        sleep(1);
    }
    return 0;
}

/*
ex2:
Swappouts and swappins stay the same. Free memory decreased by about 10 Mb each second.

ex3:
Physical and virtual memory are increased by about 100 Mb.
*/