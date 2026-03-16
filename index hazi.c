#include <stdio.h>

int find_index(int tomb[], int meret, int keresett) {
    for (int i = 0; i < meret; i++) {
        if (tomb[i] == keresett) {
            return i;
        }
    }
    return -1;
}

int main() {
    int szamok[] = {10, 5, 8, 22, 13, 2, 7};
    int meret = 7;
    int keresett_szam;

    printf("Adja meg a keresett szamot: ");
    if (scanf("%d", &keresett_szam) != 1) {
        return 1;
    }

    int pozicio = find_index(szamok, meret, keresett_szam);

    if (pozicio != -1) {
        printf("A(z) %d szam a(z) %d. indexen szerepel.\n", keresett_szam, pozicio);
    } else {
        printf("A(z) %d szam nem szerepel a tombben.\n", keresett_szam);
    }

    return 0;
}