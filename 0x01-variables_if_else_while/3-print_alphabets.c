#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * betty style doc for function main goes there
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch < = 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch < = 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
