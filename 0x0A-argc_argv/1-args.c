#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	/* Print the number of arguments (excluding the program name) */
	printf("%d\n", argc - 1);

	return (0);
}
