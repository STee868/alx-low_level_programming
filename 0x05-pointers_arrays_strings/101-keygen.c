#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char password[87];

	srand(time(NULL));

	for (i = 0; i < 12; i++)
	{
		password[i] = rand() % 94 + 33; /* ASCII values between 33 and 126 */
	}
	password[i] = '\0';

	printf("%s\n", password);
	return (0);
}
