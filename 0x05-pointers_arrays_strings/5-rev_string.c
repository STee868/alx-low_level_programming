#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	char *start, *end, tmp;

	if (s == NULL)
		return;

	while (*(s + len) != '\0')
		len++;
	start = s;
	end = s + len - 1;

	while (end > start)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
