#include "main.h"
#include <stddef.h>
/**
 * _strncpy - Copies a string, up to n characters.
 * @dest: The destination buffer to copy to.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, size_t n)
{
    /* Copy at most n characters from the source string to the destination buffer */
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* If the source string is shorter than n, fill the remaining characters with null bytes */
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    /* Return a pointer to the destination string */
    return dest;
}
