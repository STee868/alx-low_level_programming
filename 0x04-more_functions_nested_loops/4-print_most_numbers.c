#include "main.h"

/**
 * main Entry
 * print_most_numbers - prints the numbers from 0 to 9 except 2 and 4
 * return:0 (success)
 */
void print_most_numbers(void);
int main(void)
{
	void print_most_numbers(void)
	{
		int num;

		for (num = 0; num <= 9; num++)
		{
			if (num != 2 && num != 4)
				_putchar(num + '0');
		}
		_putchar('\n');
	}
	return (0);
}
