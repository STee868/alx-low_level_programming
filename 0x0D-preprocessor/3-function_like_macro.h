#include <stdio.h>
#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SUM(x, y) ((x) + (y))
#define PRODUCT(x, y) ((x) * (y))

#endif /* FUNCTION_LIKE_MACRO_H */


int main(void)
{
	int a = -5;
	int b = 10;
	double c = -3.14;
	double d = 2.71;

	printf("ABS(%d) = %d\n", a, ABS(a));
	printf("ABS(%d) = %d\n", b, ABS(b));
	printf("ABS(%.2f) = %.2f\n", c, ABS(c));
	printf("ABS(%.2f) = %.2f\n", d, ABS(d));

	return (0);
}
