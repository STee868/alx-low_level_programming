#include <stdio.h>
/**
 * Main - a C program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (Success)
 */
int main(void)
{
        char a;
        int b;
        long int c;
        long long int d;
        float f;

        printf("Size of char:%lu byte(s)\n",sizeof(a));
        printf("Size of int: %lu byte(s)\n”, sizeof(b));
        printf("Size of long int: %lu bytes\n", sizeof(c));
        printf("Size of long long int: %lu bytes\n", sizeof(d));
        printf("Size of float: %lu bytes\n", sizeof(f));
        
    return 0;
}
