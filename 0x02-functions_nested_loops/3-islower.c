#include <unistd.h>
/**
 * _putchar  -function checks for lower case character
 *
 */
int _putchar(int c)
{
 return write(1, &c, 1);
}
