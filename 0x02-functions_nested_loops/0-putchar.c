#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - Main entry point
 *
 * Description: Print _putchar to stdout
 * Result: 0 (success) 1 (failure)
 */

int main(void)
{
	char str[] = "_putchar\n";
	simple_write(str, strlen(str));
	return (0);
}

