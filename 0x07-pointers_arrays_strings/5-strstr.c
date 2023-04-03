#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack: string to search.
 * @needle: substring to look for.
 *
 * Return: pointer to start of located substring or NULL if missing.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start_haystack, *start_needle;

	while (*haystack != '\0')
	{
		start_haystack = haystack;
		start_needle = needle;

		while (*start_haystack != '\0' && *start_needle != '\0' && *start_haystack == *start_needle)
		{
			start_haystack++;
			start_needle++;
		}
		if (*start_needle == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
