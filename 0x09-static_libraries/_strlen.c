#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: The string to be evaluated
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;
	
	while (*s++)
		len++;
	return (len);
}
