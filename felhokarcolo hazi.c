#include <stdio.h>

int szomszedos_kulonbseg_osszeg(int tomb[], int meret) {
    int osszeg = 0;

    if (meret < 2) {
        return 0;
    }

    for (int i = 0; i < meret - 1; i++) {
        int kulonbseg = tomb[i] - tomb[i + 1];
        
        if (kulonbseg < 0) {
            kulonbseg = -kulonbseg;
        }
        
        osszeg += kulonbseg;
    }

    return osszeg;
}

int main() {
    int felhokarcolok[] = {2, 1, 0, 2, 4};
    int meret = 5;

    int eredmeny = szomszedos_kulonbseg_osszeg(felhokarcolok, meret);

    printf("A szomszedos felhokarcolok magassagkulonbsegenek osszege: %d\n", eredmeny);

    return 0;
}