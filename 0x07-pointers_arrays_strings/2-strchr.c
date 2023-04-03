#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: the character to search for
 *
 * Return: pointer to 1st occurrence of c in s, or NULL if c missing
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)

			return (s);
		s++;
	}
	if (c == '\0')
		return (s);

	return (char *) NULL;
}
