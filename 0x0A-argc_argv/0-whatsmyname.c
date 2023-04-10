#include "main.h"

/**
 * main - prints the program's name, followed by a new line
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(char *argv[])
{
    int i;

    for (i = 0; argv[0][i] != '\0'; i++)
    {
        _putchar(argv[0][i]);
    }
    _putchar('\n');

    return (0);
}
