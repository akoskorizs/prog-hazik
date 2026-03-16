#include <stdio.h>

void print_array(int tomb[], int meret) {
    if (meret <= 0) {
        printf("\n");
        return;
    }

    for (int i = 0; i < meret; i++) {
        printf("%d", tomb[i]);

        if (i < meret - 1) {
            printf(", ");
        }
    }

    printf("\n");
}

int main() {
    int szamok[] = {4, 7, 34, 23, 67};
    int meret = 5;

    printf("A tomb elemei:\n");
    print_array(szamok, meret);

    return 0;
}