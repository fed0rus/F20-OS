#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    /* The process forks and creates children processes in a binary-tree-like order.
     * PIDs are consequent as their processes are created one after another. */

    int n = 3;
    pid_t pid = fork();
    if (pid > 0) { // parent
        printf("Hello from parent [%d - %d]\n", getpid(), n);
    } else if (pid == 0) { //child
        printf("Hello from child [%d - %d]\n", getpid(), n);
    }
    return 0;
}
