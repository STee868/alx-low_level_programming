#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to write
 *
 * Return: 1 on success, -1 on error
 */
int _islower(int c);
int _putchar(char c);
int _putchar(char c)
{
	return (write(1, &c, 1) == 1 ? 1 : -1);
}

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
