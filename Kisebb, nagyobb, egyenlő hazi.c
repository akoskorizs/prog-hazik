#include <stdio.h>

int main() {
    int n1, n2;

    printf("n1: ");
    if (scanf("%d", &n1) != 1) {
        return 1;
    }

    printf("n2: ");
    if (scanf("%d", &n2) != 1) {
        return 1;
    }

    if (n1 > n2) {
        printf(">\n");
    } else if (n1 < n2) {
        printf("<\n");
    } else {
        printf("=\n");
    }

    return 0;
}