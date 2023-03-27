#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10))
			{
				return (sign == -1 ? INT_MIN : INT_MAX);
			}
			num = num * 10 + digit;
		}
		else if (num > 0)
		{
			break;
		}
		i++;
	}
	return (num * sign);
}
