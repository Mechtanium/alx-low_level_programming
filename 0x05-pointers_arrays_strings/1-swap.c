#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap stuff around
 * @a: Var 1
 * @b: Var 2
 *
 * Description: Don't swap horses in crossing a stream
 * Return: 0 (success) and 1 (failure) to execute
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
