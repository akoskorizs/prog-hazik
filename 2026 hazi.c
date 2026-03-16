#include <stdio.h>

int main()
{
    /* ASCII: 'c'=99, 'a'=97 -> 99-97 = 2 */
    int kettő = 'c' - 'a';
    
    /* ASCII: 'a'=97, 'a'=97 -> 97-97 = 0 */
    int nulla = 'a' - 'a';
    
    /* ASCII: 'g'=103, 'a'=97 -> 103-97 = 6 */
    int hat = 'g' - 'a';

    printf("%d%d%d%d\n", kettő, nulla, kettő, hat);

    return nulla;
}