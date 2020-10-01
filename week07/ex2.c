#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the size of your array:\n");
    scanf("%d", &n);

    int* ptr = malloc(sizeof(int) * n);

    for (int i = 0 ; i < n ; i++) {
        ptr[i] = i;
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}