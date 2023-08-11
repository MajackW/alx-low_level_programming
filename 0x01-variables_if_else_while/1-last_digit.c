#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int r
	r = n%10;

	if (r == 0)
		printf("the last digit of %d is %d and is 0", n,r);
	else if (r != 0 & r < 6)
		printf("last digit of %d is %d and is less than 6\n", n,r);
	else if (r > 5)
		printf("the last digit of %d is %d and is greater than 0\n", n,r);

	return (0);
}
