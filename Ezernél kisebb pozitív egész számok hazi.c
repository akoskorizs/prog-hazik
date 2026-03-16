#include <stdio.h>

int main() {
    int osszeg = 0;
    int i;

    printf("3-mal vagy 5-tel osztható számok összege 1000 alatt \n");

        for (i = 1; i < 1000; i++) {
        
        if (i % 3 == 0 || i % 5 == 0) {
            osszeg += i;
        }
    }

    printf("A keresett összeg: %d\n", osszeg);    

    return 0;
}