#include<stdio.h>
#include<unistd.h>
#include"main.h"

/**
 * _putchar  -function checks for lower case character
 *
 */
int _putchar(int c)
{
 return fwrite(1, &c, 1);
}
