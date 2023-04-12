#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str = NULL;
	size_t s1_len = 0, s2_len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	concat_str = malloc(s1_len + s2_len + 1);
	if (concat_str == NULL)
	{
		return (NULL);
	}
	strcpy(concat_str, s1);
	strcpy(concat_str + s1_len, s2);

	return (concat_str);
}

