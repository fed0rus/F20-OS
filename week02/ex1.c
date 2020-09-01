#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    int a = INT_MAX;
    float b = FLT_MAX;
    double c = DBL_MAX;

    printf("Integer value: %d\nInteger size: %d\n", a, sizeof(a));
    printf("\nFloat value: %f\nFloat size: %d\n", b, sizeof(b));
    printf("\nDouble value: %lf\nDouble size: %d\n", c, sizeof(c));
}