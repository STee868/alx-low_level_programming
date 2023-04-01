#include "main.h"
#include <stddef.h>
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, const char *src)
{
	int dest_len = 0;
	char *dest_ptr = dest;

	while (*dest_ptr)
	{
		dest_ptr++;
		dest_len++;
	}

	while (*src)
	{
		*(dest_ptr++) = *(src++);
		dest_len++;
	}
	*(dest_ptr) = '\0';

	return (dest);
}
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char str1[100] = "Hello ";
	char str2[] = "world!";
	_strcat(str1, str2);
	_putchar_str(str1);

	return (0);
}
