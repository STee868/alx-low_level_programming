#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 *
 * @n: Number to calculate the square root of
 *
 * Return: The natural square root of n, or -1 if n does not have
 *         a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - Helper function to calculate the square root recursively
 * @n: The number to calculate the square root of
 * @i: The current guess for the square root
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_helper(n, i + 1));
}
