#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int* a, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (*(a + j) > *(a + j + 1)) {
                int tmp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = tmp;
            }
        }
    }
}

int main() {
    const int n = 8;
    int a[n] = {4, 2, 7, 1, 43, 0, 99, 12};
    printf("List:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\nSorted list:\n");
    bubble_sort(&a, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}