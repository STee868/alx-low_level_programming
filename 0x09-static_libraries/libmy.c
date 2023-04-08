#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: on success 1, on error -1 and errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - checks if a character is alphabetic
 * @c: the character to check
 *
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	return (_islower(c) || _isupper(c));
}

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute the absolute value of
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	return (n < 0 ? -n : n);
}

/**
 * _isupper - checks if a character is uppercase
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the length of a string
 * @s: the string to compute the length of
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * _puts - writes a string to stdout
 * @s: the string to write
 */
void _puts(char *s)
{
	write(1, s, _strlen(s));
}

/**
 * _strcpy - copies a string
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *orig_dest = dest;

	while ((*dest++ = *src++));

	return (orig_dest);
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of s
 */
int _atoi(char *s)
{
	int num = 0, sign = 1;

	if (*s == '-')
		sign = -1, s++;

	while (_isdigit(*s))
		num = num * 10 + (*s++ - '0');

	return (sign * num);
}

/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *orig_dest = dest;

	while (*dest)
		dest++;

	while ((*dest++ = *src++));

	return (orig_dest);
}

/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: the destination buffer
 * @src: the source string
 * @n: the maximum number of bytes
 */
