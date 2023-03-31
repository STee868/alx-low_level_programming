#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *result = dest;

    while (*dest)
    {
        dest++;
    }

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return result;
}


/* _putchar.c */

#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}


/* main.c */

#include "main.h"

int main(void)
{
    char str1[100] = "Hello";
    char str2[] = " world!";
    char *result;

    result = _strcat(str1, str2);

    while (*result)
    {
        _putchar(*result);
        result++;
    }

    _putchar('\n');

    return (0);
}
