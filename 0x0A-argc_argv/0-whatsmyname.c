#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
    (void) argc;

    /* Print the first argument, which is the name of the program */
    printf("%s\n", argv[0]);

    return (0);
}
