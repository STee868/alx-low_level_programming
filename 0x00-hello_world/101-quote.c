#include <stdio.h>
#include <unistd.h>

/**
 * main - A program that prints exact line to the standard error
 * Return: 1 (success)
*/
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs(msg, stderr);
	return (1);
}
