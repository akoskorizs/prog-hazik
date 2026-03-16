#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double get_double() {
    double ertek;
    if (scanf("%lf", &ertek) != 1) {
        return -1.0;
    }
    return ertek;
}

double szamol_felszin(double r) {
    return 4 * pow(r, 2) * M_PI;
}

double szamol_terfogat(double r) {
    return (4.0 / 3.0) * pow(r, 3) * M_PI;
}

int main() {
    double sugar;

    printf("Add meg a gomb sugarat: ");
    
    sugar = get_double();

    if (sugar < 0) {
        printf("Hiba: Ervenytelen vagy negativ sugar!\n");
        return 1;
    }

    double felszin = szamol_felszin(sugar);
    double terfogat = szamol_terfogat(sugar);

    printf("Eredmenyek:\n");
    printf("A gomb felszine: %.4f\n", felszin);
    printf("A gomb terfogata: %.4f\n", terfogat);

    return 0;
}