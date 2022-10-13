#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Calculates maths binary operations
 * @argc: Interger argument count from the command line.
 * @argv: Array pointer to argument strings
 *
 * Description: Calculate the binary operations + - / * % only if argc is 4 and
 * the second operand is not 0 in the case of / and %
 * Return: EXIT_SUCCCESS if all goes well, or BAD_ARGS wrong argument count,
 * BAD_OPS for wrong operator arguments and BAD_MATH for DIV/0 errors.
 */
int main(int argc, char *argv[])
{
	int a, b, r;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("%s\n", "Error");
		return (BAD_ARGS);
	}

	if (*argv[2] != '+' || *argv[2] != '-' || *argv[2] != '/' || *argv[2] !=
			'*' || *argv[2] != '%')
	{
		printf("%s\n", "Error");
		return (BAD_OPS);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == 0)
	{
		printf("%s\n", "Error");
		return (BAD_MATH);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);
	r = f(a, b);

	printf("%d\n", r);

	return (EXIT_SUCCESS);
}
