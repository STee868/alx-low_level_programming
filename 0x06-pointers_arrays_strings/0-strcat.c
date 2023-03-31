#include "main.h"

/* Declare the write function */
ssize_t write(int fd, const void *buf, size_t count);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * _strcat - concatenates two strings
 * @dest: string to append by src
 * @src: string to be appended to dest
 *
 * Return: pointer to resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
    int i, j;

    i = j = 0;
    while (dest[i] != '\0')
        i++;

    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return (dest);
}
