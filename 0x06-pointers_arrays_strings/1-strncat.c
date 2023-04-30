#incude "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp)
		temp++;

	while (*src && n--)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';

	return (dest);
}
