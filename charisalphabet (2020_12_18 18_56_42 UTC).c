//char is alphabet or not
#include <stdio.h>
int main()
{
    char c;
    printf("enter a\n");
    scanf("%c", &c);

    // if (c >= 'a' && c <= 'z' || c >= 'A' && c <= "Z")
    // {
    //     printf("CAHARCTER IS ALPHABET");
    // }

    // else
    // {
    //     printf("NO CAHARCTER IS NOT AN ALPHABET");
    // }
    (c >= 'a' && c <= 'z' || c >= 'A' && c <= "Z") ? printf("Character is Alphabet") : printf("NOT AN ALPHABET");

    return 0;
}
