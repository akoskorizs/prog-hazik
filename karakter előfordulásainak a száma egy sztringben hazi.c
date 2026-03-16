#include <stdio.h>
#include <string.h>

int char_count(char s[], char c) {
    int db = 0;
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] == c) {
            db++;
        }
        i++;
    }

    return db;
}

int main() {
    char szoveg[] = "Abba";
    
    printf("A 'b' betuk szama: %d\n", char_count(szoveg, 'b'));
    printf("Az 'a' betuk szama: %d\n", char_count(szoveg, 'a'));
    printf("Az 'x' betuk szama: %d\n", char_count(szoveg, 'x'));

    return 0;
}