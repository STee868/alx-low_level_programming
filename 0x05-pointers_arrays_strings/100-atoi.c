#include "main.h"
#include <limits.h>


/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int num = 0, sign = 1, found_num = 0;

    while (*s)
    {
        if (*s == '-')
        {
            sign = -sign;
        }
        else if (*s >= '0' && *s <= '9')
        {
            found_num = 1;
            num = num * 10 + (*s - '0');
            if (num < 0)
            {
                return (sign == -1 ? INT_MIN : INT_MAX);
            }
        }
        else if (found_num)
        {
            break;
        }
        s++;
    }
    return sign * num;
}
