#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to be printed.
 *
 * Return: void.
 */
void print_number(int n)
{
	int i, num, div;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	num = n;
	div = 1;

	while (num / 10 != 0)
	{
		div *= 10;
		num /= 10;
	}

	while (div >= 1)
	{
		i = n / div;
		_putchar(i + '0');
		n = n % div;
		div /= 10;
	}
}

