#include <stdio.h>

int szamol_kerulet(int a, int b) {
    return 2 * (a + b);
}

int szamol_terulet(int a, int b) {
    return a * b;
}

int main() {
    int a_oldal, b_oldal;
    
    printf("Add meg az 'a' oldal hosszat: ");
    if (scanf("%d", &a_oldal) != 1) return 1;

    printf("Add meg a 'b' oldal hosszat: ");
    if (scanf("%d", &b_oldal) != 1) return 1;

    int kerulet = szamol_kerulet(a_oldal, b_oldal);
    int terulet = szamol_terulet(a_oldal, b_oldal);

    printf("Eredmenyek:\n");
    printf("Kerulet: %d\n", kerulet);
    printf("Terulet: %d\n", terulet);

    return 0;
}