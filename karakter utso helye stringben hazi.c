#include <stdio.h>
#include <string.h>

int rfind_char(char s[], char c) {
    int hossz = strlen(s);
    int i;

    for (i = hossz - 1; i >= 0; i--) {
        if (s[i] == c) {
            return i;
        }
    }

    return -1;
}

int main() {
    char szoveg[] = "Aladar";
    char keresett = 'a';

    int index = rfind_char(szoveg, keresett);

    if (index != -1) {
        printf("Az utolso elofordulas indexe: %d\n", index);
    } else {
        printf("A karakter nem szerepel a sztringben.\n");
    }

    return 0;
}