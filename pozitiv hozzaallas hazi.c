Ebben a feladatban a tömböt referencia szerint (vagyis az eredeti memóriacímet használva) kezeljük, így az eljárásban végzett módosítások megmaradnak a main függvényben is. A negatív számok átalakításához használhatjuk a saját logikánkat (szorzás -1-gyel), vagy a stdlib.h könyvtár abs() függvényét.

Íme a megoldás C nyelven:

C
#include <stdio.h>
#include <stdlib.h>

void make_absolute(int tomb[], int meret) {
    for (int i = 0; i < meret; i++) {
        if (tomb[i] < 0) {
            tomb[i] = -tomb[i];
        }
    }
}

void print_array(int tomb[], int meret) {
    for (int i = 0; i < meret; i++) {
        printf("%d", tomb[i]);
        if (i < meret - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int szamok[] = {12, -5, 0, -8, -22, 13, -1};
    int meret = 7;

    printf("Eredeti tomb: ");
    print_array(szamok, meret);

    make_absolute(szamok, meret);

    printf("Modositott tomb: ");
    print_array(szamok, meret);

    return 0;
}