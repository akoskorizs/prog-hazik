#include <stdio.h>

int main() {
    int n, i;

    printf("n: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    printf("\nA megadott tartomanyban (1-%d) neggyel oszthato szamok:\n", n);

    for (i = 1; i <= n; i++) {
        if (i % 4 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}