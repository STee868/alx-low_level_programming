#include "main.h"

/**
 * _sqrt_recursion - Computes the natural square root of a number
 *
 * @n: The number to compute the square root of
 *
 * Return: Square root of n, or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Error case: negative number */
	{
		return (-1);
	}
	else if (n == 0 || n == 1) /* Base case: square root of 0 or 1 is n */
	{
		return (n);
	}
	else /* Recursive case */
	{
		int i = 1;
		
		while (i * i <= n)
		{
			i++;
		}
		i--;
		if (i * i == n)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
}
