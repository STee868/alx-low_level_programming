#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *str)
{
	if (*str == '\0')
		return (0);

	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/**
 * main - Entry point
 * @argc: The number of arguments passed
 * @argv: The array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i, j, len1, len2, len_res, carry, digit;
	int *res;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
        }
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	len1 = 0;
	while (argv[1][len1] != '\0')
		len1++;
	len2 = 0;
	while (argv[2][len2] != '\0')
		len2++;

	len_res = len1 + len2;
	res = malloc(len_res * sizeof(int));
	if (res == NULL)
		return (1);
	/* Initialize the result to 0 */
	for (i = 0; i < len_res; i++)
		res[i] = 0;

	/* Perform the multiplication */
	for (i = len1 - 1; i >= 0; i--)
        {
		carry = 0;
                for (j = len2 - 1; j >= 0; j--)
                {
                        digit = (argv[1][i] - '0') * (argv[2][j] - '0') + carry + res[i + j + 1];
                        carry = digit / 10;
                        res[i + j + 1] = digit % 10;
                }
                res[i] += carry;
        }

        /* Print the result */
        i = 0;
        while (i < len_res - 1 && res[i] == 0)
                i++;

        while (i < len_res)
        {
                printf("%d", res[i]);
                i++;
        }
        printf("\n");

        /* Free the memory */
        free(res);

        return (0);
}

