#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: Name of person to print
 * @f: Pointer to print functions
 *
 * Description: uses functions pointers to print a name.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
