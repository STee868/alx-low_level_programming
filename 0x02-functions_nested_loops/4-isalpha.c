#include <unistd.h>

/**
 * _putchar - writes a character to standard output
 * @c: the character to write
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * test_isalpha - tests the _isalpha function for a given input
 * @n: the input to test
 *
 * Returns: none
 */
void test_isalpha(int n)
{
	int r;
	r = _isalpha(n);
	_putchar(r + '0');
	_putchar('\n');
}

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * main - entry point for the program
 *
 * Return: always 0
 */
int main(void)
{
    test_isalpha('H');
    test_isalpha('o');
    test_isalpha(108);
    test_isalpha(';');
    test_isalpha('\n');

    return (0);
}
