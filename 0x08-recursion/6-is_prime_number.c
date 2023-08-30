#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - checks if number is prime
 * is_prime_number_helper - helps is prime number
 * @n: number to be checked
 * Return: 1 if is prime 0 otherwise
 * @y: starting point
 */
int is_prime_number_helper(int n, int y);
int is_prime_number(int n)
{
	int res;

	res = is_prime_number_helper(n, 2);
	return (res);
}
/**
 * is_prime_number_helper - helps prime
 * @n: number
 * @y: number
 * Return: int
 */

int is_prime_number_helper(int n, int y)
{
	int res;

	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	if (y * y > n)
		return (1);
	if (n % y == 0)
		return (0);
	res = is_prime_number_helper(n, y + 1);
	return (res);
}