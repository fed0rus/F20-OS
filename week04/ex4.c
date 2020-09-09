#include <stdio.h>
#include <stdlib.h>

int main() {
    char *buffer;
    size_t bufsize = 32;
    size_t characters;

    buffer = (char *)malloc(bufsize * sizeof(char));

    printf("Type your command: \n");
    characters = getline(&buffer,&bufsize,stdin);
    system(buffer);
    return 0;
}