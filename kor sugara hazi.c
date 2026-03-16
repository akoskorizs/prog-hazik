#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double szamol_kerulet(double r) {
    return 2 * r * M_PI;
}

double szamol_terulet(double r) {
    return r * r * M_PI;
}

int main() {
    double sugar;

    printf("Add meg a kor sugarat: ");
    
    if (scanf("%lf", &sugar) != 1) {
        printf("Hiba: Ervenytelen bemenet!\n");
        return 1;
    }

    if (sugar < 0) {
        printf("Hiba: A sugar nem lehet negativ!\n");
        return 1;
    }

    double kerulet = szamol_kerulet(sugar);
    double terulet = szamol_terulet(sugar);

    printf("Eredmenyek:\n");
    printf("A kor kerulete: %.4f\n", kerulet);
    printf("A kor terulete: %.4f\n", terulet);

    return 0;
}