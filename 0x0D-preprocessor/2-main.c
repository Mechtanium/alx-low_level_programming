#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints name
 *
 * Description: Prints the name of the c file not the excutable.
 * Return: 0 (success) and 1 (failure).
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (EXIT_SUCCESS);
}
