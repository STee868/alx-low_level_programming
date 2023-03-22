#include "main.h"
void test_isalpha(int n)
{
    int r;

    r = _isalpha(n);
    _putchar(r + '0');
    _putchar('\n');
}

int main(void)
{
    test_isalpha('H');
    test_isalpha('o');
    test_isalpha(108);
    test_isalpha(';');
    test_isalpha('\n');

    return (0);
}
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 *         0 otherwise
 */
int _isalpha(int c);
int_putchar(char c);

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
