#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = '0';
	int p = '0';

	for (p = '0'; p <= '9'; p++)/* prints tens digit*/
	{
		for (d = '0'; d <= '9'; d++)/* prints ones digit*/
		{
			if (d > p)/* eliminates repetition*/
			{
				putchar(p);
				putchar(d);
				if (d != '9' && p == '8')/* adds comma and space*/
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
