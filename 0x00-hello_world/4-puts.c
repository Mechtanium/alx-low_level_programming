#include <stdio.h>

/**
 *  main - Print a string to stdout
 *
 *  RETURN: The integer denotig the success of failure of puts. 0 (Success)
 *  */

int main(void)
{
	/**
	 * @c: return value from puts function. Boolean for success or failure
	 * */
	int c;
	c = puts("\"Programming is like building a multilingual puzzle");
	return (c);
}
