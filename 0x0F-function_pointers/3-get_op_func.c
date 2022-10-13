#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - finds the right math operation to perform
 * @s: Character pointer to the user operand input.
 *
 * Description: Selects the right functon from a list of functions.
 * Return: Return the function pointer or NULL if a suitable
 * function wasn't found.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 5;

	op_t ops[5] = {{"+", &op_add}, {"-", &op_sub}, {"*", &op_mul},
		{"/", &op_div}, {"%", &op_mod}};

	while (i)
	{
		if (strcmp(ops[i].op, s))
			return (ops[i].f);
		i--;
	}

	return (NULL);
}
