#include "main.h"

/**
 * puts2- prints every other character of a string, starting with the first
 * @str: input string
 */
void puts2(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len / 2) + 1;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
