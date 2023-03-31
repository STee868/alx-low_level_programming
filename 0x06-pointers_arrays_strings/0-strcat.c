#include "main.h"
#include <unistd.h>

/**
 * main - a function that concatenates two strings
 * @dest: The destination string to append to.
 * @src: The source string to append from.
 *
 * Return: A pointer to the resulting string dest.
 */

int main(void)
{
	char str1[100] = "Hello, ";
	char str2[] = "world!";

	_strcat(str1, str2);
	_putchar_str(str1);
	return (0);
}
int _putchar(char c)
{
	write(1, &c, 1);
}
int _putchar_str(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';

	return (dest);
}

