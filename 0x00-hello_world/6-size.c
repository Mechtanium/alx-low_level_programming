#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: Another awesome print function
 *  Return: I'm comfortable wth t always being 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}

