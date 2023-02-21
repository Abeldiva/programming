#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all alphabet in lowercase\n
 * betty style doc for function main goes there
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch < = 'z'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
