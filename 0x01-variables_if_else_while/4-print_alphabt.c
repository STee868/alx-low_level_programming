#include <stdio.h>

/**
*main - program will print alphabet in lowercase but not letters e and q.
*
*return: Always 0 (Success)
**/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
return (0);
}
