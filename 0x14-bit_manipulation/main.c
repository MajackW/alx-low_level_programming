#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	unsigned res;

	res = binary_to_uint(argv[1]);
	printf("%d\n", res);
	return 0;
}
