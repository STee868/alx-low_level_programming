#include "main.h"

/**
 * _strlen_recursion - Returns length of a string recursively
 *
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
