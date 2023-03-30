**
 * _strncpy - Copies a string, up to n characters.
 * @dest: The destination buffer to copy to.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination buffer dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    // Copy at most n characters from the source string to the destination buffer
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    // If n is greater than the length of src, fill the remaining bytes with null characters
    for ( ; i < n; i++) {
        dest[i] = '\0';
    }

    // Return a pointer to the destination buffer
    return dest;
}
