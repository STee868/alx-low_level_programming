#include "main.h"

/**
 * count_args - counts the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: The number of arguments
 */
int count_args(char **argv)
{
    int count = 0;

    while (*argv)
    {
        count++;
        argv++;
    }

    return (count);
}

/**
 * main - prints the number of arguments passed to the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
    int num_args;

    num_args = count_args(argv);
    _putchar(num_args + '0');
    _putchar('\n');

    return (0);
}
