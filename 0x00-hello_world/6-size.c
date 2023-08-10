#include <stdio.h>

	/*Description: main prints sizes of
	 * data types
	 */
int main(void)
{
	/*declares data types*/
	int a;
	char b;
	long int c;
	long long int d;
	float j;

	/*prints data sizes*/
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(j));
	return (0);
}
