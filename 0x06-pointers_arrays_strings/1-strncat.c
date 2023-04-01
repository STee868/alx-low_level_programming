#include "main.h"

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: The destination buffer to append to.
 * @src: The source string to append from.
 * @n: The maximum number of characters to append.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
