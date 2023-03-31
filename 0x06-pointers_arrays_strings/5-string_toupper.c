#inlcude "main.h"
/**
 * string_toupper - converts all lowercase letters in a string to uppercase
 * @str: string to modify
 *
 * Return: pointer to modified string
 */
char *string_toupper(char *str)
{
    int i;

    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    return str;
}
