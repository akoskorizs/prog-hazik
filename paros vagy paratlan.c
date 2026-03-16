#include <stdio.h>

int is_even(int n);
int is_odd(int n);

int main() {
    int szam;

    printf("Adjon meg egy egesz szamot: ");
    if (scanf("%d", &szam) != 1) {
        return 1;
    }

    if (is_even(szam)) {
        printf("A szam paros.\n");
    }

    if (is_odd(szam)) {
        printf("A szam paratlan.\n");
    }

    return 0;
}

int is_even(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int is_odd(int n) {
    return !is_even(n);
}