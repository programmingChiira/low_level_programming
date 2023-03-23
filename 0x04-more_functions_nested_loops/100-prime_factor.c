#include <stdio.h>
#include <math.h>

int main(void)
{
	long num = 612852475143;
	long factor;

	while (num % 2 == 0) // check for 2 as a factor
	{
		factor = 2;
		num /= 2;
	}

	for (long i = 3; i <= sqrt(num); i += 2) // check for odd factors
	{
		while (num % i == 0)
		{
			factor = i;
			num /= i;
		}
	}

	if (num > 2) // any remaining factor is prime
		factor = num;

	printf("%ld\n", factor);
	
	return 0;
}
