#include <stdio.h>

int main() {
    int szam;
    int pozitiv_db = 0;

    printf("Pozitív számok számlálása 0 végjelig \n");

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

                if (szam > 0) {
            pozitiv_db++;
        }
    }

    printf("\nPozitiv elemek szama: %d\n", pozitiv_db);

    return 0;
}