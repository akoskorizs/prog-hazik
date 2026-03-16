#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h>

int main() {
    double sugar, kerulet, terulet;

    printf("--- Kör Kerület és Terület Számító Program \n");
    printf("Ez a program kiszámítja egy kör kerületét és területét a sugár alapján.\n");

    printf("Kérlek, add meg a kör sugarát (pl. 5.5): ");
    if (scanf("%lf", &sugar) != 1) {
        printf("Hiba: Kérlek, érvényes számot adj meg!\n");
        return 1;
    }

    if (sugar <= 0) {
        printf("Hiba: A kör sugara csak pozitív szám lehet!\n");
    } else {
        
        kerulet = 2 * sugar * M_PI;
        
        terulet = pow(sugar, 2) * M_PI;

        printf("Eredmények \n");
        printf("A kör sugara:   %.2f\n", sugar);
        printf("A kör kerülete: %.4f\n", kerulet);
        printf("A kör területe: %.4f\n", terulet);
    }

    return 0;
}