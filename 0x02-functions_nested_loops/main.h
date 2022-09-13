#include <stdlib.h>
#include <stdio.h>

/**
 * simple_write: writes to standard output
 * 
 * Description: Doesn't use the standard library. Uses fwrite.
 * Result: 0 (success) and 1 (failure)
 */

void simple_write(char []text)
{
	fwrite(text, sizeof(text), 1, stdout)
}

