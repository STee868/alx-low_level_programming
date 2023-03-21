#include <stdio.h>
#include <ctype.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1
 */
int _putchar(char c);
test_islower(int n);
int main(void);
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
                return (1);
        else
                return (0);
}
void test_islower(int n)
{
        int r;

        r = _islower(n);
        _putchar(r + '0');
        _putchar('\n');
}
int main(void)
{
        test_islower('h');
        return (0);
}
