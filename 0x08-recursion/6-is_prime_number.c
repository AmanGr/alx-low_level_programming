#include "main.h"

/**
 * pr - Entry point
 * @n: int variable
 * @x: int variable
 *
 * Return: x
 */

int pr(int n, int x)
{
	if (x >= (n / 2))
		return (1);

	if (n % x == 0)
		return (0);
	x++;
	x = pr(n, x);
	return (x);
}

/**
 * is_prime_number - Entry point
 * @n: int variable
 *
 * Return: p
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (pr(n, 2));
}
