#include <stdio.h>
#include "main.h"
/**
 * print_alphabet -function that prints the alphabet in lowercase
**/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
