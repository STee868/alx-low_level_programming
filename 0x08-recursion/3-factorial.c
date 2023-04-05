
#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 *
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0) /* Error case: negative input */
	{
		return (-1);
	}
	else if (n == 0) /* Base case: factorial of 0 is 1 */
	{
		return (1);
	}
	else /* Recursive case */
	{
		return (n * factorial(n - 1));
	}
}
