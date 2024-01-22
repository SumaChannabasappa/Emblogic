#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() 
{
    char str[] = "This is a string with vowels";
    int i, j;

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';  // Add null terminator at the end

    printf("String without vowels: %s\n", str);  // Output: Ths s  strng wth vwls

    return 0;
}
