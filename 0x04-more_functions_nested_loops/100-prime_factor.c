#include <stdio.h>
#include <math.h>

int main(void)
{
	long num = 612852475143;
	long factor = 2;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
			continue;
		}
		factor++;
	}

	printf("%ld\n", factor);

	return 0;
}
