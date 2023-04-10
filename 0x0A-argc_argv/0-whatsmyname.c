#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program
 *
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the strings which are those arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    /* Print the first argument, which is the name of the program */
    printf("%s\n", argv[0]);

    return (0);
}
