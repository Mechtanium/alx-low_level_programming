#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	while (n > 9 || n < -9)
		n %= 10;
	printf("%d", n);
	if (n > 5)
		printf(" and is greater than 5\n");
	else if (n == 0)
		printf(" and is 0\n");
	else if (n < 6)
		printf(" and is less than 6 and not 0\n");

	return (0);
}

