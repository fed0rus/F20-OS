#include <stdlib.h>
#include <stdio.h>

int* myRealloc(int* ptr, size_t size){

    if (size == 0) {
        free(ptr);
        return ptr;
    }

    int* ptr1 = malloc(size);

    if (ptr == NULL) {
        return ptr;
    }

    for (int i = 0; i < (size)/sizeof(int); i++) {
        ptr1[i] = ptr[i];
    }

    free(ptr);
    return ptr1;
}

int main() {
    int *ptr;
    int n1, n2;

    printf("Write the size of your array: ");
    scanf("%d", &n1);
    printf("The array: ");

    ptr = malloc(sizeof(int) * n1);

    for (int i = 0; i < n1; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\nWrite a new size of the array: ");
    scanf("%d", &n2);

    ptr = myRealloc(ptr, sizeof(int) * n2);

    printf("Your new array: ");

    for (int i = 0; i < n2; i++) {
        printf("%d ", ptr[i]);
    }

    return 0;
}

/*
The task didn't specify any input data, so the array is populated with junk.
My console:
    Write the size of your array: 10
    The array: 0 0 0 0 0 0 0 0 0 0
    Write a new size of the array: 4
    Your new array: 0 0 0 0
 */