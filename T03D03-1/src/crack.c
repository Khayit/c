#include <stdio.h>

int main() {
    float x, y;
    float radius = 5.0;

    printf("Enter the x-coordinate: ");
    if (scanf("%f", &x) != 1) {
        printf("n/a\n");
        return 0;
    }

    printf("Enter the y-coordinate: ");
    if (scanf("%f", &y) != 1) {
        printf("n/a\n");
        return 0;
    }

    if ((x * x) + (y * y) <= (radius * radius)) {
        printf("GOTCHA\n");
    } else {
        printf("MISS\n");
    }

    return 0;
}