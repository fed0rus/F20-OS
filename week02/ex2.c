#include <stdio.h>
#include <string.h>

int main() {
    char word[256];
    gets(word);
    for (int i = strlen(word) - 1; i >= 0; i--) {
        if (word[i] != "\n") {
            putchar(word[i]);
        }
    }
}