#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0, i;

    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';

    return (dest);
}

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
 *
 * Return: 0 on success, -1 on error.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * _putchar_str - Writes a string to the standard output.
 * @str: The string to be written.
 *
 * Return: void.
 */
void _putchar_str(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    ptr = _strcat(s1, s2);

    _putchar_str(ptr);

    return (0);
}

