#include "main.h"

/**
 * is_prime - does it for me
 * @i: int
 * @n: integer I'm testing
 *
 * Return: value
 */

int is_prime(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (is_prime(i + 1, n));
	return (1);
}

/**
 * is_prime_number - is prime or not
 * @n: integer to compare
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (is_prime(i, n));
}
