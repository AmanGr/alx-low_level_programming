#include "main.h"

/**
 * rt - Entry point
 * @n: int variable
 * @x: int variable
 *
 * Return: x
 */

int rt(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x > (n / 2))
		return (-1);
	x++;
	x = rt(n, x);
	return (x);
}

/**
 * _sqrt_recursion - Entry point
 * @n: int variable
 *
 * Return: sq
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);

	return (rt(n, 2));
}
