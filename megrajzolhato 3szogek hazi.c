#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(double a, double b, double c);

int main() {
    double x, y, z;

    printf("Adja meg a haromszog harom oldalat: ");
    
    if (scanf("%lf %lf %lf", &x, &y, &z) != 3) {
        printf("Hiba történt a beolvasáskor.\n");
        return 1;
    }

    if (valid_triangle(x, y, z)) {
        printf("A haromszog megszerkesztheto.\n");
    } else {
        printf("A haromszog nem szerkesztheto meg.\n");
    }

    return 0;
}

bool valid_triangle(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }

    if (a + b > c && a + c > b && b + c > a) {
        return true;
    } else {
        return false;
    }
}