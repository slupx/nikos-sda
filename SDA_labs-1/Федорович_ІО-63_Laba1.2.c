#include <stdio.h>

#include <stdio.h>

#include <stdio.h>

int main() {
    double x, y;
    printf("Vvedit znachennya x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Pomyilka vvodu!\n");
        return 1;
    }

    int defined = 0;

    if (x >= 2) {
        if (x <= 7) {
            y = x * x * x + 14;
            defined = 1;
        }
    }

    if (defined == 0) {
        if (x <= -3) {
            y = -4 * x * x * x + 3 * x - 7;
            defined = 1;
        }
    }

    if (defined == 0) {
        if (x >= 14) {
            y = -4 * x * x * x + 3 * x - 7;
            defined = 1;
        }
    }

    if (defined == 1) {
        printf("y = %.6lf\n", y);
    } else {
        printf("Funkciya ne vyznachena dlya zadanoho x.\n");
    }

    return 0;
}