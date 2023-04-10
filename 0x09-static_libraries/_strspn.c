#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string to search
 * @accept: pointer to string containing acceptable characters
 *
 * Return: number of bytes in the initial segment of s which consist only of
 *         bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match = 1;
	char *a;

	while (*s && match)
	{
		match = 0;
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				match = 1;
				break;
			}
		}
		s++;
	}

	return (count);
}
