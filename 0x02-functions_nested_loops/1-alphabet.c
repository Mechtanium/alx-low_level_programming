#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - writes to standard output
 *
 * Description: Doesn't use the standard library. Uses fwrite.
 * Result: 0 (success) and 1 (failure)
 */
void print_alphabet(void)
{
        char str[] = "abcdefghijklmnopqrstuvwxyz\n";
        int i;

        for(i = 0; i <= 26; i++)
        {
                _putchar(str[i]);
        }
}

