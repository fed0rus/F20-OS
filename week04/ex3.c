#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    char command[512];
    printf("Enter your shell command:\n");
    scanf("%s", command);
    system(command);
    return 0;
}