#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1
 */
int _putchar(char c);
int _islower(int c);
void test_islower(char n);
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * test_islower - Tests the _islower function
 * @n: The character to check
 */
void test_islower(char n)
{
	int r;

	r = _islower(n);
	if (r == 1)
		_putchar('1');
	else
		_putchar('0');
}
