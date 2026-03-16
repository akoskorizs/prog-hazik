#include <stdio.h>

int main() {
    int szam;
    int osszeg = 0;

    printf("Számok összegezése 0 végjelig \n");

    
    while {
        printf("Egesz szam (vege: 0): ");
        
        
        if (scanf("%d", &szam) != 1) {
            printf("Hiba: Kerlek, csak egesz szamot adj meg!\n");
            while(getchar() != '\n'); 
            continue;
        }

        
        if (szam == 0) {
            break;
        }

        osszeg += szam;
    }

    
    printf("\nElemek osszege: %d\n", osszeg);

    return 0;
}