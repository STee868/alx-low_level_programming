#include <ctype.h>

/**
 * _islower - function checks for lower case character
 *
 * Return:0 (success)
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
