#include <stdio.h>
#include "math.h"
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: ALways 0 (Success)
 */
int main(void)
{
	long int n;
	long int maxf;
	long int x;

	n = 612852475143;
	maxf = -1;
	while (n % 2 == 0)
	{
		maxf = 2;
		n /= 2;
	}
	for (x = 3; x <= sqrt(n); x = x + 2)
	{
		while (n % x == 0)
		{
			maxf = x;
			n = n / x;
		}
	}
	if (x > 2)
		maxf = x;
	printf("%ld\n", maxf);
	return (0);
}
