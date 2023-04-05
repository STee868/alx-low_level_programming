#include "main.h"
/**
 * is_prime_helper - checks if a number is prime recursively
 *
 * @n: the number to check if it is prime
 * @i: the divisor to check if it divides n without a remainder
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	/* Check for divisibility by i and i+1 */
	return (is_prime_helper(n, i + 1));
}
/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
