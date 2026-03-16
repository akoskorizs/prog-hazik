#include <stdio.h>

int main() {

    int a_oldal, b_oldal, kerulet, terulet;

    printf("Téglalap Kerület és Terület Számító Program \n");
    printf("Kérlek, add meg a téglalap oldalait egész számokban!\n\n");

    printf("Add meg az 'a' oldal hosszát: ");
    scanf("%d", &a_oldal);

    printf("Add meg a 'b' oldal hosszát: ");
    scanf("%d", &b_oldal);


    kerulet = 2 * (a_oldal + b_oldal);
    terulet = a_oldal * b_oldal;

    printf("Eredmények \n");
    printf("A megadott oldalak: a = %d, b = %d\n", a_oldal, b_oldal);
    printf("A téglalap kerülete: %d\n", kerulet);
    printf("A téglalap területe: %d\n", terulet);
    

    return 0;
}