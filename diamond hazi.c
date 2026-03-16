#include <stdio.h>

int main() {
    int magassag, i, j, szovoz_szam, csillag_szam;

    printf("Kerlek, add meg a gyemant magassagat (pozitiv paratlan szam): ");
    if (scanf("%d", &magassag) != 1) {
        printf("Hiba: Ervenytelen bemenet!\n");
        return 1;
    }

    if (magassag <= 0 || magassag % 2 == 0) {
        printf("Hiba: Csak pozitiv paratlan szamot adhatsz meg!\n");
        return 1;
    }

    for (i = 1; i <= (magassag / 2) + 1; i++) {
        for (j = 1; j <= (magassag / 2) + 1 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = magassag / 2; i >= 1; i--) {
        for (j = 1; j <= (magassag / 2) + 1 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}