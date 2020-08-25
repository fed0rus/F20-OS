#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void drawTower(int height) {
    int ws = height - 1;
    int stars = 1;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < ws; j++) {
            putchar(' ');
        }
        for (int j = 0; j < stars; j++) {
            putchar('*');
        }
        for (int j = 0; j < ws; j++) {
            putchar(' ');
        }
        if (i != height - 1) {
            printf("\n");
        }
        ws--;
        stars += 2;
    }
}

void drawSlope(int height) {
    int stars = 1;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < stars; j++) {
            putchar('*');
        }
        if (i != height - 1) {
            printf("\n");
        }
        stars++;
    }
}

void drawArrow(int height) {
    int stars = 1;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < stars; j++) {
            putchar('*');
        }
        if (i != height - 1) {
            printf("\n");
        }
        if (height % 2 == 0) {
            if (i + 1 < (height / 2)) {
                stars++;
            } else if (i + 1 > (height / 2)) {
                stars--;
            }
        } else {
            if (i < (height / 2)) {
                stars++;
            } else {
                stars--;
            }
        }
    }
}

void drawSquare(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height; j++) {
            putchar('*');
        }
        if (i != height - 1) {
            printf("\n");
        }
    }
}

int main(int argc, char **argv) {
    if (strcmp(argv[1], "tower") == 0) {
        drawTower(atoi(argv[2]));
    } else if (strcmp(argv[1], "slope") == 0) {
        drawSlope(atoi(argv[2]));
    } else if (strcmp(argv[1], "arrow") == 0) {
        drawArrow(atoi(argv[2]));
    } else if (strcmp(argv[1], "square") == 0) {
        drawSquare(atoi(argv[2]));
    } else {
        printf("No such shape: %s", argv[1]);
    }
}