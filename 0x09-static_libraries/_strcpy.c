#include "main.h"

/**
 * _strcpy - Copies a string to a buffer
 * @dest: The buffer to copy the string to
 * @src: The string to be copied
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;
	
	while ((*p++ = *src++));
	
	return (dest);
}
