#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of s which
 * consists entirely of bytes in accept
 * @s: string to be checked
 * @accept: characters to be searched
 *
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;
	
	count = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (count);
}
