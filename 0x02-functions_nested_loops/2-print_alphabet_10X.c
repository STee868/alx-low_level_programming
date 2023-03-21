#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - function that prints 10 times the alphabet, in lowercase
 *return: 0 (success)
 **/
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		letter = 'a';
		putchar('\n');
		i++;
	}
	return (0);
}
