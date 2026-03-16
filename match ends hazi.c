#include "prog1.h"
#include <stdio.h>
#include <string.h>

int match_ends(int n, string words[])
{
    int db = 0;
    for (int i = 0; i < n; ++i)
    {
        int hossz = strlen(words[i]);
        
        // Feltételek: hossz >= 2 ÉS első karakter == utolsó karakter
        if (hossz >= 2 && words[i][0] == words[i][hossz - 1])
        {
            db++;
        }
    }
    return db;
}

int main()
{
    // 1. teszteset
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    int n1 = 5;
    printf("Eredmeny 1: %d (elvart: 3)\n", match_ends(n1, szavak1));

    // 2. teszteset
    string szavak2[] = { "", "x", "xy", "xyx", "xx" };
    int n2 = 5;
    printf("Eredmeny 2: %d (elvart: 2)\n", match_ends(n2, szavak2));

    // 3. teszteset
    string szavak3[] = { "aaa", "be", "abc", "hello" };
    int n3 = 4;
    printf("Eredmeny 3: %d (elvart: 1)\n", match_ends(n3, szavak3));

    return 0;
}