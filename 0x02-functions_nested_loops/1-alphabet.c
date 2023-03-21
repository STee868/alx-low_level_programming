#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		_putchar(j);
		_putchar('\n');
	}
}
/**
 * main - Entry point
 * Return: 0 (success)
 **/
int main(void)
{
	print_alphabet_x10(void);
	return (0);
}
