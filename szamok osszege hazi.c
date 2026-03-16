#include <stdio.h>

int main() {
    
    int osszeg = 0;
    int i;

    printf("Egész számok összege 1-től 100-ig \n");

    for (i = 1; i <= 100; i++) {
        osszeg += i; // Ez ugyanaz, mint: osszeg = osszeg + i;
    }

    printf("A számok összege 1-től 100-ig: %d\n", osszeg);  

    return 0;
}