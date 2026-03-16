#include <stdio.h>

int main() {
    int n, i;

    printf("n: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    printf("\nParatlan szamok %d-tol 1-ig visszafele:\n", n);

    for (i = n; i >= 1; i--) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}