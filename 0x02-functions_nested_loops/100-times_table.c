#include "main.h"

/**
 * print_number - prints an integer as a string
 * @n: the number to print
 */
void print_number(int n)
{
	int divisor = 1;
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	while (num / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
	}
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table to print
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int product = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
				if (product < 100)
					_putchar(' ');
			}
			print_number(product);
		}
		_putchar('\n');
    }
}
