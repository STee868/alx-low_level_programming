#include <stdlib.h>
#include <time.h>
using namespace std;
/**
*main- program assigns a random number to the variable n
*result: 0 (success)
**/
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	cout << "Last digit of " << n << " is ";
	if (n % 10 > 5)
	{
		cout << n % 10 << " and is greater than 5" << endl;
	else if (n % 10 == 0)
		cout << n % 10 << " and is 0" << endl;
	else
		cout << n % 10 << " and is less than 6 and not 0" << endl;
	}
return (0);
}
