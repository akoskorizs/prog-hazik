#include <stdio.h>

void line(char c, int length) {
    int i;
    for (i = 0; i < length; i++) {
        putchar(c);
    }
    putchar('\n');
}

int main() {
    printf("hello\n");
    line('-', 40);
    printf("world\n");

    return 0;
}