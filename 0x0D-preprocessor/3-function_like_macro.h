#include <stdio.h>
#include "abs.h"

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main(void)
{
	int a = -5;
	int abs_a = ABS(a);

	printf("The absolute value of %d is %d\n", a, abs_a);

	return (0);
}

