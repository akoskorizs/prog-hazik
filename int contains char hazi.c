#include <stdio.h>

typedef char* string;

int contains_char(string s, char c) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == c) {
            return 1;
        }
        i = i + 1;
    }
    return 0;
}

int main() {
    string teszt_szoveg = "Almafa";
    char keresett = 'm';

    if (contains_char(teszt_szoveg, keresett)) {
        printf("A karakter megtalalhato a szovegben.\n");
    } else {
        printf("A karakter nincs benne a szovegben.\n");
    }

    return 0;
}