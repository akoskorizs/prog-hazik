#include <stdio.h>
#include <stdbool.h>

bool contains(int tomb[], int meret, int keresett) {
    for (int i = 0; i < meret; i++) {
        if (tomb[i] == keresett) {
            return true;
        }
    }
    return false;
}

int main() {
    int szamok[] = {10, 2, 8, 45, 13, 7};
    int meret = 6;
    int szam;

    printf("Adja meg a keresett szamot: ");
    if (scanf("%d", &szam) != 1) {
        return 1;
    }

    if (contains(szamok, meret, szam)) {
        printf("A(z) %d szerepel a tombben.\n", szam);
    } else {
        printf("A(z) %d NEM szerepel a tombben.\n", szam);
    }

    return 0;
}