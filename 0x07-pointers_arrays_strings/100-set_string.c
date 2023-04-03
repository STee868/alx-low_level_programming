#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a char
 * @to: pointer to a char to set the value of the pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
