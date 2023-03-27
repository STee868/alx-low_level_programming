#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,
 *               separated by comma, followed by a new line.
 * @a: Pointer to the first element of the array.
 * @n: Number of elements to print.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{

		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
