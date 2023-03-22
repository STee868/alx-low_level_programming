#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n);
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i / 10 + '0'); /* print tens digit */
			_putchar(i % 10 + '0'); /* print ones digit */
			if (i != 98)
			{
				_putchar(','); /* print comma */
				_putchar(' '); /* print space */
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i / 10 + '0'); /* print tens digit */
			_putchar(i % 10 + '0'); /* print ones digit */
			if (i != 98)
			{
				_putchar(','); /* print comma */
				_putchar(' '); /* print space */
			}
		}
	}
	_putchar('\n'); /* print newline */
}
