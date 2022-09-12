#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: Another awesome print function
 *  Return: I'm comfortable wth t always being 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	double d;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of a int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof((long int) i));
	printf("Size of a long long int: %zu byte(s)\n", 
			sizeof((long long int) i));
	printf("Size of a float: %zu byte(s)\n", sizeof((float) d));
	return (0);
}

