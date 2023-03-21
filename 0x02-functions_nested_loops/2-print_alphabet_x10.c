#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 * Return: 0 (success)
 **/
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
	}
/**
 * main Entry
 * return Always o
 */
}
int main(void)
{
	print_alphabet_x10();
	return(0);
}
