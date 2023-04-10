#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: pointer to string to search
 * @needle: pointer to substring to locate
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 *         substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*n && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (*n == '\0')
			return (h);
		haystack = h + 1;
	}

	return (NULL);
}
