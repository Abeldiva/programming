#include "main.h"
/**
 * main - Entry point
 * Description: print all alphabet in lowercase
 * Return: void
 */
void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
