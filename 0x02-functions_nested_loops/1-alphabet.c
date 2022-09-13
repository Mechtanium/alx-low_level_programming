#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - writes to standard output
 *
 * Description: Doesn't use the standard library. Uses fwrite.
 * Result: 0 (success) and 1 (failure)
 */

void print_alphabet(void)
{
        char str[] = "abcdefghijklmnopqrstuvwxyz";
        int i;

        for(i = 0; i < 26; i++)
        {
                _putchar(str[i]);
        }
        _putchar("\n");
}


/**
 * main - Entry point
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
int main(void)
{
	print_alphabet();
	return (0);
}

