#include <stdio.h>
#include <stdbool.h>

bool is_sorted(int tomb[], int meret) {
    if (meret <= 1) {
        return true;
    }

    for (int i = 0; i < meret - 1; i++) {
        if (tomb[i] > tomb[i + 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int szamok1[] = {1, 3, 5, 8, 12};
    int meret1 = 5;

    int szamok2[] = {4, 9, 2, 7, 5};
    int meret2 = 5;

    int szamok3[] = {10};
    int meret3 = 1;

    printf("Elso tomb vizsgalata: ");
    if (is_sorted(szamok1, meret1)) {
        printf("Rendezett\n");
    } else {
        printf("Nem rendezett\n");
    }

    printf("Masodik tomb vizsgalata: ");
    if (is_sorted(szamok2, meret2)) {
        printf("Rendezett\n");
    } else {
        printf("Nem rendezett\n");
    }

    printf("Harmadik tomb (egy elemu) vizsgalata: ");
    if (is_sorted(szamok3, meret3)) {
        printf("Rendezett\n");
    } else {
        printf("Nem rendezett\n");
    }

    return 0;
}