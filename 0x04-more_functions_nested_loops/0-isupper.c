#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
