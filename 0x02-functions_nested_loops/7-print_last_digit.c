#include "main.h"
int print_last_digit(int n);
int _abs(int n);
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be processed
 *
 * Return: Value of last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = _abs(n % 10);
	_putchar(last_digit + '0');
	return (last_digit);
}
