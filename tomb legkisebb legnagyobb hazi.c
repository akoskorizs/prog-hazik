#include <stdio.h>

int get_min(int tomb[], int meret) {
    int min = tomb[0];
    for (int i = 1; i < meret; i++) {
        if (tomb[i] < min) {
            min = tomb[i];
        }
    }
    return min;
}

int get_max(int tomb[], int meret) {
    int max = tomb[0];
    for (int i = 1; i < meret; i++) {
        if (tomb[i] > max) {
            max = tomb[i];
        }
    }
    return max;
}

int main() {
    int szamok[] = {12, 5, 8, -3, 19, 2, 7};
    int meret = 7;

    int legkisebb = get_min(szamok, meret);
    int legnagyobb = get_max(szamok, meret);

    printf("A tomb elemei: ");
    for (int i = 0; i < meret; i++) {
        printf("%d ", szamok[i]);
    }

    printf("\nLegkisebb elem: %d\n", legkisebb);
    printf("Legnagyobb elem: %d\n", legnagyobb);

    return 0;
}