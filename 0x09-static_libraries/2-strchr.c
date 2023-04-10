#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to be searched
 * @c: the character to be searched for
 *
 * Return: pointer to the first occurrence of the character c in s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
