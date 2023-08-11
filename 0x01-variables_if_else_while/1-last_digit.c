#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Description: main - prints alphabets
 *
 * Return 0(Success)
 */
int main(void)/* main function*/
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;

	if (r == 0)
		printf("Last digit of %d is %d and is 0", n, r);
	else if (r != 0 && r < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	else if (r > 5)
		printf("Last digit of %d is %d and is greater than 0\n", n, r);

	return (0);
}
