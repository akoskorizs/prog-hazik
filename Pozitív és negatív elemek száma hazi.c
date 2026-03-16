#include <stdio.h>

int main() {
    int szam;
    int pozitiv_db = 0;
    int negativ_db = 0;

    printf("Pozitiv es negativ szamok szamlalasa 0 vegjelig \n");

    while  {
        printf("Egesz szam (vege: 0): ");
        
        if (scanf("%d", &szam) != 1) {
            printf("Hiba: Ervenytelen bemenet!\n");
            while(getchar() != '\n'); 
            continue;
        }

        if (szam == 0) {
            break;
        }

        if (szam > 0) {
            pozitiv_db++;
        } else {
            negativ_db++;
        }
    }

    printf("\nPozitiv elemek szama: %d\n", pozitiv_db);
    printf("Negativ elemek szama: %d\n", negativ_db);

    return 0;
}