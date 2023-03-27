#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
	const char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const int len_charset = strlen(charset);
	const int len_password = 12;
	char password[len_password + 1];

	srand(time(NULL));

	for (int i = 0; i < len_password; i++)
	{
		password[i] = charset[rand() % len_charset];
	}
	password[len_password] = '\0';

	printf("%s\n", password);
	return (0);
}
