#include <stdio.h>

int main() {
    int magassag, sor, i;

    printf("magassag: ");
    if (scanf("%d", &magassag) != 1) {
        return 1;
    }

    for (sor = 1; sor <= magassag; sor++) {
        for (i = 0; i < magassag - sor; i++) {
            printf(" ");
        }

        for (i = 0; i < sor; i++) {
            printf("#");
        }

        printf("  ");

        for (i = 0; i < sor; i++) {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}