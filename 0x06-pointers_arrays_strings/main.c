#include "main.h"

int main(void)
{
    char s1[] = "Hello, ";
    char s2[] = "world!";
    char *result;

    result = _strcat(s1, s2);

    while (*result)
        _putchar(*result++);

    _putchar('\n');

    return (0);
}
