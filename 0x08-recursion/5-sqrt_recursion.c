#include "main.h"
#include <stdio.h>

/**
 * check - checks for the square root
 * @a:Dt int
 * @b:Dt int
 *
 * Return: int
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recusion - returns the root of a number
 * @n: integer to find root of
 * Return: root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
