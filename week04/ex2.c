#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    // The more times a process forks, the more children processes it will have.
    // The processes spawn as in a binary-tree-like style.
    int n = 5;
    pid_t p;
    for (int i = 0; i < n; i++) {
        p = fork();
        if (i == 0) {
            printf("PID: %d", p);
        }
    }
    sleep(5);
    return 0;
}